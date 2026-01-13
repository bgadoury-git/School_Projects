// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/SpacialNavGraph.h"

#ifdef SPACIALNAVIGATIONAI_SpacialNavGraph_generated_h
#error "SpacialNavGraph.generated.h already included, missing '#pragma once' in SpacialNavGraph.h"
#endif
#define SPACIALNAVIGATIONAI_SpacialNavGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSpacialNavNode;

// ********** Begin Class ASpacialNavGraph *********************************************************
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegenerateGraph); \
	DECLARE_FUNCTION(execGetGraphNodes);


SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavGraph_NoRegister();

#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpacialNavGraph(); \
	friend struct Z_Construct_UClass_ASpacialNavGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpacialNavGraph, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpacialNavigationAI"), Z_Construct_UClass_ASpacialNavGraph_NoRegister) \
	DECLARE_SERIALIZER(ASpacialNavGraph)


#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpacialNavGraph(ASpacialNavGraph&&) = delete; \
	ASpacialNavGraph(const ASpacialNavGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpacialNavGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpacialNavGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpacialNavGraph) \
	NO_API virtual ~ASpacialNavGraph();


#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_12_PROLOG
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpacialNavGraph;

// ********** End Class ASpacialNavGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_SpacialNavGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
