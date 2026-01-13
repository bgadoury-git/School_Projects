// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/SpacialNavGraph.h"
#include "SpacialNavigationAI/Structures/FSpacialNavNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpacialNavGraph() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavGraph();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavGraph_NoRegister();
SPACIALNAVIGATIONAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpacialNavNode();
UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpacialNavGraph Function GetGraphNodes **********************************
struct Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics
{
	struct SpacialNavGraph_eventGetGraphNodes_Parms
	{
		TArray<FSpacialNavNode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpacialNavNode, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpacialNavGraph_eventGetGraphNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpacialNavGraph, nullptr, "GetGraphNodes", Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::SpacialNavGraph_eventGetGraphNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::SpacialNavGraph_eventGetGraphNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpacialNavGraph::execGetGraphNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSpacialNavNode>*)Z_Param__Result=P_THIS->GetGraphNodes();
	P_NATIVE_END;
}
// ********** End Class ASpacialNavGraph Function GetGraphNodes ************************************

// ********** Begin Class ASpacialNavGraph Function RegenerateGraph ********************************
struct Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpacialNavGraph, nullptr, "RegenerateGraph", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpacialNavGraph::execRegenerateGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateGraph();
	P_NATIVE_END;
}
// ********** End Class ASpacialNavGraph Function RegenerateGraph **********************************

// ********** Begin Class ASpacialNavGraph *********************************************************
void ASpacialNavGraph::StaticRegisterNativesASpacialNavGraph()
{
	UClass* Class = ASpacialNavGraph::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGraphNodes", &ASpacialNavGraph::execGetGraphNodes },
		{ "RegenerateGraph", &ASpacialNavGraph::execRegenerateGraph },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpacialNavGraph;
UClass* ASpacialNavGraph::GetPrivateStaticClass()
{
	using TClass = ASpacialNavGraph;
	if (!Z_Registration_Info_UClass_ASpacialNavGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpacialNavGraph"),
			Z_Registration_Info_UClass_ASpacialNavGraph.InnerSingleton,
			StaticRegisterNativesASpacialNavGraph,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASpacialNavGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpacialNavGraph_NoRegister()
{
	return ASpacialNavGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpacialNavGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/SpacialNavGraph.h" },
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeTraces_MetaData[] = {
		{ "Category", "SpacialNavGraph" },
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDrawTime_MetaData[] = {
		{ "Category", "SpacialNavGraph" },
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "SpacialNavGraph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeDensity_MetaData[] = {
		{ "Category", "SpacialNavGraph" },
		{ "ModuleRelativePath", "Public/Actors/SpacialNavGraph.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisualizeTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeTraces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDrawTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpacialNavGraph_GetGraphNodes, "GetGraphNodes" }, // 2634358559
		{ &Z_Construct_UFunction_ASpacialNavGraph_RegenerateGraph, "RegenerateGraph" }, // 2898807908
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpacialNavGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_bVisualizeTraces_SetBit(void* Obj)
{
	((ASpacialNavGraph*)Obj)->bVisualizeTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_bVisualizeTraces = { "bVisualizeTraces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpacialNavGraph), &Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_bVisualizeTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualizeTraces_MetaData), NewProp_bVisualizeTraces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_TraceDrawTime = { "TraceDrawTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavGraph, TraceDrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDrawTime_MetaData), NewProp_TraceDrawTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavGraph, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_NodeDensity = { "NodeDensity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavGraph, NodeDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeDensity_MetaData), NewProp_NodeDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpacialNavGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_bVisualizeTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_TraceDrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavGraph_Statics::NewProp_NodeDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpacialNavGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpacialNavigationAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpacialNavGraph_Statics::ClassParams = {
	&ASpacialNavGraph::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpacialNavGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavGraph_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpacialNavGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpacialNavGraph()
{
	if (!Z_Registration_Info_UClass_ASpacialNavGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpacialNavGraph.OuterSingleton, Z_Construct_UClass_ASpacialNavGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpacialNavGraph.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpacialNavGraph);
ASpacialNavGraph::~ASpacialNavGraph() {}
// ********** End Class ASpacialNavGraph ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h__Script_SpacialNavigationAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpacialNavGraph, ASpacialNavGraph::StaticClass, TEXT("ASpacialNavGraph"), &Z_Registration_Info_UClass_ASpacialNavGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpacialNavGraph), 2664137255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h__Script_SpacialNavigationAI_3054495952(TEXT("/Script/SpacialNavigationAI"),
	Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h__Script_SpacialNavigationAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h__Script_SpacialNavigationAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
