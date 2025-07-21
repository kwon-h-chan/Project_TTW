// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC_Optimizator_Types.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NPC_OPTIMIZATOR_NPC_Optimizator_Types_generated_h
#error "NPC_Optimizator_Types.generated.h already included, missing '#pragma once' in NPC_Optimizator_Types.h"
#endif
#define NPC_OPTIMIZATOR_NPC_Optimizator_Types_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_NPC_Optimizator_Types_h


#define FOREACH_ENUM_EOPTIMIZATIONWAVE(op) \
	op(EOptimizationWave::Invisible) \
	op(EOptimizationWave::NoOptimization) \
	op(EOptimizationWave::FirstWave) \
	op(EOptimizationWave::SecondWave) \
	op(EOptimizationWave::ThirdWave) 

enum class EOptimizationWave : uint8;
template<> struct TIsUEnumClass<EOptimizationWave> { enum { Value = true }; };
template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationWave>();

#define FOREACH_ENUM_EOPTIMIZATIONBASETYPE(op) \
	op(EOptimizationBaseType::PlayerPawn) \
	op(EOptimizationBaseType::PlayerCamera) 

enum class EOptimizationBaseType;
template<> struct TIsUEnumClass<EOptimizationBaseType> { enum { Value = true }; };
template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationBaseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
