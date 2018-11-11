// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_Floor_generated_h
#error "Floor.generated.h already included, missing '#pragma once' in Floor.h"
#endif
#define BOUNTYDASH_Floor_generated_h

#define BountyDashCode_Source_BountyDash_Floor_h_13_RPC_WRAPPERS
#define BountyDashCode_Source_BountyDash_Floor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BountyDashCode_Source_BountyDash_Floor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloor(); \
	friend struct Z_Construct_UClass_AFloor_Statics; \
public: \
	DECLARE_CLASS(AFloor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AFloor)


#define BountyDashCode_Source_BountyDash_Floor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFloor(); \
	friend struct Z_Construct_UClass_AFloor_Statics; \
public: \
	DECLARE_CLASS(AFloor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AFloor)


#define BountyDashCode_Source_BountyDash_Floor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloor(AFloor&&); \
	NO_API AFloor(const AFloor&); \
public:


#define BountyDashCode_Source_BountyDash_Floor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloor(AFloor&&); \
	NO_API AFloor(const AFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloor)


#define BountyDashCode_Source_BountyDash_Floor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloorMeshScenes() { return STRUCT_OFFSET(AFloor, FloorMeshScenes); } \
	FORCEINLINE static uint32 __PPO__FloorMeshes() { return STRUCT_OFFSET(AFloor, FloorMeshes); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(AFloor, CollisionBox); }


#define BountyDashCode_Source_BountyDash_Floor_h_10_PROLOG
#define BountyDashCode_Source_BountyDash_Floor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_Floor_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_Floor_h_13_RPC_WRAPPERS \
	BountyDashCode_Source_BountyDash_Floor_h_13_INCLASS \
	BountyDashCode_Source_BountyDash_Floor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDashCode_Source_BountyDash_Floor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_Floor_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_Floor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_Floor_h_13_INCLASS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_Floor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDashCode_Source_BountyDash_Floor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
