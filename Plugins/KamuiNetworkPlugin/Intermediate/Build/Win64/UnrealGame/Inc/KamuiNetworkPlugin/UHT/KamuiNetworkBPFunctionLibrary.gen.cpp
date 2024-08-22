// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KamuiNetworkPlugin/Public/KamuiNetworkBPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKamuiNetworkBPFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	KAMUINETWORKPLUGIN_API UClass* Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary();
	KAMUINETWORKPLUGIN_API UClass* Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KamuiNetworkPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UKamuiNetworkBPFunctionLibrary::execKamuinetworkEndServerServices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKamuiNetworkBPFunctionLibrary::KamuinetworkEndServerServices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkBPFunctionLibrary::execKamuinetworkEndServices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKamuiNetworkBPFunctionLibrary::KamuinetworkEndServices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkBPFunctionLibrary::execKamuinetworkStartMatching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKamuiNetworkBPFunctionLibrary::KamuinetworkStartMatching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkBPFunctionLibrary::execKamuinetworkStartServerServices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKamuiNetworkBPFunctionLibrary::KamuinetworkStartServerServices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkBPFunctionLibrary::execKamuinetworkStartServices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKamuiNetworkBPFunctionLibrary::KamuinetworkStartServices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKamuiNetworkBPFunctionLibrary::execKamuinetworkTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKamuiNetworkBPFunctionLibrary::KamuinetworkTick();
		P_NATIVE_END;
	}
	void UKamuiNetworkBPFunctionLibrary::StaticRegisterNativesUKamuiNetworkBPFunctionLibrary()
	{
		UClass* Class = UKamuiNetworkBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KamuinetworkEndServerServices", &UKamuiNetworkBPFunctionLibrary::execKamuinetworkEndServerServices },
			{ "KamuinetworkEndServices", &UKamuiNetworkBPFunctionLibrary::execKamuinetworkEndServices },
			{ "KamuinetworkStartMatching", &UKamuiNetworkBPFunctionLibrary::execKamuinetworkStartMatching },
			{ "KamuinetworkStartServerServices", &UKamuiNetworkBPFunctionLibrary::execKamuinetworkStartServerServices },
			{ "KamuinetworkStartServices", &UKamuiNetworkBPFunctionLibrary::execKamuinetworkStartServices },
			{ "KamuinetworkTick", &UKamuiNetworkBPFunctionLibrary::execKamuinetworkTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, nullptr, "KamuinetworkEndServerServices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, nullptr, "KamuinetworkEndServices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, nullptr, "KamuinetworkStartMatching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics
	{
		struct KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServerServices_Parms
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
	void Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServerServices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServerServices_Parms), &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, nullptr, "KamuinetworkStartServerServices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServerServices_Parms), Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics
	{
		struct KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServices_Parms
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
	void Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServices_Parms), &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, nullptr, "KamuinetworkStartServices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::KamuiNetworkBPFunctionLibrary_eventKamuinetworkStartServices_Parms), Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics
	{
		struct KamuiNetworkBPFunctionLibrary_eventKamuinetworkTick_Parms
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
	void Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KamuiNetworkBPFunctionLibrary_eventKamuinetworkTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KamuiNetworkBPFunctionLibrary_eventKamuinetworkTick_Parms), &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, nullptr, "KamuinetworkTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::KamuiNetworkBPFunctionLibrary_eventKamuinetworkTick_Parms), Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKamuiNetworkBPFunctionLibrary);
	UClass* Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_NoRegister()
	{
		return UKamuiNetworkBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KamuiNetworkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServerServices, "KamuinetworkEndServerServices" }, // 685793405
		{ &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkEndServices, "KamuinetworkEndServices" }, // 647772690
		{ &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartMatching, "KamuinetworkStartMatching" }, // 68060846
		{ &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServerServices, "KamuinetworkStartServerServices" }, // 2400686885
		{ &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkStartServices, "KamuinetworkStartServices" }, // 126342711
		{ &Z_Construct_UFunction_UKamuiNetworkBPFunctionLibrary_KamuinetworkTick, "KamuinetworkTick" }, // 689852563
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KamuiNetworkBPFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KamuiNetworkBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKamuiNetworkBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::ClassParams = {
		&UKamuiNetworkBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UKamuiNetworkBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKamuiNetworkBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKamuiNetworkBPFunctionLibrary.OuterSingleton;
	}
	template<> KAMUINETWORKPLUGIN_API UClass* StaticClass<UKamuiNetworkBPFunctionLibrary>()
	{
		return UKamuiNetworkBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKamuiNetworkBPFunctionLibrary);
	UKamuiNetworkBPFunctionLibrary::~UKamuiNetworkBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkBPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKamuiNetworkBPFunctionLibrary, UKamuiNetworkBPFunctionLibrary::StaticClass, TEXT("UKamuiNetworkBPFunctionLibrary"), &Z_Registration_Info_UClass_UKamuiNetworkBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKamuiNetworkBPFunctionLibrary), 4086064181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkBPFunctionLibrary_h_2720561987(TEXT("/Script/KamuiNetworkPlugin"),
		Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Freshy_Polaris_Project_main_Plugins_KamuiNetworkPlugin_Source_KamuiNetworkPlugin_Public_KamuiNetworkBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
