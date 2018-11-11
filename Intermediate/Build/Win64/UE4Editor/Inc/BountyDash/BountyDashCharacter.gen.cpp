// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/BountyDashCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDashCharacter() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashCharacter_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashCharacter_Reset();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashCharacter_StopMagnet();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashCharacter_StopSmash();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
// End Cross Module References
	void ABountyDashCharacter::StaticRegisterNativesABountyDashCharacter()
	{
		UClass* Class = ABountyDashCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyOnComponentEndOverlap", &ABountyDashCharacter::execMyOnComponentEndOverlap },
			{ "MyOnComponentOverlap", &ABountyDashCharacter::execMyOnComponentOverlap },
			{ "Reset", &ABountyDashCharacter::execReset },
			{ "StopMagnet", &ABountyDashCharacter::execStopMagnet },
			{ "StopSmash", &ABountyDashCharacter::execStopSmash },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics
	{
		struct BountyDashCharacter_eventMyOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentEndOverlap_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashCharacter, "MyOnComponentEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(BountyDashCharacter_eventMyOnComponentEndOverlap_Parms), Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics
	{
		struct BountyDashCharacter_eventMyOnComponentOverlap_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BountyDashCharacter_eventMyOnComponentOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BountyDashCharacter_eventMyOnComponentOverlap_Parms), &Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BountyDashCharacter_eventMyOnComponentOverlap_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "??????\xc6\xae ?\xdd\xb8??? \xc4\xb8???? ?????\xc7\xb4? ?????? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashCharacter, "MyOnComponentOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(BountyDashCharacter_eventMyOnComponentOverlap_Parms), Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashCharacter_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashCharacter_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashCharacter, "Reset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_Reset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashCharacter_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashCharacter_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashCharacter_StopMagnet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_StopMagnet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashCharacter_StopMagnet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashCharacter, "StopMagnet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_StopMagnet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_StopMagnet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashCharacter_StopMagnet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashCharacter_StopMagnet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashCharacter_StopSmash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashCharacter_StopSmash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashCharacter_StopSmash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashCharacter, "StopSmash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashCharacter_StopSmash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashCharacter_StopSmash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashCharacter_StopSmash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashCharacter_StopSmash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABountyDashCharacter_NoRegister()
	{
		return ABountyDashCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDashCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagnetReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagnetReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagnetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagnetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmashTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmashTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitObstacleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitObstacleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDashCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABountyDashCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentEndOverlap, "MyOnComponentEndOverlap" }, // 4146620402
		{ &Z_Construct_UFunction_ABountyDashCharacter_MyOnComponentOverlap, "MyOnComponentOverlap" }, // 1683519905
		{ &Z_Construct_UFunction_ABountyDashCharacter_Reset, "Reset" }, // 1379910929
		{ &Z_Construct_UFunction_ABountyDashCharacter_StopMagnet, "StopMagnet" }, // 703493993
		{ &Z_Construct_UFunction_ABountyDashCharacter_StopSmash, "StopSmash" }, // 371539627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BountyDashCharacter.h" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetReach_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetReach = { UE4CodeGen_Private::EPropertyClass::Float, "MagnetReach", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, MagnetReach), METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetReach_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetTime_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "Magnet ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetTime = { UE4CodeGen_Private::EPropertyClass::Float, "MagnetTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, MagnetTime), METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_SmashTime_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "Smash ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_SmashTime = { UE4CodeGen_Private::EPropertyClass::Float, "SmashTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, SmashTime), METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_SmashTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_SmashTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "BountyDashCharacter" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe? ????" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Int, "Score", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, Score), METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_Score_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "\xc5\xb8?? ???? ?????? \xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe??? \xc4\xab?\xde\xb6????? ?\xc5\xb8??? ?????\xcf\xb1? ???? \xc4\xab?\xde\xb6? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_dingSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "???? \xc8\xb9?? ?????\xe5\xb8\xa6 ???? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_dingSound = { UE4CodeGen_Private::EPropertyClass::Object, "dingSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, dingSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_dingSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_dingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_hitObstacleSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "?\xe6\xb5\xb9 ?????\xe5\xb8\xa6 ???? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_hitObstacleSound = { UE4CodeGen_Private::EPropertyClass::Object, "hitObstacleSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, hitObstacleSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_hitObstacleSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_hitObstacleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CharSpeed_MetaData[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "\xc4\xb3???? ?? ?\xd9\xb2? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CharSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CharSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, CharSpeed), METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CharSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CharSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray_MetaData[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BountyDashCharacter.h" },
		{ "ToolTip", "?\xcc\xb5? ???? ?\xe8\xbf\xad" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray = { UE4CodeGen_Private::EPropertyClass::Array, "TargetArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABountyDashCharacter, TargetArray), METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TargetArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDashCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_MagnetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_SmashTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_dingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_hitObstacleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_CharSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashCharacter_Statics::NewProp_TargetArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDashCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDashCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDashCharacter_Statics::ClassParams = {
		&ABountyDashCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABountyDashCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDashCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABountyDashCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDashCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDashCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDashCharacter, 2769828000);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDashCharacter(Z_Construct_UClass_ABountyDashCharacter, &ABountyDashCharacter::StaticClass, TEXT("/Script/BountyDash"), TEXT("ABountyDashCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDashCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
