// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotHeadAnimationRuntime/Public/EMotHeadMatrixSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMotHeadMatrixSpace() {}
// Cross Module References
	MOTHEADANIMATIONRUNTIME_API UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace();
	UPackage* Z_Construct_UPackage__Script_MotHeadAnimationRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotHeadMatrixSpace;
	static UEnum* EMotHeadMatrixSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotHeadMatrixSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotHeadMatrixSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace, (UObject*)Z_Construct_UPackage__Script_MotHeadAnimationRuntime(), TEXT("EMotHeadMatrixSpace"));
		}
		return Z_Registration_Info_UEnum_EMotHeadMatrixSpace.OuterSingleton;
	}
	template<> MOTHEADANIMATIONRUNTIME_API UEnum* StaticEnum<EMotHeadMatrixSpace>()
	{
		return EMotHeadMatrixSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::Enumerators[] = {
		{ "MHM_WorldSpace", (int64)MHM_WorldSpace },
		{ "MHM_LocalSpace", (int64)MHM_LocalSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MHM_LocalSpace.Name", "MHM_LocalSpace" },
		{ "MHM_WorldSpace.Name", "MHM_WorldSpace" },
		{ "ModuleRelativePath", "Public/EMotHeadMatrixSpace.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotHeadAnimationRuntime,
		nullptr,
		"EMotHeadMatrixSpace",
		"EMotHeadMatrixSpace",
		Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace()
	{
		if (!Z_Registration_Info_UEnum_EMotHeadMatrixSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotHeadMatrixSpace.InnerSingleton, Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotHeadMatrixSpace.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_EMotHeadMatrixSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_EMotHeadMatrixSpace_h_Statics::EnumInfo[] = {
		{ EMotHeadMatrixSpace_StaticEnum, TEXT("EMotHeadMatrixSpace"), &Z_Registration_Info_UEnum_EMotHeadMatrixSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1120012999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_EMotHeadMatrixSpace_h_1904424925(TEXT("/Script/MotHeadAnimationRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_EMotHeadMatrixSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_EMotHeadMatrixSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
