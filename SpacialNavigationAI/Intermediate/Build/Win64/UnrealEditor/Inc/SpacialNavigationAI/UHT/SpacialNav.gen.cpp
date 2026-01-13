// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SpacialNav.h"
#include "SpacialNavigationAI/Structures/FSpacialNavNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpacialNav() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavGraph_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_USpacialNav();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_USpacialNav_NoRegister();
SPACIALNAVIGATIONAI_API UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature();
SPACIALNAVIGATIONAI_API UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature();
SPACIALNAVIGATIONAI_API UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature();
SPACIALNAVIGATIONAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpacialNavNode();
UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGraphGenerated *****************************************************
struct Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SpacialNavigationAI, nullptr, "OnGraphGenerated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGraphGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnGraphGenerated)
{
	OnGraphGenerated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGraphGenerated *******************************************************

// ********** Begin Delegate FOnPathGenerated ******************************************************
struct Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SpacialNavigationAI, nullptr, "OnPathGenerated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPathGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnPathGenerated)
{
	OnPathGenerated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPathGenerated ********************************************************

// ********** Begin Delegate FOnPathSeeked *********************************************************
struct Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SpacialNavigationAI, nullptr, "OnPathSeeked__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPathSeeked_DelegateWrapper(const FMulticastScriptDelegate& OnPathSeeked)
{
	OnPathSeeked.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPathSeeked ***********************************************************

// ********** Begin Class USpacialNav Function GenerateGraph ***************************************
struct Z_Construct_UFunction_USpacialNav_GenerateGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spatial Navigation" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacialNav_GenerateGraph_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpacialNav, nullptr, "GenerateGraph", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GenerateGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpacialNav_GenerateGraph_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpacialNav_GenerateGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpacialNav_GenerateGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpacialNav::execGenerateGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateGraph();
	P_NATIVE_END;
}
// ********** End Class USpacialNav Function GenerateGraph *****************************************

// ********** Begin Class USpacialNav Function GeneratePath ****************************************
struct Z_Construct_UFunction_USpacialNav_GeneratePath_Statics
{
	struct SpacialNav_eventGeneratePath_Parms
	{
		TArray<FSpacialNavNode> InNodes;
		FVector OverrideDestination;
		bool bUseOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spatial Navigation" },
		{ "CPP_Default_bUseOverride", "false" },
		{ "CPP_Default_OverrideDestination", "" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideDestination;
	static void NewProp_bUseOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpacialNavNode, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpacialNav_eventGeneratePath_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_OverrideDestination = { "OverrideDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpacialNav_eventGeneratePath_Parms, OverrideDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_bUseOverride_SetBit(void* Obj)
{
	((SpacialNav_eventGeneratePath_Parms*)Obj)->bUseOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_bUseOverride = { "bUseOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpacialNav_eventGeneratePath_Parms), &Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_bUseOverride_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpacialNav_eventGeneratePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpacialNav_eventGeneratePath_Parms), &Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_InNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_InNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_OverrideDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_bUseOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpacialNav, nullptr, "GeneratePath", Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::SpacialNav_eventGeneratePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::SpacialNav_eventGeneratePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpacialNav_GeneratePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpacialNav_GeneratePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpacialNav::execGeneratePath)
{
	P_GET_TARRAY(FSpacialNavNode,Z_Param_InNodes);
	P_GET_STRUCT(FVector,Z_Param_OverrideDestination);
	P_GET_UBOOL(Z_Param_bUseOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GeneratePath(Z_Param_InNodes,Z_Param_OverrideDestination,Z_Param_bUseOverride);
	P_NATIVE_END;
}
// ********** End Class USpacialNav Function GeneratePath ******************************************

// ********** Begin Class USpacialNav Function GetRandomDestination ********************************
struct Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics
{
	struct SpacialNav_eventGetRandomDestination_Parms
	{
		TArray<FSpacialNavNode> ValidNodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spatial Navigation" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::NewProp_ValidNodes_Inner = { "ValidNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpacialNavNode, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::NewProp_ValidNodes = { "ValidNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpacialNav_eventGetRandomDestination_Parms, ValidNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::NewProp_ValidNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::NewProp_ValidNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpacialNav, nullptr, "GetRandomDestination", Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::SpacialNav_eventGetRandomDestination_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::SpacialNav_eventGetRandomDestination_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpacialNav_GetRandomDestination()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpacialNav_GetRandomDestination_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpacialNav::execGetRandomDestination)
{
	P_GET_TARRAY(FSpacialNavNode,Z_Param_ValidNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRandomDestination(Z_Param_ValidNodes);
	P_NATIVE_END;
}
// ********** End Class USpacialNav Function GetRandomDestination **********************************

// ********** Begin Class USpacialNav Function StartMovingToNextWaypoint ***************************
struct Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spatial Navigation" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpacialNav, nullptr, "StartMovingToNextWaypoint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpacialNav::execStartMovingToNextWaypoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMovingToNextWaypoint();
	P_NATIVE_END;
}
// ********** End Class USpacialNav Function StartMovingToNextWaypoint *****************************

// ********** Begin Class USpacialNav Function StopMoving ******************************************
struct Z_Construct_UFunction_USpacialNav_StopMoving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spatial Navigation" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacialNav_StopMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpacialNav, nullptr, "StopMoving", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpacialNav_StopMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpacialNav_StopMoving_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpacialNav_StopMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpacialNav_StopMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpacialNav::execStopMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMoving();
	P_NATIVE_END;
}
// ********** End Class USpacialNav Function StopMoving ********************************************

// ********** Begin Class USpacialNav **************************************************************
void USpacialNav::StaticRegisterNativesUSpacialNav()
{
	UClass* Class = USpacialNav::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateGraph", &USpacialNav::execGenerateGraph },
		{ "GeneratePath", &USpacialNav::execGeneratePath },
		{ "GetRandomDestination", &USpacialNav::execGetRandomDestination },
		{ "StartMovingToNextWaypoint", &USpacialNav::execStartMovingToNextWaypoint },
		{ "StopMoving", &USpacialNav::execStopMoving },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpacialNav;
UClass* USpacialNav::GetPrivateStaticClass()
{
	using TClass = USpacialNav;
	if (!Z_Registration_Info_UClass_USpacialNav.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpacialNav"),
			Z_Registration_Info_UClass_USpacialNav.InnerSingleton,
			StaticRegisterNativesUSpacialNav,
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
	return Z_Registration_Info_UClass_USpacialNav.InnerSingleton;
}
UClass* Z_Construct_UClass_USpacialNav_NoRegister()
{
	return USpacialNav::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpacialNav_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SpacialNav.h" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "Data | Graphs" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLocations_MetaData[] = {
		{ "Category", "Data | Graphs" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedPathLocations_MetaData[] = {
		{ "Category", "Data | Graphs" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeSpacing_MetaData[] = {
		{ "Category", "Parameters | Graph Generation" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberEdgeNodes_MetaData[] = {
		{ "Category", "Parameters | Graph Generation" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Category", "Parameters | Static Graph" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationActor_MetaData[] = {
		{ "Category", "Parameters | Destination" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[] = {
		{ "Category", "Parameters | Destination" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Parameters | Destination" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumRandomDestinationDistance_MetaData[] = {
		{ "Category", "Parameters | Destination" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionAvoidanceRadius_MetaData[] = {
		{ "Category", "Parameters | Collision Avoidance" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceForceStrength_MetaData[] = {
		{ "Category", "Parameters | Collision Avoidance" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSafeDistance_MetaData[] = {
		{ "Category", "Parameters | Collision Avoidance" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicGraph_MetaData[] = {
		{ "Category", "Parameters | Utility" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomPathing_MetaData[] = {
		{ "Category", "Parameters | Utility" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSeek_MetaData[] = {
		{ "Category", "Parameters | Utility" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTraces_MetaData[] = {
		{ "Category", "Parameters | Utility" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SpacialNav.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedPathLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SmoothedPathLocations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberEdgeNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumRandomDestinationDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionAvoidanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceForceStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSafeDistance;
	static void NewProp_bUseDynamicGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicGraph;
	static void NewProp_bUseRandomPathing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomPathing;
	static void NewProp_AutoSeek_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoSeek;
	static void NewProp_bShowDebugTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTraces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpacialNav_GenerateGraph, "GenerateGraph" }, // 3884515781
		{ &Z_Construct_UFunction_USpacialNav_GeneratePath, "GeneratePath" }, // 2399404562
		{ &Z_Construct_UFunction_USpacialNav_GetRandomDestination, "GetRandomDestination" }, // 3654285621
		{ &Z_Construct_UFunction_USpacialNav_StartMovingToNextWaypoint, "StartMovingToNextWaypoint" }, // 90681633
		{ &Z_Construct_UFunction_USpacialNav_StopMoving, "StopMoving" }, // 4054699168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpacialNav>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpacialNavNode, METADATA_PARAMS(0, nullptr) }; // 1746019271
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 1746019271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_PathLocations_Inner = { "PathLocations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_PathLocations = { "PathLocations", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, PathLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLocations_MetaData), NewProp_PathLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_SmoothedPathLocations_Inner = { "SmoothedPathLocations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_SmoothedPathLocations = { "SmoothedPathLocations", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, SmoothedPathLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedPathLocations_MetaData), NewProp_SmoothedPathLocations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_NodeSpacing = { "NodeSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, NodeSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeSpacing_MetaData), NewProp_NodeSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_NumberEdgeNodes = { "NumberEdgeNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, NumberEdgeNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberEdgeNodes_MetaData), NewProp_NumberEdgeNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, Graph), Z_Construct_UClass_ASpacialNavGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_DestinationActor = { "DestinationActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, DestinationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationActor_MetaData), NewProp_DestinationActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPoint_MetaData), NewProp_DestinationPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_MinimumRandomDestinationDistance = { "MinimumRandomDestinationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, MinimumRandomDestinationDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumRandomDestinationDistance_MetaData), NewProp_MinimumRandomDestinationDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_CollisionAvoidanceRadius = { "CollisionAvoidanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, CollisionAvoidanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionAvoidanceRadius_MetaData), NewProp_CollisionAvoidanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_AvoidanceForceStrength = { "AvoidanceForceStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, AvoidanceForceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceForceStrength_MetaData), NewProp_AvoidanceForceStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_MinSafeDistance = { "MinSafeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, MinSafeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSafeDistance_MetaData), NewProp_MinSafeDistance_MetaData) };
void Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseDynamicGraph_SetBit(void* Obj)
{
	((USpacialNav*)Obj)->bUseDynamicGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseDynamicGraph = { "bUseDynamicGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpacialNav), &Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseDynamicGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDynamicGraph_MetaData), NewProp_bUseDynamicGraph_MetaData) };
void Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseRandomPathing_SetBit(void* Obj)
{
	((USpacialNav*)Obj)->bUseRandomPathing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseRandomPathing = { "bUseRandomPathing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpacialNav), &Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseRandomPathing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomPathing_MetaData), NewProp_bUseRandomPathing_MetaData) };
void Z_Construct_UClass_USpacialNav_Statics::NewProp_AutoSeek_SetBit(void* Obj)
{
	((USpacialNav*)Obj)->AutoSeek = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_AutoSeek = { "AutoSeek", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpacialNav), &Z_Construct_UClass_USpacialNav_Statics::NewProp_AutoSeek_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSeek_MetaData), NewProp_AutoSeek_MetaData) };
void Z_Construct_UClass_USpacialNav_Statics::NewProp_bShowDebugTraces_SetBit(void* Obj)
{
	((USpacialNav*)Obj)->bShowDebugTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_bShowDebugTraces = { "bShowDebugTraces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpacialNav), &Z_Construct_UClass_USpacialNav_Statics::NewProp_bShowDebugTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugTraces_MetaData), NewProp_bShowDebugTraces_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpacialNav_Statics::NewProp_OwnerMovementComponent = { "OwnerMovementComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacialNav, OwnerMovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMovementComponent_MetaData), NewProp_OwnerMovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpacialNav_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_PathLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_PathLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_SmoothedPathLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_SmoothedPathLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_NodeSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_NumberEdgeNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_DestinationActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_DestinationPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_MinimumRandomDestinationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_CollisionAvoidanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_AvoidanceForceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_MinSafeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseDynamicGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_bUseRandomPathing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_AutoSeek,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_bShowDebugTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacialNav_Statics::NewProp_OwnerMovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpacialNav_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpacialNav_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SpacialNavigationAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpacialNav_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpacialNav_Statics::ClassParams = {
	&USpacialNav::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpacialNav_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpacialNav_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpacialNav_Statics::Class_MetaDataParams), Z_Construct_UClass_USpacialNav_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpacialNav()
{
	if (!Z_Registration_Info_UClass_USpacialNav.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpacialNav.OuterSingleton, Z_Construct_UClass_USpacialNav_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpacialNav.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpacialNav);
USpacialNav::~USpacialNav() {}
// ********** End Class USpacialNav ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h__Script_SpacialNavigationAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpacialNav, USpacialNav::StaticClass, TEXT("USpacialNav"), &Z_Registration_Info_UClass_USpacialNav, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpacialNav), 3403165729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h__Script_SpacialNavigationAI_969131731(TEXT("/Script/SpacialNavigationAI"),
	Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h__Script_SpacialNavigationAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h__Script_SpacialNavigationAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
