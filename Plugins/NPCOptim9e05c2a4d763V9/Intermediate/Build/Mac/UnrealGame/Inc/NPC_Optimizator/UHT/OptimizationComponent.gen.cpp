// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC_Optimizator/Public/OptimizationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimizationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption();
NPC_OPTIMIZATOR_API UClass* Z_Construct_UClass_UOptimizationProxyComponent();
NPC_OPTIMIZATOR_API UClass* Z_Construct_UClass_UOptimizationProxyComponent_NoRegister();
NPC_OPTIMIZATOR_API UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType();
NPC_OPTIMIZATOR_API UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave();
NPC_OPTIMIZATOR_API UFunction* Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NPC_Optimizator();
// End Cross Module References

// Begin Delegate FOptimizationChangeWave
struct Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics
{
	struct _Script_NPC_Optimizator_eventOptimizationChangeWave_Parms
	{
		EOptimizationWave NewWave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewWave_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave = { "NewWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms, NewWave), Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave, METADATA_PARAMS(0, nullptr) }; // 3592421585
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NPC_Optimizator, nullptr, "OptimizationChangeWave__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOptimizationChangeWave_DelegateWrapper(const FMulticastScriptDelegate& OptimizationChangeWave, EOptimizationWave NewWave)
{
	struct _Script_NPC_Optimizator_eventOptimizationChangeWave_Parms
	{
		EOptimizationWave NewWave;
	};
	_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms Parms;
	Parms.NewWave=NewWave;
	OptimizationChangeWave.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOptimizationChangeWave

// Begin Class UOptimizationProxyComponent Function DisableAllOptimizations
struct Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Optimizator" },
		{ "Comment", "// Execute this function for disable all optimization for current owner\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Execute this function for disable all optimization for current owner" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimizationProxyComponent, nullptr, "DisableAllOptimizations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimizationProxyComponent::execDisableAllOptimizations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAllOptimizations();
	P_NATIVE_END;
}
// End Class UOptimizationProxyComponent Function DisableAllOptimizations

// Begin Class UOptimizationProxyComponent Function EnableForceOptimizationWave
struct Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics
{
	struct OptimizationProxyComponent_eventEnableForceOptimizationWave_Parms
	{
		EOptimizationWave Wave;
		bool Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Optimizator" },
		{ "Comment", "// Execute this function for force set optimization wave\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Execute this function for force set optimization wave" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Wave_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Wave;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Wave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Wave = { "Wave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimizationProxyComponent_eventEnableForceOptimizationWave_Parms, Wave), Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave, METADATA_PARAMS(0, nullptr) }; // 3592421585
void Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((OptimizationProxyComponent_eventEnableForceOptimizationWave_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimizationProxyComponent_eventEnableForceOptimizationWave_Parms), &Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Wave_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Wave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimizationProxyComponent, nullptr, "EnableForceOptimizationWave", nullptr, nullptr, Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::OptimizationProxyComponent_eventEnableForceOptimizationWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::OptimizationProxyComponent_eventEnableForceOptimizationWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimizationProxyComponent::execEnableForceOptimizationWave)
{
	P_GET_ENUM(EOptimizationWave,Z_Param_Wave);
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableForceOptimizationWave(EOptimizationWave(Z_Param_Wave),Z_Param_Enable);
	P_NATIVE_END;
}
// End Class UOptimizationProxyComponent Function EnableForceOptimizationWave

// Begin Class UOptimizationProxyComponent Function EnableOptimizations
struct Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Optimizator" },
		{ "Comment", "// Execute this function for enable optimization after disabling it\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Execute this function for enable optimization after disabling it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimizationProxyComponent, nullptr, "EnableOptimizations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimizationProxyComponent::execEnableOptimizations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableOptimizations();
	P_NATIVE_END;
}
// End Class UOptimizationProxyComponent Function EnableOptimizations

// Begin Class UOptimizationProxyComponent
void UOptimizationProxyComponent::StaticRegisterNativesUOptimizationProxyComponent()
{
	UClass* Class = UOptimizationProxyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableAllOptimizations", &UOptimizationProxyComponent::execDisableAllOptimizations },
		{ "EnableForceOptimizationWave", &UOptimizationProxyComponent::execEnableForceOptimizationWave },
		{ "EnableOptimizations", &UOptimizationProxyComponent::execEnableOptimizations },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimizationProxyComponent);
UClass* Z_Construct_UClass_UOptimizationProxyComponent_NoRegister()
{
	return UOptimizationProxyComponent::StaticClass();
}
struct Z_Construct_UClass_UOptimizationProxyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NPC Optimizator" },
		{ "ClassGroupNames", "NPCOptimizator" },
		{ "DisplayName", "NPC Optimization Component" },
		{ "HideCategories", "ComponentReplication Activation Replication Collision Sockets Tags" },
		{ "IncludePath", "OptimizationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToFirstOptimization_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// The distance from the player to the bots at which the first optimization level is enabled. \n// Bots closer than this distance are not optimized\n" },
		{ "DisplayName", "Distance to first wave" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "The distance from the player to the bots at which the first optimization level is enabled.\nBots closer than this distance are not optimized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSecondOptimization_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// The distance from the player to the bots at which the second level of optimizations is enabled.\n" },
		{ "DisplayName", "Distance to second wave" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "The distance from the player to the bots at which the second level of optimizations is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToThirdOptimization_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// The distance from the player to the bots at which the third level of optimizations is enabled.\n" },
		{ "DisplayName", "Distance to third wave" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "The distance from the player to the bots at which the third level of optimizations is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVisibleDistance_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Bots outside this distance will be hidden and simplified as much as possible\n" },
		{ "DisplayName", "Max visible distance" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Bots outside this distance will be hidden and simplified as much as possible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationBasedOn_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Optimization is based on the distance from the player's pawn or camera\n" },
		{ "DisplayName", "Optimization type" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Optimization is based on the distance from the player's pawn or camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseOptimizationByTag_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// If you want optimize only component with special tag - enable it\n" },
		{ "DisplayName", "Use optimization by tag" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "If you want optimize only component with special tag - enable it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationTag_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Special tag for component needed for optimization it\n" },
		{ "DisplayName", "Optimization tag" },
		{ "EditCondition", "UseOptimizationByTag" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Special tag for component needed for optimization it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreOptimizationTag_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Special tag to ignore any component optimizations\n" },
		{ "DisplayName", "Ignore optimization tag" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Special tag to ignore any component optimizations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableMovementWhenNotVisible_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// If you want stop NPC movement when it not visible\n" },
		{ "DisplayName", "Disable movement when invisible" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "If you want stop NPC movement when it not visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreCameraSight_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Enable this setting in order to ignore the calculation of the visibility of NPCs by the camera and calculate only by distance.\n" },
		{ "DisplayName", "Ignore camera sight" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable this setting in order to ignore the calculation of the visibility of NPCs by the camera and calculate only by distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreCameraSightOnSmallDistance_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Ignore camera visibility when bots are close to the player\n" },
		{ "DisplayName", "Ignore camera sight in 'no optimization' wave" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Ignore camera visibility when bots are close to the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Enabling this setting gives you more frames per second, but when mesh switch from invisibility back to visibility, the number of frames may drop slightly\n" },
		{ "DisplayName", "Disable skeletal mesh tick when invisible" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enabling this setting gives you more frames per second, but when mesh switch from invisibility back to visibility, the number of frames may drop slightly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableGroomTickWhenNotVisible_MetaData[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Disable groom tick when invisible" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideAllStaticMeshes_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// If you want hide all static meshes attached to skeletal meshes\n// If you need hide only special static meshes use Optimization Tag for it\n" },
		{ "DisplayName", "Hide all attached static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "If you want hide all static meshes attached to skeletal meshes\nIf you need hide only special static meshes use Optimization Tag for it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOptimizationOnListenServer_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// When using a listener server, there are moments when the client-server does not see bots and because of this,\n// other players have visual glitches, to avoid this, bots on the listener server ignore any optimizations\n" },
		{ "DisplayName", "Disable optimization on listen server" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "When using a listener server, there are moments when the client-server does not see bots and because of this,\nother players have visual glitches, to avoid this, bots on the listener server ignore any optimizations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOptimizationOnDedicatedServer_MetaData[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Disable optimization on dedicated server" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOptimizationInSimulationMode_MetaData[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Disable optimization in simulation mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeAIController_MetaData[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Optimize AI controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizePathFollowComponent_MetaData[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Optimize path follow component" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_MovementMode_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_HideShadows_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWaveGroom_HideShadows_MetaData[] = {
		{ "Category", "Optimization|First wave|Groom" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWaveGroom_Hide_MetaData[] = {
		{ "Category", "Optimization|First wave|Groom" },
		{ "DisplayName", "Hide groom" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWaveGroom_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|First wave|Groom" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal meshes on this wave\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal meshes on this wave\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWaveGroom_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|First wave|Groom" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "DisplayName", "Visibility Based Anim Tick Option" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_MovementMode_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWaveGroom_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Second wave|Groom" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWaveGroom_Hide_MetaData[] = {
		{ "Category", "Optimization|Second wave|Groom" },
		{ "DisplayName", "Hide groom" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWaveGroom_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Second wave|Groom" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWaveGroom_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Second wave|Groom" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "DisplayName", "Visibility Based Anim Tick Option" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_MovementMode_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWaveGroom_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Third wave|Groom" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWaveGroom_Hide_MetaData[] = {
		{ "Category", "Optimization|Third wave|Groom" },
		{ "DisplayName", "Hide groom" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWaveGroom_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Third wave|Groom" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWaveGroom_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Third wave|Groom" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "DisplayName", "Visibility Based Anim Tick Option" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_MovementMode_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_HideSkeletalMesh_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Hide skeletal mesh when it not visible for player\n" },
		{ "DisplayName", "Hide skeletal mesh" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide skeletal mesh when it not visible for player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvisibleGroom_Hide_MetaData[] = {
		{ "Category", "Optimization|Invisible|Groom" },
		{ "DisplayName", "Hide groom" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvisibleGroom_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Invisible|Groom" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvisibleGroom_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Invisible|Groom" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "DisplayName", "Visibility Based Anim Tick Option" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvisibleGroom_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Invisible|Groom" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoOptimization_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invisible_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChangeWave_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Called when component going to new optimization wave */" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Called when component going to new optimization wave" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToFirstOptimization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSecondOptimization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToThirdOptimization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVisibleDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptimizationBasedOn_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OptimizationBasedOn;
	static void NewProp_UseOptimizationByTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseOptimizationByTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptimizationTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoreOptimizationTag;
	static void NewProp_DisableMovementWhenNotVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableMovementWhenNotVisible;
	static void NewProp_IgnoreCameraSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreCameraSight;
	static void NewProp_IgnoreCameraSightOnSmallDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreCameraSightOnSmallDistance;
	static void NewProp_DisableSkeletalMeshTickWhenNotVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableSkeletalMeshTickWhenNotVisible;
	static void NewProp_DisableGroomTickWhenNotVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableGroomTickWhenNotVisible;
	static void NewProp_HideAllStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HideAllStaticMeshes;
	static void NewProp_bDisableOptimizationOnListenServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOptimizationOnListenServer;
	static void NewProp_bDisableOptimizationOnDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOptimizationOnDedicatedServer;
	static void NewProp_bDisableOptimizationInSimulationMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOptimizationInSimulationMode;
	static void NewProp_bOptimizeAIController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeAIController;
	static void NewProp_bOptimizePathFollowComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizePathFollowComponent;
	static void NewProp_FirstWave_AlwaysCheckFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_AlwaysCheckFloor;
	static void NewProp_FirstWave_EnablePhysicsInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_EnablePhysicsInteraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstWave_MaxSimulationTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstWave_MaxSimulationIterations;
	static void NewProp_FirstWave_RunPhysicsWithNoController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_RunPhysicsWithNoController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstWave_MovementMode;
	static void NewProp_FirstWave_SweepWhileNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_SweepWhileNavWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstWave_OptimizatedMovementTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstWave_OptimizatedMovementTickMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstWave_OptimizatedMovementTickMax;
	static void NewProp_FirstWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_UseRandomOptimizationTickForMovement;
	static void NewProp_FirstWave_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_HideShadows;
	static void NewProp_FirstWaveGroom_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWaveGroom_HideShadows;
	static void NewProp_FirstWaveGroom_Hide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWaveGroom_Hide;
	static void NewProp_FirstWave_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DisableMeshCollision;
	static void NewProp_FirstWaveGroom_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWaveGroom_DisableMeshCollision;
	static void NewProp_FirstWave_NeedHideStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_NeedHideStaticMeshes;
	static void NewProp_FirstWave_UseUpdateRateOptimizations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_UseUpdateRateOptimizations;
	static void NewProp_FirstWave_UsePerBoneMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_UsePerBoneMotionBlur;
	static void NewProp_FirstWave_DisableClothSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DisableClothSimulation;
	static void NewProp_FirstWave_DisableMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DisableMorphTarget;
	static void NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating;
	static void NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating;
	static void NewProp_FirstWave_AllowRigidBodyAnimNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_AllowRigidBodyAnimNode;
	static void NewProp_FirstWave_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_GenerateOverlapEvents;
	static void NewProp_FirstWaveGroom_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWaveGroom_GenerateOverlapEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstWave_VisibilityBasedAnimTickOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstWave_VisibilityBasedAnimTickOption;
	static void NewProp_SecondWave_AlwaysCheckFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_AlwaysCheckFloor;
	static void NewProp_SecondWave_EnablePhysicsInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_EnablePhysicsInteraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondWave_MaxSimulationTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondWave_MaxSimulationIterations;
	static void NewProp_SecondWave_RunPhysicsWithNoController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_RunPhysicsWithNoController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondWave_MovementMode;
	static void NewProp_SecondWave_SweepWhileNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_SweepWhileNavWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondWave_OptimizatedMovementTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondWave_OptimizatedMovementTickMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondWave_OptimizatedMovementTickMax;
	static void NewProp_SecondWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_UseRandomOptimizationTickForMovement;
	static void NewProp_SecondWave_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_HideShadows;
	static void NewProp_SecondWaveGroom_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWaveGroom_HideShadows;
	static void NewProp_SecondWaveGroom_Hide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWaveGroom_Hide;
	static void NewProp_SecondWave_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DisableMeshCollision;
	static void NewProp_SecondWaveGroom_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWaveGroom_DisableMeshCollision;
	static void NewProp_SecondWave_NeedHideStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_NeedHideStaticMeshes;
	static void NewProp_SecondWave_UseUpdateRateOptimizations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_UseUpdateRateOptimizations;
	static void NewProp_SecondWave_UsePerBoneMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_UsePerBoneMotionBlur;
	static void NewProp_SecondWave_DisableClothSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DisableClothSimulation;
	static void NewProp_SecondWave_DisableMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DisableMorphTarget;
	static void NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating;
	static void NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating;
	static void NewProp_SecondWave_AllowRigidBodyAnimNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_AllowRigidBodyAnimNode;
	static void NewProp_SecondWave_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_GenerateOverlapEvents;
	static void NewProp_SecondWaveGroom_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWaveGroom_GenerateOverlapEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondWave_VisibilityBasedAnimTickOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondWave_VisibilityBasedAnimTickOption;
	static void NewProp_ThirdWave_AlwaysCheckFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_AlwaysCheckFloor;
	static void NewProp_ThirdWave_EnablePhysicsInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_EnablePhysicsInteraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_MaxSimulationTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThirdWave_MaxSimulationIterations;
	static void NewProp_ThirdWave_RunPhysicsWithNoController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_RunPhysicsWithNoController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThirdWave_MovementMode;
	static void NewProp_ThirdWave_SweepWhileNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_SweepWhileNavWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_OptimizatedMovementTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_OptimizatedMovementTickMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_OptimizatedMovementTickMax;
	static void NewProp_ThirdWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_UseRandomOptimizationTickForMovement;
	static void NewProp_ThirdWave_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_HideShadows;
	static void NewProp_ThirdWaveGroom_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWaveGroom_HideShadows;
	static void NewProp_ThirdWaveGroom_Hide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWaveGroom_Hide;
	static void NewProp_ThirdWave_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DisableMeshCollision;
	static void NewProp_ThirdWaveGroom_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWaveGroom_DisableMeshCollision;
	static void NewProp_ThirdWave_NeedHideStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_NeedHideStaticMeshes;
	static void NewProp_ThirdWave_UseUpdateRateOptimizations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_UseUpdateRateOptimizations;
	static void NewProp_ThirdWave_UsePerBoneMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_UsePerBoneMotionBlur;
	static void NewProp_ThirdWave_DisableClothSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DisableClothSimulation;
	static void NewProp_ThirdWave_DisableMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DisableMorphTarget;
	static void NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating;
	static void NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating;
	static void NewProp_ThirdWave_AllowRigidBodyAnimNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_AllowRigidBodyAnimNode;
	static void NewProp_ThirdWave_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_GenerateOverlapEvents;
	static void NewProp_ThirdWaveGroom_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWaveGroom_GenerateOverlapEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThirdWave_VisibilityBasedAnimTickOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThirdWave_VisibilityBasedAnimTickOption;
	static void NewProp_Invisible_AlwaysCheckFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_AlwaysCheckFloor;
	static void NewProp_Invisible_EnablePhysicsInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_EnablePhysicsInteraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Invisible_MaxSimulationTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Invisible_MaxSimulationIterations;
	static void NewProp_Invisible_RunPhysicsWithNoController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_RunPhysicsWithNoController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Invisible_MovementMode;
	static void NewProp_Invisible_SweepWhileNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_SweepWhileNavWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Invisible_OptimizatedMovementTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Invisible_OptimizatedMovementTickMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Invisible_OptimizatedMovementTickMax;
	static void NewProp_Invisible_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_UseRandomOptimizationTickForMovement;
	static void NewProp_Invisible_HideSkeletalMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_HideSkeletalMesh;
	static void NewProp_InvisibleGroom_Hide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvisibleGroom_Hide;
	static void NewProp_Invisible_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_HideShadows;
	static void NewProp_InvisibleGroom_HideShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvisibleGroom_HideShadows;
	static void NewProp_Invisible_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_DisableMeshCollision;
	static void NewProp_InvisibleGroom_DisableMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvisibleGroom_DisableMeshCollision;
	static void NewProp_Invisible_NeedHideStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_NeedHideStaticMeshes;
	static void NewProp_Invisible_UseUpdateRateOptimizations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_UseUpdateRateOptimizations;
	static void NewProp_Invisible_UsePerBoneMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_UsePerBoneMotionBlur;
	static void NewProp_Invisible_DisableClothSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_DisableClothSimulation;
	static void NewProp_Invisible_DisableMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_DisableMorphTarget;
	static void NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_SkipKinematicUpdateWhenInterpolating;
	static void NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_SkipBoundsUpdateWhenInterpolating;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Invisible_VisibilityBasedAnimTickOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Invisible_VisibilityBasedAnimTickOption;
	static void NewProp_Invisible_AllowRigidBodyAnimNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_AllowRigidBodyAnimNode;
	static void NewProp_Invisible_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_GenerateOverlapEvents;
	static void NewProp_InvisibleGroom_GenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvisibleGroom_GenerateOverlapEvents;
	static void NewProp_NoOptimization_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NoOptimization_DrawDebug;
	static void NewProp_FirstWave_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DrawDebug;
	static void NewProp_SecondWave_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DrawDebug;
	static void NewProp_ThirdWave_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DrawDebug;
	static void NewProp_Invisible_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invisible_DrawDebug;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations, "DisableAllOptimizations" }, // 3719928727
		{ &Z_Construct_UFunction_UOptimizationProxyComponent_EnableForceOptimizationWave, "EnableForceOptimizationWave" }, // 1970628271
		{ &Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations, "EnableOptimizations" }, // 3230682713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimizationProxyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization = { "DistanceToFirstOptimization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, DistanceToFirstOptimization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToFirstOptimization_MetaData), NewProp_DistanceToFirstOptimization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization = { "DistanceToSecondOptimization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, DistanceToSecondOptimization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToSecondOptimization_MetaData), NewProp_DistanceToSecondOptimization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization = { "DistanceToThirdOptimization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, DistanceToThirdOptimization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToThirdOptimization_MetaData), NewProp_DistanceToThirdOptimization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance = { "MaxVisibleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, MaxVisibleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVisibleDistance_MetaData), NewProp_MaxVisibleDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn = { "OptimizationBasedOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, OptimizationBasedOn), Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizationBasedOn_MetaData), NewProp_OptimizationBasedOn_MetaData) }; // 1644746876
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->UseOptimizationByTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag = { "UseOptimizationByTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseOptimizationByTag_MetaData), NewProp_UseOptimizationByTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag = { "OptimizationTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, OptimizationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizationTag_MetaData), NewProp_OptimizationTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag = { "IgnoreOptimizationTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, IgnoreOptimizationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreOptimizationTag_MetaData), NewProp_IgnoreOptimizationTag_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->DisableMovementWhenNotVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible = { "DisableMovementWhenNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableMovementWhenNotVisible_MetaData), NewProp_DisableMovementWhenNotVisible_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->IgnoreCameraSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight = { "IgnoreCameraSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreCameraSight_MetaData), NewProp_IgnoreCameraSight_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->IgnoreCameraSightOnSmallDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance = { "IgnoreCameraSightOnSmallDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreCameraSightOnSmallDistance_MetaData), NewProp_IgnoreCameraSightOnSmallDistance_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->DisableSkeletalMeshTickWhenNotVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible = { "DisableSkeletalMeshTickWhenNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData), NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableGroomTickWhenNotVisible_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->DisableGroomTickWhenNotVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableGroomTickWhenNotVisible = { "DisableGroomTickWhenNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableGroomTickWhenNotVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableGroomTickWhenNotVisible_MetaData), NewProp_DisableGroomTickWhenNotVisible_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->HideAllStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes = { "HideAllStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideAllStaticMeshes_MetaData), NewProp_HideAllStaticMeshes_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnListenServer_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->bDisableOptimizationOnListenServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnListenServer = { "bDisableOptimizationOnListenServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnListenServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOptimizationOnListenServer_MetaData), NewProp_bDisableOptimizationOnListenServer_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnDedicatedServer_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->bDisableOptimizationOnDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnDedicatedServer = { "bDisableOptimizationOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOptimizationOnDedicatedServer_MetaData), NewProp_bDisableOptimizationOnDedicatedServer_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationInSimulationMode_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->bDisableOptimizationInSimulationMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationInSimulationMode = { "bDisableOptimizationInSimulationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationInSimulationMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOptimizationInSimulationMode_MetaData), NewProp_bDisableOptimizationInSimulationMode_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizeAIController_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->bOptimizeAIController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizeAIController = { "bOptimizeAIController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizeAIController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeAIController_MetaData), NewProp_bOptimizeAIController_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizePathFollowComponent_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->bOptimizePathFollowComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizePathFollowComponent = { "bOptimizePathFollowComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizePathFollowComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizePathFollowComponent_MetaData), NewProp_bOptimizePathFollowComponent_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_AlwaysCheckFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor = { "FirstWave_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_AlwaysCheckFloor_MetaData), NewProp_FirstWave_AlwaysCheckFloor_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_EnablePhysicsInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction = { "FirstWave_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_EnablePhysicsInteraction_MetaData), NewProp_FirstWave_EnablePhysicsInteraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep = { "FirstWave_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_MaxSimulationTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_MaxSimulationTimeStep_MetaData), NewProp_FirstWave_MaxSimulationTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations = { "FirstWave_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_MaxSimulationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_MaxSimulationIterations_MetaData), NewProp_FirstWave_MaxSimulationIterations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_RunPhysicsWithNoController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController = { "FirstWave_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_RunPhysicsWithNoController_MetaData), NewProp_FirstWave_RunPhysicsWithNoController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode = { "FirstWave_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_MovementMode_MetaData), NewProp_FirstWave_MovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_SweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking = { "FirstWave_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_SweepWhileNavWalking_MetaData), NewProp_FirstWave_SweepWhileNavWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick = { "FirstWave_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_OptimizatedMovementTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_OptimizatedMovementTick_MetaData), NewProp_FirstWave_OptimizatedMovementTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin = { "FirstWave_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_OptimizatedMovementTickMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_OptimizatedMovementTickMin_MetaData), NewProp_FirstWave_OptimizatedMovementTickMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax = { "FirstWave_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_OptimizatedMovementTickMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_OptimizatedMovementTickMax_MetaData), NewProp_FirstWave_OptimizatedMovementTickMax_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_UseRandomOptimizationTickForMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement = { "FirstWave_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData), NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows = { "FirstWave_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_HideShadows_MetaData), NewProp_FirstWave_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWaveGroom_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_HideShadows = { "FirstWaveGroom_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWaveGroom_HideShadows_MetaData), NewProp_FirstWaveGroom_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_Hide_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWaveGroom_Hide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_Hide = { "FirstWaveGroom_Hide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_Hide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWaveGroom_Hide_MetaData), NewProp_FirstWaveGroom_Hide_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision = { "FirstWave_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_DisableMeshCollision_MetaData), NewProp_FirstWave_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWaveGroom_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_DisableMeshCollision = { "FirstWaveGroom_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWaveGroom_DisableMeshCollision_MetaData), NewProp_FirstWaveGroom_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_NeedHideStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes = { "FirstWave_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_NeedHideStaticMeshes_MetaData), NewProp_FirstWave_NeedHideStaticMeshes_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_UseUpdateRateOptimizations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations = { "FirstWave_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_UseUpdateRateOptimizations_MetaData), NewProp_FirstWave_UseUpdateRateOptimizations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_UsePerBoneMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur = { "FirstWave_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_UsePerBoneMotionBlur_MetaData), NewProp_FirstWave_UsePerBoneMotionBlur_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_DisableClothSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation = { "FirstWave_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_DisableClothSimulation_MetaData), NewProp_FirstWave_DisableClothSimulation_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_DisableMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget = { "FirstWave_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_DisableMorphTarget_MetaData), NewProp_FirstWave_DisableMorphTarget_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_SkipKinematicUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating = { "FirstWave_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData), NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_SkipBoundsUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating = { "FirstWave_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData), NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_AllowRigidBodyAnimNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode = { "FirstWave_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData), NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents = { "FirstWave_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_GenerateOverlapEvents_MetaData), NewProp_FirstWave_GenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWaveGroom_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_GenerateOverlapEvents = { "FirstWaveGroom_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWaveGroom_GenerateOverlapEvents_MetaData), NewProp_FirstWaveGroom_GenerateOverlapEvents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_VisibilityBasedAnimTickOption = { "FirstWave_VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_VisibilityBasedAnimTickOption_MetaData), NewProp_FirstWave_VisibilityBasedAnimTickOption_MetaData) }; // 4257997877
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_AlwaysCheckFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor = { "SecondWave_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_AlwaysCheckFloor_MetaData), NewProp_SecondWave_AlwaysCheckFloor_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_EnablePhysicsInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction = { "SecondWave_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_EnablePhysicsInteraction_MetaData), NewProp_SecondWave_EnablePhysicsInteraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep = { "SecondWave_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_MaxSimulationTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_MaxSimulationTimeStep_MetaData), NewProp_SecondWave_MaxSimulationTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations = { "SecondWave_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_MaxSimulationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_MaxSimulationIterations_MetaData), NewProp_SecondWave_MaxSimulationIterations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_RunPhysicsWithNoController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController = { "SecondWave_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_RunPhysicsWithNoController_MetaData), NewProp_SecondWave_RunPhysicsWithNoController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode = { "SecondWave_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_MovementMode_MetaData), NewProp_SecondWave_MovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_SweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking = { "SecondWave_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_SweepWhileNavWalking_MetaData), NewProp_SecondWave_SweepWhileNavWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick = { "SecondWave_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_OptimizatedMovementTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_OptimizatedMovementTick_MetaData), NewProp_SecondWave_OptimizatedMovementTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin = { "SecondWave_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_OptimizatedMovementTickMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_OptimizatedMovementTickMin_MetaData), NewProp_SecondWave_OptimizatedMovementTickMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax = { "SecondWave_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_OptimizatedMovementTickMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_OptimizatedMovementTickMax_MetaData), NewProp_SecondWave_OptimizatedMovementTickMax_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_UseRandomOptimizationTickForMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement = { "SecondWave_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData), NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows = { "SecondWave_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_HideShadows_MetaData), NewProp_SecondWave_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWaveGroom_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_HideShadows = { "SecondWaveGroom_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWaveGroom_HideShadows_MetaData), NewProp_SecondWaveGroom_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_Hide_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWaveGroom_Hide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_Hide = { "SecondWaveGroom_Hide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_Hide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWaveGroom_Hide_MetaData), NewProp_SecondWaveGroom_Hide_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision = { "SecondWave_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_DisableMeshCollision_MetaData), NewProp_SecondWave_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWaveGroom_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_DisableMeshCollision = { "SecondWaveGroom_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWaveGroom_DisableMeshCollision_MetaData), NewProp_SecondWaveGroom_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_NeedHideStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes = { "SecondWave_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_NeedHideStaticMeshes_MetaData), NewProp_SecondWave_NeedHideStaticMeshes_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_UseUpdateRateOptimizations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations = { "SecondWave_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_UseUpdateRateOptimizations_MetaData), NewProp_SecondWave_UseUpdateRateOptimizations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_UsePerBoneMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur = { "SecondWave_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_UsePerBoneMotionBlur_MetaData), NewProp_SecondWave_UsePerBoneMotionBlur_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_DisableClothSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation = { "SecondWave_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_DisableClothSimulation_MetaData), NewProp_SecondWave_DisableClothSimulation_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_DisableMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget = { "SecondWave_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_DisableMorphTarget_MetaData), NewProp_SecondWave_DisableMorphTarget_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_SkipKinematicUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating = { "SecondWave_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData), NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_SkipBoundsUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating = { "SecondWave_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData), NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_AllowRigidBodyAnimNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode = { "SecondWave_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData), NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents = { "SecondWave_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_GenerateOverlapEvents_MetaData), NewProp_SecondWave_GenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWaveGroom_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_GenerateOverlapEvents = { "SecondWaveGroom_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWaveGroom_GenerateOverlapEvents_MetaData), NewProp_SecondWaveGroom_GenerateOverlapEvents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_VisibilityBasedAnimTickOption = { "SecondWave_VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_VisibilityBasedAnimTickOption_MetaData), NewProp_SecondWave_VisibilityBasedAnimTickOption_MetaData) }; // 4257997877
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_AlwaysCheckFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor = { "ThirdWave_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_AlwaysCheckFloor_MetaData), NewProp_ThirdWave_AlwaysCheckFloor_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_EnablePhysicsInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction = { "ThirdWave_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_EnablePhysicsInteraction_MetaData), NewProp_ThirdWave_EnablePhysicsInteraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep = { "ThirdWave_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_MaxSimulationTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_MaxSimulationTimeStep_MetaData), NewProp_ThirdWave_MaxSimulationTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations = { "ThirdWave_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_MaxSimulationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_MaxSimulationIterations_MetaData), NewProp_ThirdWave_MaxSimulationIterations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_RunPhysicsWithNoController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController = { "ThirdWave_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_RunPhysicsWithNoController_MetaData), NewProp_ThirdWave_RunPhysicsWithNoController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode = { "ThirdWave_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_MovementMode_MetaData), NewProp_ThirdWave_MovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_SweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking = { "ThirdWave_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_SweepWhileNavWalking_MetaData), NewProp_ThirdWave_SweepWhileNavWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick = { "ThirdWave_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_OptimizatedMovementTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_OptimizatedMovementTick_MetaData), NewProp_ThirdWave_OptimizatedMovementTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin = { "ThirdWave_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_OptimizatedMovementTickMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData), NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax = { "ThirdWave_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_OptimizatedMovementTickMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData), NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_UseRandomOptimizationTickForMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement = { "ThirdWave_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData), NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows = { "ThirdWave_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_HideShadows_MetaData), NewProp_ThirdWave_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWaveGroom_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_HideShadows = { "ThirdWaveGroom_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWaveGroom_HideShadows_MetaData), NewProp_ThirdWaveGroom_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_Hide_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWaveGroom_Hide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_Hide = { "ThirdWaveGroom_Hide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_Hide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWaveGroom_Hide_MetaData), NewProp_ThirdWaveGroom_Hide_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision = { "ThirdWave_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_DisableMeshCollision_MetaData), NewProp_ThirdWave_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWaveGroom_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_DisableMeshCollision = { "ThirdWaveGroom_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWaveGroom_DisableMeshCollision_MetaData), NewProp_ThirdWaveGroom_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_NeedHideStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes = { "ThirdWave_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_NeedHideStaticMeshes_MetaData), NewProp_ThirdWave_NeedHideStaticMeshes_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_UseUpdateRateOptimizations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations = { "ThirdWave_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData), NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_UsePerBoneMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur = { "ThirdWave_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData), NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_DisableClothSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation = { "ThirdWave_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_DisableClothSimulation_MetaData), NewProp_ThirdWave_DisableClothSimulation_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_DisableMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget = { "ThirdWave_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_DisableMorphTarget_MetaData), NewProp_ThirdWave_DisableMorphTarget_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_SkipKinematicUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating = { "ThirdWave_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData), NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_SkipBoundsUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating = { "ThirdWave_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData), NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_AllowRigidBodyAnimNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode = { "ThirdWave_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData), NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents = { "ThirdWave_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_GenerateOverlapEvents_MetaData), NewProp_ThirdWave_GenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWaveGroom_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_GenerateOverlapEvents = { "ThirdWaveGroom_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWaveGroom_GenerateOverlapEvents_MetaData), NewProp_ThirdWaveGroom_GenerateOverlapEvents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_VisibilityBasedAnimTickOption = { "ThirdWave_VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_VisibilityBasedAnimTickOption_MetaData), NewProp_ThirdWave_VisibilityBasedAnimTickOption_MetaData) }; // 4257997877
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_AlwaysCheckFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor = { "Invisible_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_AlwaysCheckFloor_MetaData), NewProp_Invisible_AlwaysCheckFloor_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_EnablePhysicsInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction = { "Invisible_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_EnablePhysicsInteraction_MetaData), NewProp_Invisible_EnablePhysicsInteraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep = { "Invisible_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_MaxSimulationTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_MaxSimulationTimeStep_MetaData), NewProp_Invisible_MaxSimulationTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations = { "Invisible_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_MaxSimulationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_MaxSimulationIterations_MetaData), NewProp_Invisible_MaxSimulationIterations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_RunPhysicsWithNoController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController = { "Invisible_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_RunPhysicsWithNoController_MetaData), NewProp_Invisible_RunPhysicsWithNoController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode = { "Invisible_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_MovementMode_MetaData), NewProp_Invisible_MovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_SweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking = { "Invisible_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_SweepWhileNavWalking_MetaData), NewProp_Invisible_SweepWhileNavWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick = { "Invisible_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_OptimizatedMovementTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_OptimizatedMovementTick_MetaData), NewProp_Invisible_OptimizatedMovementTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin = { "Invisible_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_OptimizatedMovementTickMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_OptimizatedMovementTickMin_MetaData), NewProp_Invisible_OptimizatedMovementTickMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax = { "Invisible_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_OptimizatedMovementTickMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_OptimizatedMovementTickMax_MetaData), NewProp_Invisible_OptimizatedMovementTickMax_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_UseRandomOptimizationTickForMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement = { "Invisible_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData), NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_HideSkeletalMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh = { "Invisible_HideSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_HideSkeletalMesh_MetaData), NewProp_Invisible_HideSkeletalMesh_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_Hide_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->InvisibleGroom_Hide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_Hide = { "InvisibleGroom_Hide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_Hide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvisibleGroom_Hide_MetaData), NewProp_InvisibleGroom_Hide_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows = { "Invisible_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_HideShadows_MetaData), NewProp_Invisible_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_HideShadows_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->InvisibleGroom_HideShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_HideShadows = { "InvisibleGroom_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_HideShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvisibleGroom_HideShadows_MetaData), NewProp_InvisibleGroom_HideShadows_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision = { "Invisible_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_DisableMeshCollision_MetaData), NewProp_Invisible_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_DisableMeshCollision_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->InvisibleGroom_DisableMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_DisableMeshCollision = { "InvisibleGroom_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_DisableMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvisibleGroom_DisableMeshCollision_MetaData), NewProp_InvisibleGroom_DisableMeshCollision_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_NeedHideStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes = { "Invisible_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_NeedHideStaticMeshes_MetaData), NewProp_Invisible_NeedHideStaticMeshes_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_UseUpdateRateOptimizations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations = { "Invisible_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_UseUpdateRateOptimizations_MetaData), NewProp_Invisible_UseUpdateRateOptimizations_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_UsePerBoneMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur = { "Invisible_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_UsePerBoneMotionBlur_MetaData), NewProp_Invisible_UsePerBoneMotionBlur_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_DisableClothSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation = { "Invisible_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_DisableClothSimulation_MetaData), NewProp_Invisible_DisableClothSimulation_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_DisableMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget = { "Invisible_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_DisableMorphTarget_MetaData), NewProp_Invisible_DisableMorphTarget_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_SkipKinematicUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating = { "Invisible_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData), NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_SkipBoundsUpdateWhenInterpolating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating = { "Invisible_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData), NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_VisibilityBasedAnimTickOption = { "Invisible_VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_VisibilityBasedAnimTickOption_MetaData), NewProp_Invisible_VisibilityBasedAnimTickOption_MetaData) }; // 4257997877
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_AllowRigidBodyAnimNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode = { "Invisible_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_AllowRigidBodyAnimNode_MetaData), NewProp_Invisible_AllowRigidBodyAnimNode_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents = { "Invisible_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_GenerateOverlapEvents_MetaData), NewProp_Invisible_GenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_GenerateOverlapEvents_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->InvisibleGroom_GenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_GenerateOverlapEvents = { "InvisibleGroom_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_GenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvisibleGroom_GenerateOverlapEvents_MetaData), NewProp_InvisibleGroom_GenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->NoOptimization_DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug = { "NoOptimization_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoOptimization_DrawDebug_MetaData), NewProp_NoOptimization_DrawDebug_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->FirstWave_DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug = { "FirstWave_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWave_DrawDebug_MetaData), NewProp_FirstWave_DrawDebug_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->SecondWave_DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug = { "SecondWave_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWave_DrawDebug_MetaData), NewProp_SecondWave_DrawDebug_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->ThirdWave_DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug = { "ThirdWave_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdWave_DrawDebug_MetaData), NewProp_ThirdWave_DrawDebug_MetaData) };
void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_SetBit(void* Obj)
{
	((UOptimizationProxyComponent*)Obj)->Invisible_DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug = { "Invisible_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invisible_DrawDebug_MetaData), NewProp_Invisible_DrawDebug_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave = { "OnChangeWave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimizationProxyComponent, OnChangeWave), Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChangeWave_MetaData), NewProp_OnChangeWave_MetaData) }; // 3208883288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableGroomTickWhenNotVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnListenServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationOnDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bDisableOptimizationInSimulationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizeAIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_bOptimizePathFollowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_Hide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWaveGroom_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_VisibilityBasedAnimTickOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_VisibilityBasedAnimTickOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_Hide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWaveGroom_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_VisibilityBasedAnimTickOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_VisibilityBasedAnimTickOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_Hide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWaveGroom_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_VisibilityBasedAnimTickOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_VisibilityBasedAnimTickOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_Hide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_HideShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_DisableMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_VisibilityBasedAnimTickOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_VisibilityBasedAnimTickOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_InvisibleGroom_GenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimizationProxyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NPC_Optimizator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::ClassParams = {
	&UOptimizationProxyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimizationProxyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimizationProxyComponent()
{
	if (!Z_Registration_Info_UClass_UOptimizationProxyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimizationProxyComponent.OuterSingleton, Z_Construct_UClass_UOptimizationProxyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimizationProxyComponent.OuterSingleton;
}
template<> NPC_OPTIMIZATOR_API UClass* StaticClass<UOptimizationProxyComponent>()
{
	return UOptimizationProxyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimizationProxyComponent);
UOptimizationProxyComponent::~UOptimizationProxyComponent() {}
// End Class UOptimizationProxyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimizationProxyComponent, UOptimizationProxyComponent::StaticClass, TEXT("UOptimizationProxyComponent"), &Z_Registration_Info_UClass_UOptimizationProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimizationProxyComponent), 284456918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_4261229901(TEXT("/Script/NPC_Optimizator"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
