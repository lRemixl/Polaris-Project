// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkItemPropertiesConv.h"
#include "AkAudio/Public/AkPropertyToControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemPropertiesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToString)
	{
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToText)
	{
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl);
		P_NATIVE_END;
	}
	void UAkItemPropertiesConv::StaticRegisterNativesUAkItemPropertiesConv()
	{
		UClass* Class = UAkItemPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkPropertyToControlToString", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToString },
			{ "Conv_FAkPropertyToControlToText", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData)) }; // 3552283036
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData)) }; // 3552283036
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemPropertiesConv);
	UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemPropertiesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemPropertiesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemPropertiesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString, "Conv_FAkPropertyToControlToString" }, // 192961712
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText, "Conv_FAkPropertyToControlToText" }, // 2166329923
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkItemPropertiesConv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemPropertiesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemPropertiesConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams = {
		&UAkItemPropertiesConv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemPropertiesConv()
	{
		if (!Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton, Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemPropertiesConv>()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemPropertiesConv);
	UAkItemPropertiesConv::~UAkItemPropertiesConv() {}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkItemPropertiesConv, UAkItemPropertiesConv::StaticClass, TEXT("UAkItemPropertiesConv"), &Z_Registration_Info_UClass_UAkItemPropertiesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemPropertiesConv), 108957600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_2643334751(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
