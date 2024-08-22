// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GryphonLocalization/Public/GryphonTextBinaryAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGryphonTextBinaryAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GRYPHONLOCALIZATION_API UClass* Z_Construct_UClass_UGryphonTextBinaryAsset();
	GRYPHONLOCALIZATION_API UClass* Z_Construct_UClass_UGryphonTextBinaryAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GryphonLocalization();
// End Cross Module References
	void UGryphonTextBinaryAsset::StaticRegisterNativesUGryphonTextBinaryAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGryphonTextBinaryAsset);
	UClass* Z_Construct_UClass_UGryphonTextBinaryAsset_NoRegister()
	{
		return UGryphonTextBinaryAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGryphonTextBinaryAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GryphonLocalization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GryphonTextBinaryAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GryphonTextBinaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::NewProp_DataSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GryphonTextBinaryAsset" },
		{ "ModuleRelativePath", "Public/GryphonTextBinaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGryphonTextBinaryAsset, DataSize), METADATA_PARAMS(Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::NewProp_DataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::NewProp_DataSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::NewProp_DataSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGryphonTextBinaryAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::ClassParams = {
		&UGryphonTextBinaryAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGryphonTextBinaryAsset()
	{
		if (!Z_Registration_Info_UClass_UGryphonTextBinaryAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGryphonTextBinaryAsset.OuterSingleton, Z_Construct_UClass_UGryphonTextBinaryAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGryphonTextBinaryAsset.OuterSingleton;
	}
	template<> GRYPHONLOCALIZATION_API UClass* StaticClass<UGryphonTextBinaryAsset>()
	{
		return UGryphonTextBinaryAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGryphonTextBinaryAsset);
	UGryphonTextBinaryAsset::~UGryphonTextBinaryAsset() {}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonTextBinaryAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonTextBinaryAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGryphonTextBinaryAsset, UGryphonTextBinaryAsset::StaticClass, TEXT("UGryphonTextBinaryAsset"), &Z_Registration_Info_UClass_UGryphonTextBinaryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGryphonTextBinaryAsset), 3184263918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonTextBinaryAsset_h_178384398(TEXT("/Script/GryphonLocalization"),
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonTextBinaryAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonTextBinaryAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
