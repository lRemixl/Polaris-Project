// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCheckBox.h"
#include "AkAudio/Public/AkBoolPropertyToControl.h"
#include "AkAudio/Public/AkWwiseItemToControl.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCheckBox() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkCheckBox::execGetAkItemId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetAkItemId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execGetAkProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAkProperty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execGetCheckedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execIsChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execIsPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetAkBoolProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAkBoolProperty(Z_Param_ItemProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetAkItemId)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAkItemId(Z_Param_Out_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetCheckedState)
	{
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetIsChecked)
	{
		P_GET_UBOOL(Z_Param_InIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsChecked(Z_Param_InIsChecked);
		P_NATIVE_END;
	}
	void UAkCheckBox::StaticRegisterNativesUAkCheckBox()
	{
		UClass* Class = UAkCheckBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAkItemId", &UAkCheckBox::execGetAkItemId },
			{ "GetAkProperty", &UAkCheckBox::execGetAkProperty },
			{ "GetCheckedState", &UAkCheckBox::execGetCheckedState },
			{ "IsChecked", &UAkCheckBox::execIsChecked },
			{ "IsPressed", &UAkCheckBox::execIsPressed },
			{ "SetAkBoolProperty", &UAkCheckBox::execSetAkBoolProperty },
			{ "SetAkItemId", &UAkCheckBox::execSetAkItemId },
			{ "SetCheckedState", &UAkCheckBox::execSetCheckedState },
			{ "SetIsChecked", &UAkCheckBox::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics
	{
		struct AkCheckBox_eventGetAkItemId_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkCheckBox_eventGetAkItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetAkItemId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::AkCheckBox_eventGetAkItemId_Parms), Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics
	{
		struct AkCheckBox_eventGetAkProperty_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkCheckBox_eventGetAkProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetAkProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::AkCheckBox_eventGetAkProperty_Parms), Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics
	{
		struct AkCheckBox_eventGetCheckedState_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkCheckBox_eventGetCheckedState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetCheckedState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::AkCheckBox_eventGetCheckedState_Parms), Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics
	{
		struct AkCheckBox_eventIsChecked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkCheckBox_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkCheckBox_eventIsChecked_Parms), &Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "IsChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::AkCheckBox_eventIsChecked_Parms), Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics
	{
		struct AkCheckBox_eventIsPressed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkCheckBox_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkCheckBox_eventIsPressed_Parms), &Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "IsPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::AkCheckBox_eventIsPressed_Parms), Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics
	{
		struct AkCheckBox_eventSetAkBoolProperty_Parms
		{
			FString ItemProperty;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkCheckBox_eventSetAkBoolProperty_Parms, ItemProperty), METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetAkBoolProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::AkCheckBox_eventSetAkBoolProperty_Parms), Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics
	{
		struct AkCheckBox_eventSetAkItemId_Parms
		{
			FGuid ItemId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkCheckBox_eventSetAkItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetAkItemId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::AkCheckBox_eventSetAkItemId_Parms), Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics
	{
		struct AkCheckBox_eventSetCheckedState_Parms
		{
			ECheckBoxState InCheckedState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCheckedState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCheckedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState = { "InCheckedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkCheckBox_eventSetCheckedState_Parms, InCheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetCheckedState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::AkCheckBox_eventSetCheckedState_Parms), Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics
	{
		struct AkCheckBox_eventSetIsChecked_Parms
		{
			bool InIsChecked;
		};
		static void NewProp_InIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit(void* Obj)
	{
		((AkCheckBox_eventSetIsChecked_Parms*)Obj)->InIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked = { "InIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkCheckBox_eventSetIsChecked_Parms), &Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetIsChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::AkCheckBox_eventSetIsChecked_Parms), Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetIsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkCheckBox);
	UClass* Z_Construct_UClass_UAkCheckBox_NoRegister()
	{
		return UAkCheckBox::StaticClass();
	}
	struct Z_Construct_UClass_UAkCheckBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckedState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedStateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CheckedStateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThePropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThePropertyToControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkOnCheckStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AkOnCheckStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDropped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkCheckBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkCheckBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkCheckBox_GetAkItemId, "GetAkItemId" }, // 1481368048
		{ &Z_Construct_UFunction_UAkCheckBox_GetAkProperty, "GetAkProperty" }, // 3155751596
		{ &Z_Construct_UFunction_UAkCheckBox_GetCheckedState, "GetCheckedState" }, // 3391191724
		{ &Z_Construct_UFunction_UAkCheckBox_IsChecked, "IsChecked" }, // 2263501264
		{ &Z_Construct_UFunction_UAkCheckBox_IsPressed, "IsPressed" }, // 1846037434
		{ &Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty, "SetAkBoolProperty" }, // 1027904380
		{ &Z_Construct_UFunction_UAkCheckBox_SetAkItemId, "SetAkItemId" }, // 3845853301
		{ &Z_Construct_UFunction_UAkCheckBox_SetCheckedState, "SetCheckedState" }, // 3909142713
		{ &Z_Construct_UFunction_UAkCheckBox_SetIsChecked, "SetIsChecked" }, // 2932074039
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkCheckBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState = { "CheckedState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, CheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData)) }; // 1662204813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate = { "CheckedStateDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, CheckedStateDelegate), Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData)) }; // 1415354810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, WidgetStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	void Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UAkCheckBox*)Obj)->IsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkCheckBox), &Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl = { "ThePropertyToControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, ThePropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData)) }; // 3455811129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl = { "ItemToControl", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData)) }; // 4077020967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged = { "AkOnCheckStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, AkOnCheckStateChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData)) }; // 3429669677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData)) }; // 702845000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped = { "OnPropertyDropped", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCheckBox, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData)) }; // 1730385470
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkCheckBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkCheckBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkCheckBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkCheckBox_Statics::ClassParams = {
		&UAkCheckBox::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkCheckBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkCheckBox()
	{
		if (!Z_Registration_Info_UClass_UAkCheckBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkCheckBox.OuterSingleton, Z_Construct_UClass_UAkCheckBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkCheckBox.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkCheckBox>()
	{
		return UAkCheckBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCheckBox);
	UAkCheckBox::~UAkCheckBox() {}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkCheckBox, UAkCheckBox::StaticClass, TEXT("UAkCheckBox"), &Z_Registration_Info_UClass_UAkCheckBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkCheckBox), 1560316184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_2520510744(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
