// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/BountyDashPowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDashPowerUp() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashPowerUp_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashPowerUp();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashObject();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABountyDashPowerUp::StaticRegisterNativesABountyDashPowerUp()
	{
		UClass* Class = ABountyDashPowerUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyOnActorOverlap", &ABountyDashPowerUp::execMyOnActorOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics
	{
		struct BountyDashPowerUp_eventMyOnActorOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* otherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashPowerUp_eventMyOnActorOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BountyDashPowerUp_eventMyOnActorOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashPowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashPowerUp, "MyOnActorOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(BountyDashPowerUp_eventMyOnActorOverlap_Parms), Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABountyDashPowerUp_NoRegister()
	{
		return ABountyDashPowerUp::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDashPowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDashPowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABountyDashObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABountyDashPowerUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABountyDashPowerUp_MyOnActorOverlap, "MyOnActorOverlap" }, // 4210708756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashPowerUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BountyDashPowerUp.h" },
		{ "ModuleRelativePath", "BountyDashPowerUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashPowerUp_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BountyDashPowerUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BountyDashPowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashPowerUp_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABountyDashPowerUp, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABountyDashPowerUp_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashPowerUp_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDashPowerUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashPowerUp_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDashPowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDashPowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDashPowerUp_Statics::ClassParams = {
		&ABountyDashPowerUp::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABountyDashPowerUp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABountyDashPowerUp_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDashPowerUp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABountyDashPowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDashPowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDashPowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDashPowerUp, 2260479420);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDashPowerUp(Z_Construct_UClass_ABountyDashPowerUp, &ABountyDashPowerUp::StaticClass, TEXT("/Script/BountyDash"), TEXT("ABountyDashPowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDashPowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
