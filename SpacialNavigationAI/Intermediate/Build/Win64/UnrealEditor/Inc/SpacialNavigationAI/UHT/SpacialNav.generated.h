// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SpacialNav.h"

#ifdef SPACIALNAVIGATIONAI_SpacialNav_generated_h
#error "SpacialNav.generated.h already included, missing '#pragma once' in SpacialNav.h"
#endif
#define SPACIALNAVIGATIONAI_SpacialNav_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSpacialNavNode;

// ********** Begin Delegate FOnGraphGenerated *****************************************************
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_12_DELEGATE \
SPACIALNAVIGATIONAI_API void FOnGraphGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnGraphGenerated);


// ********** End Delegate FOnGraphGenerated *******************************************************

// ********** Begin Delegate FOnPathGenerated ******************************************************
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_13_DELEGATE \
SPACIALNAVIGATIONAI_API void FOnPathGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnPathGenerated);


// ********** End Delegate FOnPathGenerated ********************************************************

// ********** Begin Delegate FOnPathSeeked *********************************************************
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_14_DELEGATE \
SPACIALNAVIGATIONAI_API void FOnPathSeeked_DelegateWrapper(const FMulticastScriptDelegate& OnPathSeeked);


// ********** End Delegate FOnPathSeeked ***********************************************************

// ********** Begin Class USpacialNav **************************************************************
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopMoving); \
	DECLARE_FUNCTION(execStartMovingToNextWaypoint); \
	DECLARE_FUNCTION(execGeneratePath); \
	DECLARE_FUNCTION(execGenerateGraph); \
	DECLARE_FUNCTION(execGetRandomDestination);


SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_USpacialNav_NoRegister();

#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpacialNav(); \
	friend struct Z_Construct_UClass_USpacialNav_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_USpacialNav_NoRegister(); \
public: \
	DECLARE_CLASS2(USpacialNav, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpacialNavigationAI"), Z_Construct_UClass_USpacialNav_NoRegister) \
	DECLARE_SERIALIZER(USpacialNav)


#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpacialNav(USpacialNav&&) = delete; \
	USpacialNav(const USpacialNav&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpacialNav); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpacialNav); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpacialNav) \
	NO_API virtual ~USpacialNav();


#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_16_PROLOG
#define FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpacialNav;

// ********** End Class USpacialNav ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_SpacialNav_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
