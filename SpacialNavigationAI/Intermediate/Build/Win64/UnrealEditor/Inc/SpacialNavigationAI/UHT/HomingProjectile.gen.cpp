// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/HomingProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHomingProjectile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_AHomingProjectile();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_AHomingProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHomingProjectile ********************************************************
void AHomingProjectile::StaticRegisterNativesAHomingProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHomingProjectile;
UClass* AHomingProjectile::GetPrivateStaticClass()
{
	using TClass = AHomingProjectile;
	if (!Z_Registration_Info_UClass_AHomingProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HomingProjectile"),
			Z_Registration_Info_UClass_AHomingProjectile.InnerSingleton,
			StaticRegisterNativesAHomingProjectile,
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
	return Z_Registration_Info_UClass_AHomingProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AHomingProjectile_NoRegister()
{
	return AHomingProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHomingProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/HomingProjectile.h" },
		{ "ModuleRelativePath", "Public/Actors/HomingProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "HomingProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/HomingProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "HomingProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/HomingProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "HomingProjectile" },
		{ "ModuleRelativePath", "Public/Actors/HomingProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomingProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHomingProjectile, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHomingProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomingProjectile_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHomingProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpacialNavigationAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHomingProjectile_Statics::ClassParams = {
	&AHomingProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHomingProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomingProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AHomingProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHomingProjectile()
{
	if (!Z_Registration_Info_UClass_AHomingProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHomingProjectile.OuterSingleton, Z_Construct_UClass_AHomingProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHomingProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHomingProjectile);
AHomingProjectile::~AHomingProjectile() {}
// ********** End Class AHomingProjectile **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_HomingProjectile_h__Script_SpacialNavigationAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHomingProjectile, AHomingProjectile::StaticClass, TEXT("AHomingProjectile"), &Z_Registration_Info_UClass_AHomingProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHomingProjectile), 3988663050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_HomingProjectile_h__Script_SpacialNavigationAI_2068814242(TEXT("/Script/SpacialNavigationAI"),
	Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_HomingProjectile_h__Script_SpacialNavigationAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Actors_HomingProjectile_h__Script_SpacialNavigationAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
