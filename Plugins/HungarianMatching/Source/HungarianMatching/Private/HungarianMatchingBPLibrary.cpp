// Copyright Epic Games, Inc. All Rights Reserved.

#include "HungarianMatchingBPLibrary.h"
#include "HungarianMatching.h"

UHungarianMatchingBPLibrary::UHungarianMatchingBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UHungarianMatchingBPLibrary::AssignFormationWithHungarian(const TArray<FVector2D>& AllyAILocations, const TArray<FVector2D>& FormationLocations, TArray<FVector2D>& AssignedFormationLocations)
{
	const int32 N = AllyAILocations.Num();

	if (N == 0 || N != FormationLocations.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid input: AllyAILocations and FormationLocations must be non-empty and of same length."));
		return;
	}

	// Step 1: Build cost matrix
	TArray<TArray<float>> Cost;
	Cost.SetNum(N);
	for (int32 i = 0; i < N; ++i)
	{
		Cost[i].SetNum(N);
		for (int32 j = 0; j < N; ++j)
		{
			Cost[i][j] = FVector2D::DistSquared(AllyAILocations[i], FormationLocations[j]);
		}
	}

	// Step 2: Hungarian Algorithm
	TArray<float> U, V;
	U.Init(0.0f, N);
	V.Init(0.0f, N);

	TArray<int32> MatchToRight; // Formation -> AI
	TArray<int32> MatchToLeft;  // AI -> Formation
	MatchToRight.Init(-1, N);
	MatchToLeft.Init(-1, N);

	for (int32 i = 0; i < N; ++i)
	{
		TArray<float> MinSlack;
		TArray<int32> Prev;
		TArray<bool> VisitedLeft, VisitedRight;

		MinSlack.Init(FLT_MAX, N);
		Prev.Init(-1, N);
		VisitedLeft.Init(false, N);
		VisitedRight.Init(false, N);

		TArray<int32> Queue;
		Queue.Add(i);

		TArray<int32> Parent;
		Parent.Init(-1, N);

		int32 FinalMatch = -1;

		while (true)
		{
			while (!Queue.IsEmpty())
			{
				int32 L = Queue[0];
				Queue.RemoveAt(0);
				VisitedLeft[L] = true;

				for (int32 R = 0; R < N; ++R)
				{
					if (VisitedRight[R]) continue;

					float Slack = Cost[L][R] - U[L] - V[R];
					if (Slack < MinSlack[R])
					{
						MinSlack[R] = Slack;
						Prev[R] = L;
					}

					if (FMath::IsNearlyZero(MinSlack[R]))
					{
						VisitedRight[R] = true;
						if (MatchToRight[R] == -1)
						{
							FinalMatch = R;
							break;
						}
						else
						{
							int32 NextL = MatchToRight[R];
							if (!VisitedLeft[NextL])
							{
								Queue.Add(NextL);
								Parent[NextL] = R;
							}
						}
					}
				}
				if (FinalMatch != -1) break;
			}

			if (FinalMatch != -1) break;

			// Label update
			float Delta = FLT_MAX;
			for (int32 R = 0; R < N; ++R)
			{
				if (!VisitedRight[R])
				{
					Delta = FMath::Min(Delta, MinSlack[R]);
				}
			}

			for (int32 L = 0; L < N; ++L)
			{
				if (VisitedLeft[L]) U[L] += Delta;
			}
			for (int32 R = 0; R < N; ++R)
			{
				if (VisitedRight[R]) V[R] -= Delta;
				else MinSlack[R] -= Delta;
			}

			for (int32 R = 0; R < N; ++R)
			{
				if (!VisitedRight[R] && FMath::IsNearlyZero(MinSlack[R]))
				{
					VisitedRight[R] = true;
					if (MatchToRight[R] == -1)
					{
						FinalMatch = R;
						break;
					}
					else
					{
						int32 NextL = MatchToRight[R];
						if (!VisitedLeft[NextL])
						{
							Queue.Add(NextL);
							Parent[NextL] = R;
						}
					}
				}
			}
		}

		// Augment path
		while (FinalMatch != -1)
		{
			int32 L = Prev[FinalMatch];
			int32 Temp = MatchToRight[FinalMatch];

			MatchToRight[FinalMatch] = L;
			MatchToLeft[L] = FinalMatch;

			FinalMatch = (Temp != -1) ? Parent[Temp] : -1;
		}
	}

	// Step 3: Fallback 매칭 - unmatched AI에게 가장 가까운 빈 Formation 배정
	TSet<int32> UsedFormationIndices;
	for (int32 i = 0; i < N; ++i)
	{
		if (MatchToLeft[i] != -1)
		{
			UsedFormationIndices.Add(MatchToLeft[i]);
		}
	}

	for (int32 i = 0; i < N; ++i)
	{
		if (MatchToLeft[i] == -1)
		{
			float ClosestDist = FLT_MAX;
			int32 ClosestFormation = -1;

			for (int32 j = 0; j < N; ++j)
			{
				if (UsedFormationIndices.Contains(j)) continue;

				float Dist = FVector2D::DistSquared(AllyAILocations[i], FormationLocations[j]);
				if (Dist < ClosestDist)
				{
					ClosestDist = Dist;
					ClosestFormation = j;
				}
			}

			if (ClosestFormation != -1)
			{
				MatchToLeft[i] = ClosestFormation;
				UsedFormationIndices.Add(ClosestFormation);
				UE_LOG(LogTemp, Warning, TEXT("AI %d fallback assigned to Formation %d"), i, ClosestFormation);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("AI %d fallback failed! No available formations."), i);
			}
		}
	}

	// Step 4: Build final output
	AssignedFormationLocations.Init(FVector2D::ZeroVector, N);
	for (int32 i = 0; i < N; ++i)
	{
		int32 MatchedFormationIndex = MatchToLeft[i];
		if (FormationLocations.IsValidIndex(MatchedFormationIndex))
		{
			AssignedFormationLocations[i] = FormationLocations[MatchedFormationIndex];
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AI %d has invalid formation index after fallback."), i);
			AssignedFormationLocations[i] = FVector2D::ZeroVector;
		}
	}
}
