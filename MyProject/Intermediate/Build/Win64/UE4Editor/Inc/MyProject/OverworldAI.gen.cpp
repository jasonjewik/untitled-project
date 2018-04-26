// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OverworldAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverworldAI() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AOverworldAI_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AOverworldAI();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AOverworldAI::StaticRegisterNativesAOverworldAI()
	{
	}
	UClass* Z_Construct_UClass_AOverworldAI_NoRegister()
	{
		return AOverworldAI::StaticClass();
	}
	UClass* Z_Construct_UClass_AOverworldAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "OverworldAI.h" },
				{ "ModuleRelativePath", "Public/OverworldAI.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[] = {
				{ "Category", "OverworldAI" },
				{ "ModuleRelativePath", "Public/OverworldAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget = { UE4CodeGen_Private::EPropertyClass::Float, "RequiredDistanceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AOverworldAI, RequiredDistanceToTarget), METADATA_PARAMS(NewProp_RequiredDistanceToTarget_MetaData, ARRAY_COUNT(NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[] = {
				{ "Category", "OverworldAI" },
				{ "ModuleRelativePath", "Public/OverworldAI.h" },
			};
#endif
			auto NewProp_bUseVelocityChange_SetBit = [](void* Obj){ ((AOverworldAI*)Obj)->bUseVelocityChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVelocityChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AOverworldAI), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVelocityChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[] = {
				{ "Category", "OverworldAI" },
				{ "ModuleRelativePath", "Public/OverworldAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce = { UE4CodeGen_Private::EPropertyClass::Float, "MovementForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AOverworldAI, MovementForce), METADATA_PARAMS(NewProp_MovementForce_MetaData, ARRAY_COUNT(NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/OverworldAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(AOverworldAI, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredDistanceToTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVelocityChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOverworldAI>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOverworldAI::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOverworldAI, 1631199322);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOverworldAI(Z_Construct_UClass_AOverworldAI, &AOverworldAI::StaticClass, TEXT("/Script/MyProject"), TEXT("AOverworldAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOverworldAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
