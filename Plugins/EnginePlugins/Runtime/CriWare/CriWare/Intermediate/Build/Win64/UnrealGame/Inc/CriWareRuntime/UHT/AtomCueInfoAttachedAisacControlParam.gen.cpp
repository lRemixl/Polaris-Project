// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedAisacControlParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoAttachedAisacControlParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam;
class UScriptStruct* FAtomCueInfoAttachedAisacControlParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedAisacControlParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedAisacControlParam>()
{
	return FAtomCueInfoAttachedAisacControlParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedAisacControlParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedAisacControlParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedAisacControlParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoAttachedAisacControlParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedAisacControlParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoAttachedAisacControlParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoAttachedAisacControlParam",
		sizeof(FAtomCueInfoAttachedAisacControlParam),
		alignof(FAtomCueInfoAttachedAisacControlParam),
		Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomCueInfoAttachedAisacControlParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewStructOps, TEXT("AtomCueInfoAttachedAisacControlParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoAttachedAisacControlParam), 3242389510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_4135144088(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
