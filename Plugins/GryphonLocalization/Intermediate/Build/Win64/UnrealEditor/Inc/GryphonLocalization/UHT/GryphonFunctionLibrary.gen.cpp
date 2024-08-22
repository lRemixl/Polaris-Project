// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GryphonLocalization/Public/GryphonFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGryphonFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GRYPHONLOCALIZATION_API UClass* Z_Construct_UClass_UGryphonFunctionLibrary();
	GRYPHONLOCALIZATION_API UClass* Z_Construct_UClass_UGryphonFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GryphonLocalization();
// End Cross Module References
	DEFINE_FUNCTION(UGryphonFunctionLibrary::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_textId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGryphonFunctionLibrary::GetString(Z_Param_textId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGryphonFunctionLibrary::execGetText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_textId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UGryphonFunctionLibrary::GetText(Z_Param_textId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGryphonFunctionLibrary::execHasText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_textId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGryphonFunctionLibrary::HasText(Z_Param_textId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGryphonFunctionLibrary::execRegisterAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Category);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGryphonFunctionLibrary::RegisterAsset(Z_Param_Category,Z_Param_AssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGryphonFunctionLibrary::execUnregisterAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGryphonFunctionLibrary::UnregisterAsset(Z_Param_Category);
		P_NATIVE_END;
	}
	void UGryphonFunctionLibrary::StaticRegisterNativesUGryphonFunctionLibrary()
	{
		UClass* Class = UGryphonFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetString", &UGryphonFunctionLibrary::execGetString },
			{ "GetText", &UGryphonFunctionLibrary::execGetText },
			{ "HasText", &UGryphonFunctionLibrary::execHasText },
			{ "RegisterAsset", &UGryphonFunctionLibrary::execRegisterAsset },
			{ "UnregisterAsset", &UGryphonFunctionLibrary::execUnregisterAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics
	{
		struct GryphonFunctionLibrary_eventGetString_Parms
		{
			FString textId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_textId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_textId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_textId = { "textId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventGetString_Parms, textId), METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_textId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_textId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_textId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GryphonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGryphonFunctionLibrary, nullptr, "GetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::GryphonFunctionLibrary_eventGetString_Parms), Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGryphonFunctionLibrary_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGryphonFunctionLibrary_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics
	{
		struct GryphonFunctionLibrary_eventGetText_Parms
		{
			FString textId;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_textId;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_textId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_textId = { "textId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventGetText_Parms, textId), METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_textId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_textId_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_textId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GryphonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGryphonFunctionLibrary, nullptr, "GetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::GryphonFunctionLibrary_eventGetText_Parms), Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGryphonFunctionLibrary_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGryphonFunctionLibrary_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics
	{
		struct GryphonFunctionLibrary_eventHasText_Parms
		{
			FString textId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_textId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_textId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_textId = { "textId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventHasText_Parms, textId), METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_textId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_textId_MetaData)) };
	void Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GryphonFunctionLibrary_eventHasText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GryphonFunctionLibrary_eventHasText_Parms), &Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_textId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GryphonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGryphonFunctionLibrary, nullptr, "HasText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::GryphonFunctionLibrary_eventHasText_Parms), Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGryphonFunctionLibrary_HasText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGryphonFunctionLibrary_HasText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics
	{
		struct GryphonFunctionLibrary_eventRegisterAsset_Parms
		{
			FString Category;
			FString AssetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventRegisterAsset_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventRegisterAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GryphonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGryphonFunctionLibrary, nullptr, "RegisterAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::GryphonFunctionLibrary_eventRegisterAsset_Parms), Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics
	{
		struct GryphonFunctionLibrary_eventUnregisterAsset_Parms
		{
			FString Category;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GryphonFunctionLibrary_eventUnregisterAsset_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GryphonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGryphonFunctionLibrary, nullptr, "UnregisterAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::GryphonFunctionLibrary_eventUnregisterAsset_Parms), Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGryphonFunctionLibrary);
	UClass* Z_Construct_UClass_UGryphonFunctionLibrary_NoRegister()
	{
		return UGryphonFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGryphonFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGryphonFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GryphonLocalization,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGryphonFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGryphonFunctionLibrary_GetString, "GetString" }, // 3782683391
		{ &Z_Construct_UFunction_UGryphonFunctionLibrary_GetText, "GetText" }, // 781740550
		{ &Z_Construct_UFunction_UGryphonFunctionLibrary_HasText, "HasText" }, // 1187126960
		{ &Z_Construct_UFunction_UGryphonFunctionLibrary_RegisterAsset, "RegisterAsset" }, // 1622781295
		{ &Z_Construct_UFunction_UGryphonFunctionLibrary_UnregisterAsset, "UnregisterAsset" }, // 649737436
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGryphonFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GryphonFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GryphonFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGryphonFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGryphonFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGryphonFunctionLibrary_Statics::ClassParams = {
		&UGryphonFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGryphonFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGryphonFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGryphonFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGryphonFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGryphonFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGryphonFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGryphonFunctionLibrary.OuterSingleton;
	}
	template<> GRYPHONLOCALIZATION_API UClass* StaticClass<UGryphonFunctionLibrary>()
	{
		return UGryphonFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGryphonFunctionLibrary);
	UGryphonFunctionLibrary::~UGryphonFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGryphonFunctionLibrary, UGryphonFunctionLibrary::StaticClass, TEXT("UGryphonFunctionLibrary"), &Z_Registration_Info_UClass_UGryphonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGryphonFunctionLibrary), 2891603085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonFunctionLibrary_h_2940661679(TEXT("/Script/GryphonLocalization"),
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_GryphonLocalization_Source_GryphonLocalization_Public_GryphonFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
