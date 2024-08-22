// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EReflectionFilterBits.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EReflectionFilterBits_generated_h
#error "EReflectionFilterBits.generated.h already included, missing '#pragma once' in EReflectionFilterBits.h"
#endif
#define AKAUDIO_EReflectionFilterBits_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EReflectionFilterBits_h


#define FOREACH_ENUM_EREFLECTIONFILTERBITS(op) \
	op(EReflectionFilterBits::Wall) \
	op(EReflectionFilterBits::Ceiling) \
	op(EReflectionFilterBits::Floor) 

enum class EReflectionFilterBits : uint8;
template<> struct TIsUEnumClass<EReflectionFilterBits> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
