// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/BountyDashGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDashGameMode() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashGameMode_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GameOver();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameOver();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_Tick();
// End Cross Module References
	void ABountyDashGameMode::StaticRegisterNativesABountyDashGameMode()
	{
		UClass* Class = ABountyDashGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameOver", &ABountyDashGameMode::execGameOver },
			{ "GetGameLevel", &ABountyDashGameMode::execGetGameLevel },
			{ "GetGameOver", &ABountyDashGameMode::execGetGameOver },
			{ "GetGameSpeed", &ABountyDashGameMode::execGetGameSpeed },
			{ "GetInvGameSpeed", &ABountyDashGameMode::execGetInvGameSpeed },
			{ "SetGamePaused", &ABountyDashGameMode::execSetGamePaused },
			{ "Tick", &ABountyDashGameMode::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GameOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics
	{
		struct BountyDashGameMode_eventGetGameLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventGetGameLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetGameLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetGameLevel_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics
	{
		struct BountyDashGameMode_eventGetGameOver_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BountyDashGameMode_eventGetGameOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BountyDashGameMode_eventGetGameOver_Parms), &Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetGameOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetGameOver_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics
	{
		struct BountyDashGameMode_eventGetGameSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventGetGameSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetGameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetGameSpeed_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics
	{
		struct BountyDashGameMode_eventGetInvGameSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventGetInvGameSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetInvGameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetInvGameSpeed_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics
	{
		struct BountyDashGameMode_eventSetGamePaused_Parms
		{
			bool gamePaused;
		};
		static void NewProp_gamePaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_gamePaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused_SetBit(void* Obj)
	{
		((BountyDashGameMode_eventSetGamePaused_Parms*)Obj)->gamePaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused = { UE4CodeGen_Private::EPropertyClass::Bool, "gamePaused", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BountyDashGameMode_eventSetGamePaused_Parms), &Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "SetGamePaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventSetGamePaused_Parms), Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics
	{
		struct BountyDashGameMode_eventTick_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "Tick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(BountyDashGameMode_eventTick_Parms), Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABountyDashGameMode_NoRegister()
	{
		return ABountyDashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameOverTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameOverTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeTillGameOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeTillGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startGameOverCount_MetaData[];
#endif
		static void NewProp_startGameOverCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startGameOverCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameOver_MetaData[];
#endif
		static void NewProp_bGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numCoinsForSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numCoinsForSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABountyDashGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABountyDashGameMode_GameOver, "GameOver" }, // 2082563313
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel, "GetGameLevel" }, // 214421551
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameOver, "GetGameOver" }, // 1148725674
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed, "GetGameSpeed" }, // 3080274666
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed, "GetInvGameSpeed" }, // 989465032
		{ &Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused, "SetGamePaused" }, // 3111764426
		{ &Z_Construct_UFunction_ABountyDashGameMode_Tick, "Tick" }, // 143531092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BountyDashGameMode.h" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer = { UE4CodeGen_Private::EPropertyClass::Float, "gameOverTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameOverTimer), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver = { UE4CodeGen_Private::EPropertyClass::Float, "timeTillGameOver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, timeTillGameOver), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	void Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_SetBit(void* Obj)
	{
		((ABountyDashGameMode*)Obj)->startGameOverCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount = { UE4CodeGen_Private::EPropertyClass::Bool, "startGameOverCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABountyDashGameMode), &Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	void Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_SetBit(void* Obj)
	{
		((ABountyDashGameMode*)Obj)->bGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver = { UE4CodeGen_Private::EPropertyClass::Bool, "bGameOver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABountyDashGameMode), &Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime = { UE4CodeGen_Private::EPropertyClass::Float, "RunTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, RunTime), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDashGameMode" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease = { UE4CodeGen_Private::EPropertyClass::Float, "gameSpeedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDashGameMode" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease = { UE4CodeGen_Private::EPropertyClass::Int, "numCoinsForSpeedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, numCoinsForSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData[] = {
		{ "Category", "gameplay" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel = { UE4CodeGen_Private::EPropertyClass::Int, "gameLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameLevel), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "gameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameSpeed), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDashGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDashGameMode_Statics::ClassParams = {
		&ABountyDashGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDashGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDashGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDashGameMode, 444828442);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDashGameMode(Z_Construct_UClass_ABountyDashGameMode, &ABountyDashGameMode::StaticClass, TEXT("/Script/BountyDash"), TEXT("ABountyDashGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDashGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
