// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXSXPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXSXPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXSXPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXSXPlatformInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkXSXPlatformInfo::StaticRegisterNativesUAkXSXPlatformInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkXSXPlatformInfo);
	UClass* Z_Construct_UClass_UAkXSXPlatformInfo_NoRegister()
	{
		return UAkXSXPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkXSXPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkXSXPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXSXPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkXSXPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkXSXPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXSXPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXSXPlatformInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkXSXPlatformInfo_Statics::ClassParams = {
		&UAkXSXPlatformInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkXSXPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXSXPlatformInfo()
	{
		if (!Z_Registration_Info_UClass_UAkXSXPlatformInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkXSXPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkXSXPlatformInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkXSXPlatformInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkXSXPlatformInfo>()
	{
		return UAkXSXPlatformInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXSXPlatformInfo);
	UAkXSXPlatformInfo::~UAkXSXPlatformInfo() {}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXPlatformInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXPlatformInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkXSXPlatformInfo, UAkXSXPlatformInfo::StaticClass, TEXT("UAkXSXPlatformInfo"), &Z_Registration_Info_UClass_UAkXSXPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkXSXPlatformInfo), 22916526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXPlatformInfo_h_1959923725(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXPlatformInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
