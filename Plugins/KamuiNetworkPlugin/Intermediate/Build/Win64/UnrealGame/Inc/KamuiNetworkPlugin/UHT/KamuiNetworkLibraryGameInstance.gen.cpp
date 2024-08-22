// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KamuiNetworkPlugin/Public/KamuiNetworkLibraryGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKamuiNetworkLibraryGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	KAMUINETWORKPLUGIN_API UClass* Z_Construct_UClass_UKamuiNetworkLibraryGameInstance();
	KAMUINETWORKPLUGIN_API UClass* Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KamuiNetworkPlugin();
// End Cross Module References
	void UKamuiNetworkLibraryGameInstance::StaticRegisterNativesUKamuiNetworkLibraryGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKamuiNetworkLibraryGameInstance);
	UClass* Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_NoRegister()
	{
		return UKamuiNetworkLibraryGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_KamuiNetworkPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KamuiNetworkLibraryGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KamuiNetworkLibraryGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKamuiNetworkLibraryGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::ClassParams = {
		&UKamuiNetworkLibraryGameInstance::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKamuiNetworkLibraryGameInstance()
	{
		if (!Z_Registration_Info_UClass_UKamuiNetworkLibraryGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKamuiNetworkLibraryGameInstance.OuterSingleton, Z_Construct_UClass_UKamuiNetworkLibraryGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKamuiNetworkLibraryGameInstance.OuterSingleton;
	}
	template<> KAMUINETWORKPLUGIN_API UClass* StaticClass<UKamuiNetworkLibraryGameInstance>()
	{
		return UKamuiNetworkLibraryGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKamuiNetworkLibraryGameInstance);
	UKamuiNetworkLibraryGameInstance::~UKamuiNetworkLibraryGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkLibraryGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkLibraryGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKamuiNetworkLibraryGameInstance, UKamuiNetworkLibraryGameInstance::StaticClass, TEXT("UKamuiNetworkLibraryGameInstance"), &Z_Registration_Info_UClass_UKamuiNetworkLibraryGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKamuiNetworkLibraryGameInstance), 1043644085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkLibraryGameInstance_h_3708663016(TEXT("/Script/KamuiNetworkPlugin"),
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkLibraryGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkLibraryGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
