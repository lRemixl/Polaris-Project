// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotHeadAnimationRuntime/Public/ESupportUEAnimationMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESupportUEAnimationMode() {}
// Cross Module References
	MOTHEADANIMATIONRUNTIME_API UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode();
	UPackage* Z_Construct_UPackage__Script_MotHeadAnimationRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESupportUEAnimationMode;
	static UEnum* ESupportUEAnimationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESupportUEAnimationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESupportUEAnimationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode, (UObject*)Z_Construct_UPackage__Script_MotHeadAnimationRuntime(), TEXT("ESupportUEAnimationMode"));
		}
		return Z_Registration_Info_UEnum_ESupportUEAnimationMode.OuterSingleton;
	}
	template<> MOTHEADANIMATIONRUNTIME_API UEnum* StaticEnum<ESupportUEAnimationMode>()
	{
		return ESupportUEAnimationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::Enumerators[] = {
		{ "ESupportUEAnimationMode::None", (int64)ESupportUEAnimationMode::None },
		{ "ESupportUEAnimationMode::Hybrid", (int64)ESupportUEAnimationMode::Hybrid },
		{ "ESupportUEAnimationMode::FullBake", (int64)ESupportUEAnimationMode::FullBake },
		{ "ESupportUEAnimationMode::Hybrid_Dynamic", (int64)ESupportUEAnimationMode::Hybrid_Dynamic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullBake.Name", "ESupportUEAnimationMode::FullBake" },
		{ "Hybrid.Name", "ESupportUEAnimationMode::Hybrid" },
		{ "Hybrid_Dynamic.Name", "ESupportUEAnimationMode::Hybrid_Dynamic" },
		{ "ModuleRelativePath", "Public/ESupportUEAnimationMode.h" },
		{ "None.Name", "ESupportUEAnimationMode::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotHeadAnimationRuntime,
		nullptr,
		"ESupportUEAnimationMode",
		"ESupportUEAnimationMode",
		Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode()
	{
		if (!Z_Registration_Info_UEnum_ESupportUEAnimationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESupportUEAnimationMode.InnerSingleton, Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESupportUEAnimationMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_ESupportUEAnimationMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_ESupportUEAnimationMode_h_Statics::EnumInfo[] = {
		{ ESupportUEAnimationMode_StaticEnum, TEXT("ESupportUEAnimationMode"), &Z_Registration_Info_UEnum_ESupportUEAnimationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2997672603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_ESupportUEAnimationMode_h_558480715(TEXT("/Script/MotHeadAnimationRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_ESupportUEAnimationMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_ESupportUEAnimationMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
