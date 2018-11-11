// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOUNTYDASH_BountyDashPowerUp_generated_h
#error "BountyDashPowerUp.generated.h already included, missing '#pragma once' in BountyDashPowerUp.h"
#endif
#define BOUNTYDASH_BountyDashPowerUp_generated_h

#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnActorOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	}


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnActorOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	}


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashPowerUp(); \
	friend struct Z_Construct_UClass_ABountyDashPowerUp_Statics; \
public: \
	DECLARE_CLASS(ABountyDashPowerUp, ABountyDashObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashPowerUp)


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashPowerUp(); \
	friend struct Z_Construct_UClass_ABountyDashPowerUp_Statics; \
public: \
	DECLARE_CLASS(ABountyDashPowerUp, ABountyDashObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashPowerUp)


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashPowerUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashPowerUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashPowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashPowerUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashPowerUp(ABountyDashPowerUp&&); \
	NO_API ABountyDashPowerUp(const ABountyDashPowerUp&); \
public:


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashPowerUp(ABountyDashPowerUp&&); \
	NO_API ABountyDashPowerUp(const ABountyDashPowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashPowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashPowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashPowerUp)


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABountyDashPowerUp, Mesh); }


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_9_PROLOG
#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_RPC_WRAPPERS \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_INCLASS \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_INCLASS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_BountyDashPowerUp_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDashCode_Source_BountyDash_BountyDashPowerUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
