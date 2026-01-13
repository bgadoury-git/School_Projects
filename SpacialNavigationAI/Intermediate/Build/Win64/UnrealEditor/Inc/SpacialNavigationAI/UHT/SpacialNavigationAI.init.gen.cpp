// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpacialNavigationAI_init() {}
	SPACIALNAVIGATIONAI_API UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature();
	SPACIALNAVIGATIONAI_API UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature();
	SPACIALNAVIGATIONAI_API UFunction* Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpacialNavigationAI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI()
	{
		if (!Z_Registration_Info_UPackage__Script_SpacialNavigationAI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpacialNavigationAI_OnGraphGenerated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathGenerated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpacialNavigationAI_OnPathSeeked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpacialNavigationAI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7D892A95,
				0xBB135A35,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpacialNavigationAI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpacialNavigationAI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpacialNavigationAI(Z_Construct_UPackage__Script_SpacialNavigationAI, TEXT("/Script/SpacialNavigationAI"), Z_Registration_Info_UPackage__Script_SpacialNavigationAI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D892A95, 0xBB135A35));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
