// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomSequenceEventType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomSequenceEventType_generated_h
#error "EAtomSequenceEventType.generated.h already included, missing '#pragma once' in EAtomSequenceEventType.h"
#endif
#define CRIWARERUNTIME_EAtomSequenceEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSequenceEventType_h


#define FOREACH_ENUM_EATOMSEQUENCEEVENTTYPE(op) \
	op(EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK) \
	op(EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE) 

enum class EAtomSequenceEventType : uint8;
template<> struct TIsUEnumClass<EAtomSequenceEventType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSequenceEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
