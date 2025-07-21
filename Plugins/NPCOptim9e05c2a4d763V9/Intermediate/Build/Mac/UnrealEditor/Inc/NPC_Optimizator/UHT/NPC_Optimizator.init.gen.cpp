// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_Optimizator_init() {}
	NPC_OPTIMIZATOR_API UFunction* Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NPC_Optimizator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NPC_Optimizator()
	{
		if (!Z_Registration_Info_UPackage__Script_NPC_Optimizator.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NPC_Optimizator",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x082DB2CA,
				0xBA8A3893,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NPC_Optimizator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NPC_Optimizator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NPC_Optimizator(Z_Construct_UPackage__Script_NPC_Optimizator, TEXT("/Script/NPC_Optimizator"), Z_Registration_Info_UPackage__Script_NPC_Optimizator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x082DB2CA, 0xBA8A3893));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
