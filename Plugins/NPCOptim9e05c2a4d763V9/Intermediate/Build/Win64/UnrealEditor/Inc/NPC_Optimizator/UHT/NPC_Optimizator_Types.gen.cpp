// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC_Optimizator/Public/NPC_Optimizator_Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_Optimizator_Types() {}

// Begin Cross Module References
NPC_OPTIMIZATOR_API UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType();
NPC_OPTIMIZATOR_API UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave();
UPackage* Z_Construct_UPackage__Script_NPC_Optimizator();
// End Cross Module References

// Begin Enum EOptimizationWave
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimizationWave;
static UEnum* EOptimizationWave_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimizationWave.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimizationWave.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave, (UObject*)Z_Construct_UPackage__Script_NPC_Optimizator(), TEXT("EOptimizationWave"));
	}
	return Z_Registration_Info_UEnum_EOptimizationWave.OuterSingleton;
}
template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationWave>()
{
	return EOptimizationWave_StaticEnum();
}
struct Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FirstWave.DisplayName", "First wave" },
		{ "FirstWave.Name", "EOptimizationWave::FirstWave" },
		{ "Invisible.DisplayName", "Invisible" },
		{ "Invisible.Name", "EOptimizationWave::Invisible" },
		{ "ModuleRelativePath", "Public/NPC_Optimizator_Types.h" },
		{ "NoOptimization.DisplayName", "No optimization" },
		{ "NoOptimization.Name", "EOptimizationWave::NoOptimization" },
		{ "SecondWave.DisplayName", "Second wave" },
		{ "SecondWave.Name", "EOptimizationWave::SecondWave" },
		{ "ThirdWave.DisplayName", "Third wave" },
		{ "ThirdWave.Name", "EOptimizationWave::ThirdWave" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimizationWave::Invisible", (int64)EOptimizationWave::Invisible },
		{ "EOptimizationWave::NoOptimization", (int64)EOptimizationWave::NoOptimization },
		{ "EOptimizationWave::FirstWave", (int64)EOptimizationWave::FirstWave },
		{ "EOptimizationWave::SecondWave", (int64)EOptimizationWave::SecondWave },
		{ "EOptimizationWave::ThirdWave", (int64)EOptimizationWave::ThirdWave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NPC_Optimizator,
	nullptr,
	"EOptimizationWave",
	"EOptimizationWave",
	Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave()
{
	if (!Z_Registration_Info_UEnum_EOptimizationWave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimizationWave.InnerSingleton, Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimizationWave.InnerSingleton;
}
// End Enum EOptimizationWave

// Begin Enum EOptimizationBaseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimizationBaseType;
static UEnum* EOptimizationBaseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimizationBaseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimizationBaseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType, (UObject*)Z_Construct_UPackage__Script_NPC_Optimizator(), TEXT("EOptimizationBaseType"));
	}
	return Z_Registration_Info_UEnum_EOptimizationBaseType.OuterSingleton;
}
template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationBaseType>()
{
	return EOptimizationBaseType_StaticEnum();
}
struct Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC_Optimizator_Types.h" },
		{ "PlayerCamera.DisplayName", "Based on player camera position" },
		{ "PlayerCamera.Name", "EOptimizationBaseType::PlayerCamera" },
		{ "PlayerPawn.DisplayName", "Based on player pawn position" },
		{ "PlayerPawn.Name", "EOptimizationBaseType::PlayerPawn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimizationBaseType::PlayerPawn", (int64)EOptimizationBaseType::PlayerPawn },
		{ "EOptimizationBaseType::PlayerCamera", (int64)EOptimizationBaseType::PlayerCamera },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NPC_Optimizator,
	nullptr,
	"EOptimizationBaseType",
	"EOptimizationBaseType",
	Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType()
{
	if (!Z_Registration_Info_UEnum_EOptimizationBaseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimizationBaseType.InnerSingleton, Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimizationBaseType.InnerSingleton;
}
// End Enum EOptimizationBaseType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_NPC_Optimizator_Types_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimizationWave_StaticEnum, TEXT("EOptimizationWave"), &Z_Registration_Info_UEnum_EOptimizationWave, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3592421585U) },
		{ EOptimizationBaseType_StaticEnum, TEXT("EOptimizationBaseType"), &Z_Registration_Info_UEnum_EOptimizationBaseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1644746876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_NPC_Optimizator_Types_h_1312146576(TEXT("/Script/NPC_Optimizator"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_NPC_Optimizator_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_NPC_Optimizator_Types_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
