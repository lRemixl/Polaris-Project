// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticPortalState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortalState() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkAcousticPortalState;
	static UEnum* AkAcousticPortalState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkAcousticPortalState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkAcousticPortalState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkAcousticPortalState, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticPortalState"));
		}
		return Z_Registration_Info_UEnum_AkAcousticPortalState.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkAcousticPortalState>()
	{
		return AkAcousticPortalState_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enumerators[] = {
		{ "AkAcousticPortalState::Closed", (int64)AkAcousticPortalState::Closed },
		{ "AkAcousticPortalState::Open", (int64)AkAcousticPortalState::Open },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closed.Name", "AkAcousticPortalState::Closed" },
		{ "ModuleRelativePath", "Public/AkAcousticPortalState.h" },
		{ "Open.Name", "AkAcousticPortalState::Open" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkAcousticPortalState",
		"AkAcousticPortalState",
		Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState()
	{
		if (!Z_Registration_Info_UEnum_AkAcousticPortalState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkAcousticPortalState.InnerSingleton, Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkAcousticPortalState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortalState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortalState_h_Statics::EnumInfo[] = {
		{ AkAcousticPortalState_StaticEnum, TEXT("AkAcousticPortalState"), &Z_Registration_Info_UEnum_AkAcousticPortalState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1449190885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortalState_h_3441824761(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortalState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortalState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
