// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_BountyDashGameMode_generated_h
#error "BountyDashGameMode.generated.h already included, missing '#pragma once' in BountyDashGameMode.h"
#endif
#define BOUNTYDASH_BountyDashGameMode_generated_h

#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGamePaused) \
	{ \
		P_GET_UBOOL(Z_Param_gamePaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamePaused(Z_Param_gamePaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GameOver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGameOver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGameLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGameSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInvGameSpeed(); \
		P_NATIVE_END; \
	}


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGamePaused) \
	{ \
		P_GET_UBOOL(Z_Param_gamePaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamePaused(Z_Param_gamePaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GameOver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGameOver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGameLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGameSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInvGameSpeed(); \
		P_NATIVE_END; \
	}


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashGameMode(); \
	friend struct Z_Construct_UClass_ABountyDashGameMode_Statics; \
public: \
	DECLARE_CLASS(ABountyDashGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashGameMode)


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashGameMode(); \
	friend struct Z_Construct_UClass_ABountyDashGameMode_Statics; \
public: \
	DECLARE_CLASS(ABountyDashGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashGameMode)


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashGameMode(ABountyDashGameMode&&); \
	NO_API ABountyDashGameMode(const ABountyDashGameMode&); \
public:


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashGameMode(ABountyDashGameMode&&); \
	NO_API ABountyDashGameMode(const ABountyDashGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashGameMode)


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__numCoinsForSpeedIncrease() { return STRUCT_OFFSET(ABountyDashGameMode, numCoinsForSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO__gameSpeedIncrease() { return STRUCT_OFFSET(ABountyDashGameMode, gameSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO__RunTime() { return STRUCT_OFFSET(ABountyDashGameMode, RunTime); } \
	FORCEINLINE static uint32 __PPO__bGameOver() { return STRUCT_OFFSET(ABountyDashGameMode, bGameOver); } \
	FORCEINLINE static uint32 __PPO__startGameOverCount() { return STRUCT_OFFSET(ABountyDashGameMode, startGameOverCount); } \
	FORCEINLINE static uint32 __PPO__timeTillGameOver() { return STRUCT_OFFSET(ABountyDashGameMode, timeTillGameOver); } \
	FORCEINLINE static uint32 __PPO__gameOverTimer() { return STRUCT_OFFSET(ABountyDashGameMode, gameOverTimer); }


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_12_PROLOG
#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_INCLASS \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_INCLASS_NO_PURE_DECLS \
	BountyDashCode_Source_BountyDash_BountyDashGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDashCode_Source_BountyDash_BountyDashGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
