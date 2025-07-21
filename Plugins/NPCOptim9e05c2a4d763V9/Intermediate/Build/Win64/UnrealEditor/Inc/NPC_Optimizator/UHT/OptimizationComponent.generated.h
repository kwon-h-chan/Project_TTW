// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimizationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOptimizationWave : uint8;
#ifdef NPC_OPTIMIZATOR_OptimizationComponent_generated_h
#error "OptimizationComponent.generated.h already included, missing '#pragma once' in OptimizationComponent.h"
#endif
#define NPC_OPTIMIZATOR_OptimizationComponent_generated_h

#define FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_13_DELEGATE \
NPC_OPTIMIZATOR_API void FOptimizationChangeWave_DelegateWrapper(const FMulticastScriptDelegate& OptimizationChangeWave, EOptimizationWave NewWave);


#define FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableForceOptimizationWave); \
	DECLARE_FUNCTION(execEnableOptimizations); \
	DECLARE_FUNCTION(execDisableAllOptimizations);


#define FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimizationProxyComponent(); \
	friend struct Z_Construct_UClass_UOptimizationProxyComponent_Statics; \
public: \
	DECLARE_CLASS(UOptimizationProxyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NPC_Optimizator"), NO_API) \
	DECLARE_SERIALIZER(UOptimizationProxyComponent)


#define FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimizationProxyComponent(UOptimizationProxyComponent&&); \
	UOptimizationProxyComponent(const UOptimizationProxyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimizationProxyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimizationProxyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimizationProxyComponent) \
	NO_API virtual ~UOptimizationProxyComponent();


#define FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_16_PROLOG
#define FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPC_OPTIMIZATOR_API UClass* StaticClass<class UOptimizationProxyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bootcamp1_subversion_Plugins_NPCOptim9e05c2a4d763V9_Source_NPC_Optimizator_Public_OptimizationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
