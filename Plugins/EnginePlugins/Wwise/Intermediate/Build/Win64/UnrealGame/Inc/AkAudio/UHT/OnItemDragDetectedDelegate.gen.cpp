// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/OnItemDragDetectedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnItemDragDetectedDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemDragDetected_Parms
		{
			FGuid ItemDraggedID;
			FString ItemDraggedName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDraggedID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDraggedName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDraggedName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedID = { "ItemDraggedID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDragDetected_Parms, ItemDraggedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName = { "ItemDraggedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDragDetected_Parms, ItemDraggedName), METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnItemDragDetectedDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemDragDetected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemDragDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDragDetected, FGuid ItemDraggedID, const FString& ItemDraggedName)
{
	struct _Script_AkAudio_eventOnItemDragDetected_Parms
	{
		FGuid ItemDraggedID;
		FString ItemDraggedName;
	};
	_Script_AkAudio_eventOnItemDragDetected_Parms Parms;
	Parms.ItemDraggedID=ItemDraggedID;
	Parms.ItemDraggedName=ItemDraggedName;
	OnItemDragDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
