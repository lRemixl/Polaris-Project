// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotHeadAnimationRuntime/Public/AnimNode_MotHead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MotHead() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	MOTHEADANIMATIONRUNTIME_API UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace();
	MOTHEADANIMATIONRUNTIME_API UEnum* Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode();
	MOTHEADANIMATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotHead();
	UPackage* Z_Construct_UPackage__Script_MotHeadAnimationRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MotHead>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_MotHead cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MotHead;
class UScriptStruct* FAnimNode_MotHead::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MotHead.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MotHead.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotHead, (UObject*)Z_Construct_UPackage__Script_MotHeadAnimationRuntime(), TEXT("AnimNode_MotHead"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MotHead.OuterSingleton;
}
template<> MOTHEADANIMATIONRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MotHead>()
{
	return FAnimNode_MotHead::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotHeadMatrixSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotHeadMatrixSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SupportUEAnimation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportUEAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportUEAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFirstUpdatePhoenix_MetaData[];
#endif
		static void NewProp_bForceFirstUpdatePhoenix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFirstUpdatePhoenix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MotHead>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_MotHeadMatrixSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_MotHead" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_MotHeadMatrixSpace = { "MotHeadMatrixSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotHead, MotHeadMatrixSpace), Z_Construct_UEnum_MotHeadAnimationRuntime_EMotHeadMatrixSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_MotHeadMatrixSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_MotHeadMatrixSpace_MetaData)) }; // 1120012999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_MotHead" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlSpace = { "ControlSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotHead, ControlSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlSpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_MotHead" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotHead, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_MotHead" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlLocation = { "ControlLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotHead, ControlLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_MotHead" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation = { "SupportUEAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotHead, SupportUEAnimation), Z_Construct_UEnum_MotHeadAnimationRuntime_ESupportUEAnimationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation_MetaData)) }; // 2997672603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_MotHead" },
		{ "ModuleRelativePath", "Public/AnimNode_MotHead.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix_SetBit(void* Obj)
	{
		((FAnimNode_MotHead*)Obj)->bForceFirstUpdatePhoenix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix = { "bForceFirstUpdatePhoenix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotHead), &Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_MotHeadMatrixSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_ControlLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_SupportUEAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewProp_bForceFirstUpdatePhoenix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotHeadAnimationRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_MotHead",
		sizeof(FAnimNode_MotHead),
		alignof(FAnimNode_MotHead),
		Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotHead()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MotHead.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MotHead.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MotHead.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_AnimNode_MotHead_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_AnimNode_MotHead_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MotHead::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MotHead_Statics::NewStructOps, TEXT("AnimNode_MotHead"), &Z_Registration_Info_UScriptStruct_AnimNode_MotHead, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MotHead), 2420894515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_AnimNode_MotHead_h_2844399798(TEXT("/Script/MotHeadAnimationRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_AnimNode_MotHead_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SHORT_Polaris_Project_main_Plugins_MotHeadAnimation_Source_MotHeadAnimationRuntime_Public_AnimNode_MotHead_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
