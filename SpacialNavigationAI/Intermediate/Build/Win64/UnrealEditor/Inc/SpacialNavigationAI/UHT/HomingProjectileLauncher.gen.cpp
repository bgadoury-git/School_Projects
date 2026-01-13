// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/HomingProjectileLauncher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHomingProjectileLauncher() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_AHomingProjectile_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_UHomingProjectileLauncher();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_UHomingProjectileLauncher_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHomingProjectileLauncher Function LaunchHomingProjectile ****************
struct Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Components/HomingProjectileLauncher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHomingProjectileLauncher, nullptr, "LaunchHomingProjectile", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHomingProjectileLauncher::execLaunchHomingProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchHomingProjectile();
	P_NATIVE_END;
}
// ********** End Class UHomingProjectileLauncher Function LaunchHomingProjectile ******************

// ********** Begin Class UHomingProjectileLauncher ************************************************
void UHomingProjectileLauncher::StaticRegisterNativesUHomingProjectileLauncher()
{
	UClass* Class = UHomingProjectileLauncher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LaunchHomingProjectile", &UHomingProjectileLauncher::execLaunchHomingProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHomingProjectileLauncher;
UClass* UHomingProjectileLauncher::GetPrivateStaticClass()
{
	using TClass = UHomingProjectileLauncher;
	if (!Z_Registration_Info_UClass_UHomingProjectileLauncher.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HomingProjectileLauncher"),
			Z_Registration_Info_UClass_UHomingProjectileLauncher.InnerSingleton,
			StaticRegisterNativesUHomingProjectileLauncher,
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
	return Z_Registration_Info_UClass_UHomingProjectileLauncher.InnerSingleton;
}
UClass* Z_Construct_UClass_UHomingProjectileLauncher_NoRegister()
{
	return UHomingProjectileLauncher::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHomingProjectileLauncher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/HomingProjectileLauncher.h" },
		{ "ModuleRelativePath", "Public/Components/HomingProjectileLauncher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Components/HomingProjectileLauncher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTimerInterval_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Components/HomingProjectileLauncher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Components/HomingProjectileLauncher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HomingProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireTimerInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHomingProjectileLauncher_LaunchHomingProjectile, "LaunchHomingProjectile" }, // 4028478749
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHomingProjectileLauncher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHomingProjectileLauncher_Statics::NewProp_HomingProjectileClass = { "HomingProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHomingProjectileLauncher, HomingProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHomingProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingProjectileClass_MetaData), NewProp_HomingProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHomingProjectileLauncher_Statics::NewProp_FireTimerInterval = { "FireTimerInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHomingProjectileLauncher, FireTimerInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTimerInterval_MetaData), NewProp_FireTimerInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHomingProjectileLauncher_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHomingProjectileLauncher, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHomingProjectileLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHomingProjectileLauncher_Statics::NewProp_HomingProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHomingProjectileLauncher_Statics::NewProp_FireTimerInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHomingProjectileLauncher_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileLauncher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHomingProjectileLauncher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SpacialNavigationAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileLauncher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHomingProjectileLauncher_Statics::ClassParams = {
	&UHomingProjectileLauncher::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHomingProjectileLauncher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileLauncher_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileLauncher_Statics::Class_MetaDataParams), Z_Construct_UClass_UHomingProjectileLauncher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHomingProjectileLauncher()
{
	if (!Z_Registration_Info_UClass_UHomingProjectileLauncher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHomingProjectileLauncher.OuterSingleton, Z_Construct_UClass_UHomingProjectileLauncher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHomingProjectileLauncher.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHomingProjectileLauncher);
UHomingProjectileLauncher::~UHomingProjectileLauncher() {}
// ********** End Class UHomingProjectileLauncher **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_HomingProjectileLauncher_h__Script_SpacialNavigationAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHomingProjectileLauncher, UHomingProjectileLauncher::StaticClass, TEXT("UHomingProjectileLauncher"), &Z_Registration_Info_UClass_UHomingProjectileLauncher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHomingProjectileLauncher), 1229095527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_HomingProjectileLauncher_h__Script_SpacialNavigationAI_3992419019(TEXT("/Script/SpacialNavigationAI"),
	Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_HomingProjectileLauncher_h__Script_SpacialNavigationAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Components_HomingProjectileLauncher_h__Script_SpacialNavigationAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
