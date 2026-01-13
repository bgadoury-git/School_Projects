// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pawns/SpacialNavPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpacialNavPawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavPawn();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_ASpacialNavPawn_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_UHomingProjectileLauncher_NoRegister();
SPACIALNAVIGATIONAI_API UClass* Z_Construct_UClass_USpacialNav_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpacialNavigationAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpacialNavPawn **********************************************************
void ASpacialNavPawn::StaticRegisterNativesASpacialNavPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpacialNavPawn;
UClass* ASpacialNavPawn::GetPrivateStaticClass()
{
	using TClass = ASpacialNavPawn;
	if (!Z_Registration_Info_UClass_ASpacialNavPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpacialNavPawn"),
			Z_Registration_Info_UClass_ASpacialNavPawn.InnerSingleton,
			StaticRegisterNativesASpacialNavPawn,
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
	return Z_Registration_Info_UClass_ASpacialNavPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpacialNavPawn_NoRegister()
{
	return ASpacialNavPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpacialNavPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/SpacialNavPawn.h" },
		{ "ModuleRelativePath", "Public/Pawns/SpacialNavPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "SpacialNavPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/SpacialNavPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "SpacialNavPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/SpacialNavPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLauncher_MetaData[] = {
		{ "Category", "SpacialNavPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/SpacialNavPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "SpacialNavPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/SpacialNavPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacialNavComponent_MetaData[] = {
		{ "Category", "SpacialNavPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/SpacialNavPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileLauncher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpacialNavComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpacialNavPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavPawn, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavPawn, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_ProjectileLauncher = { "ProjectileLauncher", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavPawn, ProjectileLauncher), Z_Construct_UClass_UHomingProjectileLauncher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLauncher_MetaData), NewProp_ProjectileLauncher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavPawn, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_SpacialNavComponent = { "SpacialNavComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpacialNavPawn, SpacialNavComponent), Z_Construct_UClass_USpacialNav_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacialNavComponent_MetaData), NewProp_SpacialNavComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpacialNavPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_ProjectileLauncher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacialNavPawn_Statics::NewProp_SpacialNavComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpacialNavPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SpacialNavigationAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpacialNavPawn_Statics::ClassParams = {
	&ASpacialNavPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpacialNavPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpacialNavPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpacialNavPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpacialNavPawn()
{
	if (!Z_Registration_Info_UClass_ASpacialNavPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpacialNavPawn.OuterSingleton, Z_Construct_UClass_ASpacialNavPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpacialNavPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpacialNavPawn);
ASpacialNavPawn::~ASpacialNavPawn() {}
// ********** End Class ASpacialNavPawn ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Pawns_SpacialNavPawn_h__Script_SpacialNavigationAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpacialNavPawn, ASpacialNavPawn::StaticClass, TEXT("ASpacialNavPawn"), &Z_Registration_Info_UClass_ASpacialNavPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpacialNavPawn), 3171087018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Pawns_SpacialNavPawn_h__Script_SpacialNavigationAI_2098148230(TEXT("/Script/SpacialNavigationAI"),
	Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Pawns_SpacialNavPawn_h__Script_SpacialNavigationAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basti_Perforce_PRJ_IA_dev_PRJ_IA_Plugins_SpacialNavigationAI_Source_SpacialNavigationAI_Public_Pawns_SpacialNavPawn_h__Script_SpacialNavigationAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
