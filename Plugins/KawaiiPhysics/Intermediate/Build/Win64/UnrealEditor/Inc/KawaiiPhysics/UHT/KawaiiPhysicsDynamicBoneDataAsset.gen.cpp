// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsDynamicBoneDataAsset.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "KawaiiPhysics/Public/CapsuleLimit.h"
#include "KawaiiPhysics/Public/CapsuleLimitData.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsSettings.h"
#include "KawaiiPhysics/Public/PlanarLimit.h"
#include "KawaiiPhysics/Public/PlanarLimitData.h"
#include "KawaiiPhysics/Public/SphericalLimit.h"
#include "KawaiiPhysics/Public/SphericalLimitData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsDynamicBoneDataAsset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_NoRegister();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	void UKawaiiPhysicsDynamicBoneDataAsset::StaticRegisterNativesUKawaiiPhysicsDynamicBoneDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysicsDynamicBoneDataAsset);
	UClass* Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_NoRegister()
	{
		return UKawaiiPhysicsDynamicBoneDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludeBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampingCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocationCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDampingLocationCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotationCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDampingRotationCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StiffnessCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitAngleCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitAngleCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DummyBoneLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DummyBoneLength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneForwardAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneForwardAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlanarConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanarConstraint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[];
#endif
		static void NewProp_bEnableWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KawaiiPhysicsDynamicBoneDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, RootBone), METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RootBone_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones_Inner = { "ExcludeBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones = { "ExcludeBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, ExcludeBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PhysicsSettings_MetaData)) }; // 3382071051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DampingCurveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DampingCurveData = { "DampingCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, DampingCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DampingCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DampingCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingLocationCurveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingLocationCurveData = { "WorldDampingLocationCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, WorldDampingLocationCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingLocationCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingLocationCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingRotationCurveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingRotationCurveData = { "WorldDampingRotationCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, WorldDampingRotationCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingRotationCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingRotationCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_StiffnessCurveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_StiffnessCurveData = { "StiffnessCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, StiffnessCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_StiffnessCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_StiffnessCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RadiusCurveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RadiusCurveData = { "RadiusCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, RadiusCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RadiusCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RadiusCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_LimitAngleCurveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_LimitAngleCurveData = { "LimitAngleCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, LimitAngleCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_LimitAngleCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_LimitAngleCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DummyBoneLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DummyBoneLength = { "DummyBoneLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, DummyBoneLength), METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DummyBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DummyBoneLength_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis = { "BoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, BoneForwardAxis), Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis_MetaData)) }; // 2942432821
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint = { "PlanarConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, PlanarConstraint), Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint_MetaData)) }; // 3229455534
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimitData, METADATA_PARAMS(nullptr, 0) }; // 2361237163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData_MetaData)) }; // 2361237163
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimitData, METADATA_PARAMS(nullptr, 0) }; // 3801806207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData)) }; // 3801806207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimitData, METADATA_PARAMS(nullptr, 0) }; // 3003782684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData_MetaData)) }; // 3003782684
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) }; // 2006503540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits_MetaData)) }; // 2006503540
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) }; // 3743386246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits_MetaData)) }; // 3743386246
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 1872324481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits_MetaData)) }; // 1872324481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, TeleportDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportRotationThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, TeleportRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_Gravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind_SetBit(void* Obj)
	{
		((UKawaiiPhysicsDynamicBoneDataAsset*)Obj)->bEnableWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKawaiiPhysicsDynamicBoneDataAsset), &Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WindScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsDynamicBoneDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsDynamicBoneDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsDynamicBoneDataAsset, WindScale), METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WindScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WindScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_ExcludeBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DampingCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingLocationCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WorldDampingRotationCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_StiffnessCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_RadiusCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_LimitAngleCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_DummyBoneLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_BoneForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_SphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_CapsuleLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_PlanarLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_TeleportRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_bEnableWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::NewProp_WindScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsDynamicBoneDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::ClassParams = {
		&UKawaiiPhysicsDynamicBoneDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset()
	{
		if (!Z_Registration_Info_UClass_UKawaiiPhysicsDynamicBoneDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsDynamicBoneDataAsset.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKawaiiPhysicsDynamicBoneDataAsset.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsDynamicBoneDataAsset>()
	{
		return UKawaiiPhysicsDynamicBoneDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsDynamicBoneDataAsset);
	UKawaiiPhysicsDynamicBoneDataAsset::~UKawaiiPhysicsDynamicBoneDataAsset() {}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsDynamicBoneDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsDynamicBoneDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsDynamicBoneDataAsset, UKawaiiPhysicsDynamicBoneDataAsset::StaticClass, TEXT("UKawaiiPhysicsDynamicBoneDataAsset"), &Z_Registration_Info_UClass_UKawaiiPhysicsDynamicBoneDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsDynamicBoneDataAsset), 301181812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsDynamicBoneDataAsset_h_782556023(TEXT("/Script/KawaiiPhysics"),
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsDynamicBoneDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsDynamicBoneDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
