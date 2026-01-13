// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpacialNavigationAI/Structures/FSpacialNavNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFSpacialNavNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SPACIALNAVIGATIONAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpacialNavNode();
UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSpacialNavNode ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpacialNavNode;
class UScriptStruct* FSpacialNavNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpacialNavNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpacialNavNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpacialNavNode, (UObject*)Z_Construct_UPackage__Script_SpacialNavigationAI(), TEXT("SpacialNavNode"));
	}
	return Z_Registration_Info_UScriptStruct_FSpacialNavNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpacialNavNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/FSpacialNavNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SpacialNavNode" },
		{ "ModuleRelativePath", "Structures/FSpacialNavNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborIndices_MetaData[] = {
		{ "Category", "SpacialNavNode" },
		{ "ModuleRelativePath", "Structures/FSpacialNavNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObstacle_MetaData[] = {
		{ "Category", "SpacialNavNode" },
		{ "ModuleRelativePath", "Structures/FSpacialNavNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeighborIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighborIndices;
	static void NewProp_bIsObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObstacle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpacialNavNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpacialNavNode, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_NeighborIndices_Inner = { "NeighborIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_NeighborIndices = { "NeighborIndices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpacialNavNode, NeighborIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborIndices_MetaData), NewProp_NeighborIndices_MetaData) };
void Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_bIsObstacle_SetBit(void* Obj)
{
	((FSpacialNavNode*)Obj)->bIsObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_bIsObstacle = { "bIsObstacle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpacialNavNode), &Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_bIsObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObstacle_MetaData), NewProp_bIsObstacle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpacialNavNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_NeighborIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_NeighborIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewProp_bIsObstacle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpacialNavNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpacialNavNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpacialNavigationAI,
	nullptr,
	&NewStructOps,
	"SpacialNavNode",
	Z_Construct_UScriptStruct_FSpacialNavNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpacialNavNode_Statics::PropPointers),
	sizeof(FSpacialNavNode),
	alignof(FSpacialNavNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpacialNavNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpacialNavNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpacialNavNode()
{
	if (!Z_Registration_Info_UScriptStruct_FSpacialNavNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpacialNavNode.InnerSingleton, Z_Construct_UScriptStruct_FSpacialNavNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpacialNavNode.InnerSingleton;
}
// ********** End ScriptStruct FSpacialNavNode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Structures_FSpacialNavNode_h__Script_SpacialNavigationAI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpacialNavNode::StaticStruct, Z_Construct_UScriptStruct_FSpacialNavNode_Statics::NewStructOps, TEXT("SpacialNavNode"), &Z_Registration_Info_UScriptStruct_FSpacialNavNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpacialNavNode), 1746019271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Structures_FSpacialNavNode_h__Script_SpacialNavigationAI_351286079(TEXT("/Script/SpacialNavigationAI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Structures_FSpacialNavNode_h__Script_SpacialNavigationAI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Structures_FSpacialNavNode_h__Script_SpacialNavigationAI_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
