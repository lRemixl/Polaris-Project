// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotHeadAnimationRuntime/Public/MotHeadAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotHeadAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	MOTHEADANIMATIONRUNTIME_API UClass* Z_Construct_UClass_UMotHeadAnimInstance();
	MOTHEADANIMATIONRUNTIME_API UClass* Z_Construct_UClass_UMotHeadAnimInstance_NoRegister();
	MOTHEADANIMATIONRUNTIME_API UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode();
	UPackage* Z_Construct_UPackage__Script_MotHeadAnimationRuntime();
// End Cross Module References
	void UMotHeadAnimInstance::StaticRegisterNativesUMotHeadAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotHeadAnimInstance);
	UClass* Z_Construct_UClass_UMotHeadAnimInstance_NoRegister()
	{
		return UMotHeadAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMotHeadAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SupportUEAnimation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportUEAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportUEAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFirstUpdatePhoenix_MetaData[];
#endif
		static void NewProp_bForceFirstUpdatePhoenix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFirstUpdatePhoenix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotHeadAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MotHeadAnimationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotHeadAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MotHeadAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotHeadAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MotHeadAnimInstance" },
		{ "ModuleRelativePath", "Public/MotHeadAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotHeadAnimInstance, PlayerId), METADATA_PARAMS(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_ControlLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MotHeadAnimInstance" },
		{ "ModuleRelativePath", "Public/MotHeadAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_ControlLocation = { "ControlLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotHeadAnimInstance, ControlLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_ControlLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_ControlLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MotHeadAnimInstance" },
		{ "ModuleRelativePath", "Public/MotHeadAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation = { "SupportUEAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotHeadAnimInstance, SupportUEAnimation), Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode, METADATA_PARAMS(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation_MetaData)) }; // 2997672603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MotHeadAnimInstance" },
		{ "ModuleRelativePath", "Public/MotHeadAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix_SetBit(void* Obj)
	{
		((UMotHeadAnimInstance*)Obj)->bForceFirstUpdatePhoenix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix = { "bForceFirstUpdatePhoenix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotHeadAnimInstance), &Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotHeadAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_ControlLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_SupportUEAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotHeadAnimInstance_Statics::NewProp_bForceFirstUpdatePhoenix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotHeadAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotHeadAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotHeadAnimInstance_Statics::ClassParams = {
		&UMotHeadAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotHeadAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotHeadAnimInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotHeadAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotHeadAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotHeadAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMotHeadAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotHeadAnimInstance.OuterSingleton, Z_Construct_UClass_UMotHeadAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotHeadAnimInstance.OuterSingleton;
	}
	template<> MOTHEADANIMATIONRUNTIME_API UClass* StaticClass<UMotHeadAnimInstance>()
	{
		return UMotHeadAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotHeadAnimInstance);
	UMotHeadAnimInstance::~UMotHeadAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_MotHeadAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_MotHeadAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotHeadAnimInstance, UMotHeadAnimInstance::StaticClass, TEXT("UMotHeadAnimInstance"), &Z_Registration_Info_UClass_UMotHeadAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotHeadAnimInstance), 580409022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_MotHeadAnimInstance_h_3611113312(TEXT("/Script/MotHeadAnimationRuntime"),
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_MotHeadAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_MotHeadAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
