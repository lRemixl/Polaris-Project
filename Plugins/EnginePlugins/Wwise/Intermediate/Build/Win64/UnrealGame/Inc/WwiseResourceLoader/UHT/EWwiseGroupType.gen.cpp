// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/EWwiseGroupType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWwiseGroupType() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseGroupType;
	static UEnum* EWwiseGroupType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseGroupType"));
		}
		return Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseGroupType>()
	{
		return EWwiseGroupType_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators[] = {
		{ "EWwiseGroupType::Switch", (int64)EWwiseGroupType::Switch },
		{ "EWwiseGroupType::State", (int64)EWwiseGroupType::State },
		{ "EWwiseGroupType::Unknown", (int64)EWwiseGroupType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EWwiseGroupType.h" },
		{ "State.Name", "EWwiseGroupType::State" },
		{ "Switch.Name", "EWwiseGroupType::Switch" },
		{ "Unknown.Name", "EWwiseGroupType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		"EWwiseGroupType",
		"EWwiseGroupType",
		Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType()
	{
		if (!Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseGroupType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseGroupType_h_Statics::EnumInfo[] = {
		{ EWwiseGroupType_StaticEnum, TEXT("EWwiseGroupType"), &Z_Registration_Info_UEnum_EWwiseGroupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2916368264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseGroupType_h_2443459934(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseGroupType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseGroupType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
