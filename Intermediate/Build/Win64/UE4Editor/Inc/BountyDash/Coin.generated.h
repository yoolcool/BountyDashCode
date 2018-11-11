// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOUNTYDASH_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define BOUNTYDASH_Coin_generated_h

#define BountyDashCode_Source_BountyDash_Coin_h_12_RPC_WRAPPERS \
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


#define BountyDashCode_Source_BountyDash_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define BountyDashCode_Source_BountyDash_Coin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, ABountyDashObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define BountyDashCode_Source_BountyDash_Coin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, ABountyDashObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define BountyDashCode_Source_BountyDash_Coin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public:


#define BountyDashCode_Source_BountyDash_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoin)


#define BountyDashCode_Source_BountyDash_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACoin, Mesh); }


#define BountyDashCode_Source_BountyDash_Coin_h_9_PROLOG
#define BountyDashCode_Source_BountyDash_Coin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_Coin_h_12_RPC_WRAPPERS \
	BountyDashCode_Source_BountyDash_Coin_h_12_INCLASS \
	BountyDashCode_Source_BountyDash_Coin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDashCode_Source_BountyDash_Coin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_Coin_h_12_INCLASS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDashCode_Source_BountyDash_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
