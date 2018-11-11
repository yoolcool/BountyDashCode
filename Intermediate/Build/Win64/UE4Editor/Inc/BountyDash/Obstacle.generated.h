// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_Obstacle_generated_h
#error "Obstacle.generated.h already included, missing '#pragma once' in Obstacle.h"
#endif
#define BOUNTYDASH_Obstacle_generated_h

#define BountyDashCode_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS
#define BountyDashCode_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BountyDashCode_Source_BountyDash_Obstacle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, ABountyDashObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define BountyDashCode_Source_BountyDash_Obstacle_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, ABountyDashObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define BountyDashCode_Source_BountyDash_Obstacle_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstacle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstacle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public:


#define BountyDashCode_Source_BountyDash_Obstacle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacle)


#define BountyDashCode_Source_BountyDash_Obstacle_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AObstacle, Mesh); }


#define BountyDashCode_Source_BountyDash_Obstacle_h_10_PROLOG
#define BountyDashCode_Source_BountyDash_Obstacle_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_INCLASS \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDashCode_Source_BountyDash_Obstacle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_INCLASS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_Obstacle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDashCode_Source_BountyDash_Obstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
