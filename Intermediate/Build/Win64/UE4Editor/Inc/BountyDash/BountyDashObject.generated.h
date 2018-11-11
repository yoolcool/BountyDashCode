// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOUNTYDASH_BountyDashObject_generated_h
#error "BountyDashObject.generated.h already included, missing '#pragma once' in BountyDashObject.h"
#endif
#define BOUNTYDASH_BountyDashObject_generated_h

#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnActorEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnActorEndOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	} \
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


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnActorEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnActorEndOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	} \
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


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashObject(); \
	friend struct Z_Construct_UClass_ABountyDashObject_Statics; \
public: \
	DECLARE_CLASS(ABountyDashObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashObject)


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashObject(); \
	friend struct Z_Construct_UClass_ABountyDashObject_Statics; \
public: \
	DECLARE_CLASS(ABountyDashObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashObject)


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashObject(ABountyDashObject&&); \
	NO_API ABountyDashObject(const ABountyDashObject&); \
public:


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashObject(ABountyDashObject&&); \
	NO_API ABountyDashObject(const ABountyDashObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashObject)


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collider() { return STRUCT_OFFSET(ABountyDashObject, Collider); }


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_10_PROLOG
#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_RPC_WRAPPERS \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_INCLASS \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDashCode_Source_BountyDash_BountyDashObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_INCLASS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_BountyDashObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDashCode_Source_BountyDash_BountyDashObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
