// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_OverworldAI_generated_h
#error "OverworldAI.generated.h already included, missing '#pragma once' in OverworldAI.h"
#endif
#define MYPROJECT_OverworldAI_generated_h

#define MyProject_Source_MyProject_Public_OverworldAI_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Public_OverworldAI_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Public_OverworldAI_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOverworldAI(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AOverworldAI(); \
public: \
	DECLARE_CLASS(AOverworldAI, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AOverworldAI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Public_OverworldAI_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOverworldAI(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AOverworldAI(); \
public: \
	DECLARE_CLASS(AOverworldAI, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AOverworldAI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Public_OverworldAI_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOverworldAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOverworldAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverworldAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverworldAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOverworldAI(AOverworldAI&&); \
	NO_API AOverworldAI(const AOverworldAI&); \
public:


#define MyProject_Source_MyProject_Public_OverworldAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOverworldAI(AOverworldAI&&); \
	NO_API AOverworldAI(const AOverworldAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverworldAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverworldAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOverworldAI)


#define MyProject_Source_MyProject_Public_OverworldAI_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AOverworldAI, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(AOverworldAI, MovementForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(AOverworldAI, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(AOverworldAI, RequiredDistanceToTarget); }


#define MyProject_Source_MyProject_Public_OverworldAI_h_9_PROLOG
#define MyProject_Source_MyProject_Public_OverworldAI_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_INCLASS \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Public_OverworldAI_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_OverworldAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Public_OverworldAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
