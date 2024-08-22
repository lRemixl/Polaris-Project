// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ESupportUEAnimationMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTHEADANIMATIONRUNTIME_ESupportUEAnimationMode_generated_h
#error "ESupportUEAnimationMode.generated.h already included, missing '#pragma once' in ESupportUEAnimationMode.h"
#endif
#define MOTHEADANIMATIONRUNTIME_ESupportUEAnimationMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Freshy_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_ESupportUEAnimationMode_h


#define FOREACH_ENUM_ESUPPORTUEANIMATIONMODE(op) \
	op(ESupportUEAnimationMode::None) \
	op(ESupportUEAnimationMode::Hybrid) \
	op(ESupportUEAnimationMode::FullBake) \
	op(ESupportUEAnimationMode::Hybrid_Dynamic) 

enum class ESupportUEAnimationMode : uint8;
template<> struct TIsUEnumClass<ESupportUEAnimationMode> { enum { Value = true }; };
template<> MOTHEADANIMATIONRUNTIME_API UEnum* StaticEnum<ESupportUEAnimationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
