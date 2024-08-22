// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/WwiseLocalizedEventCookedData.h"
#include "WwiseFileHandler/Public/WwiseLanguageCookedData.h"
#include "WwiseResourceLoader/Public/WwiseEventCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedEventCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData;
class UScriptStruct* FWwiseLocalizedEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseLocalizedEventCookedData>()
{
	return FWwiseLocalizedEventCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventLanguageMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventLanguageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventLanguageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EventLanguageMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseLocalizedEventCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedEventCookedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_ValueProp = { "EventLanguageMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWwiseEventCookedData, METADATA_PARAMS(nullptr, 0) }; // 332117107
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_Key_KeyProp = { "EventLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(nullptr, 0) }; // 387004825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseLocalizedEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseLocalizedEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap = { "EventLanguageMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, EventLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_MetaData)) }; // 387004825 332117107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseLocalizedEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseLocalizedEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseLocalizedEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseLocalizedEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseLocalizedEventCookedData",
		sizeof(FWwiseLocalizedEventCookedData),
		alignof(FWwiseLocalizedEventCookedData),
		Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseLocalizedEventCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseLocalizedEventCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseLocalizedEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedEventCookedData"), &Z_Registration_Info_UScriptStruct_WwiseLocalizedEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedEventCookedData), 3189474717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseLocalizedEventCookedData_h_3661881264(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseLocalizedEventCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseLocalizedEventCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
