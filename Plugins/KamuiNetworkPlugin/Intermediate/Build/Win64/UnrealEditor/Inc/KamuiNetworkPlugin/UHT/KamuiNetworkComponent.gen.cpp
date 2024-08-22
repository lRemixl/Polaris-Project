// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KamuiNetworkPlugin/Public/KamuiNetworkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKamuiNetworkComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	KAMUINETWORKPLUGIN_API UClass* Z_Construct_UClass_UKamuiNetworkComponent();
	KAMUINETWORKPLUGIN_API UClass* Z_Construct_UClass_UKamuiNetworkComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KamuiNetworkPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UKamuiNetworkComponent::execGetPeerTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetPeerTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkComponent::execIsConnectedPeer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnectedPeer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkComponent::execSetMyLocalTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMyLocalTransform(Z_Param_position);
		P_NATIVE_END;
	}
	void UKamuiNetworkComponent::StaticRegisterNativesUKamuiNetworkComponent()
	{
		UClass* Class = UKamuiNetworkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPeerTransform", &UKamuiNetworkComponent::execGetPeerTransform },
			{ "IsConnectedPeer", &UKamuiNetworkComponent::execIsConnectedPeer },
			{ "SetMyLocalTransform", &UKamuiNetworkComponent::execSetMyLocalTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics
	{
		struct KamuiNetworkComponent_eventGetPeerTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KamuiNetworkComponent_eventGetPeerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkComponent, nullptr, "GetPeerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::KamuiNetworkComponent_eventGetPeerTransform_Parms), Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics
	{
		struct KamuiNetworkComponent_eventIsConnectedPeer_Parms
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
	void Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KamuiNetworkComponent_eventIsConnectedPeer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KamuiNetworkComponent_eventIsConnectedPeer_Parms), &Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkComponent, nullptr, "IsConnectedPeer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::KamuiNetworkComponent_eventIsConnectedPeer_Parms), Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics
	{
		struct KamuiNetworkComponent_eventSetMyLocalTransform_Parms
		{
			FTransform position;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KamuiNetworkComponent_eventSetMyLocalTransform_Parms, position), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkComponent, nullptr, "SetMyLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::KamuiNetworkComponent_eventSetMyLocalTransform_Parms), Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKamuiNetworkComponent);
	UClass* Z_Construct_UClass_UKamuiNetworkComponent_NoRegister()
	{
		return UKamuiNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKamuiNetworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKamuiNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KamuiNetworkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKamuiNetworkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKamuiNetworkComponent_GetPeerTransform, "GetPeerTransform" }, // 2308404180
		{ &Z_Construct_UFunction_UKamuiNetworkComponent_IsConnectedPeer, "IsConnectedPeer" }, // 4289697392
		{ &Z_Construct_UFunction_UKamuiNetworkComponent_SetMyLocalTransform, "SetMyLocalTransform" }, // 1769210117
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKamuiNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "KamuiNetworkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KamuiNetworkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKamuiNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKamuiNetworkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKamuiNetworkComponent_Statics::ClassParams = {
		&UKamuiNetworkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKamuiNetworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKamuiNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKamuiNetworkComponent()
	{
		if (!Z_Registration_Info_UClass_UKamuiNetworkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKamuiNetworkComponent.OuterSingleton, Z_Construct_UClass_UKamuiNetworkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKamuiNetworkComponent.OuterSingleton;
	}
	template<> KAMUINETWORKPLUGIN_API UClass* StaticClass<UKamuiNetworkComponent>()
	{
		return UKamuiNetworkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKamuiNetworkComponent);
	UKamuiNetworkComponent::~UKamuiNetworkComponent() {}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKamuiNetworkComponent, UKamuiNetworkComponent::StaticClass, TEXT("UKamuiNetworkComponent"), &Z_Registration_Info_UClass_UKamuiNetworkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKamuiNetworkComponent), 3417358721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkComponent_h_2638401921(TEXT("/Script/KamuiNetworkPlugin"),
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
