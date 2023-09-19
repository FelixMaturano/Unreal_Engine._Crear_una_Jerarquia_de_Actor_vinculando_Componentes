// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Jerarquia/JerarquiaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJerarquiaGameMode() {}
// Cross Module References
	JERARQUIA_API UClass* Z_Construct_UClass_AJerarquiaGameMode_NoRegister();
	JERARQUIA_API UClass* Z_Construct_UClass_AJerarquiaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Jerarquia();
// End Cross Module References
	void AJerarquiaGameMode::StaticRegisterNativesAJerarquiaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJerarquiaGameMode_NoRegister()
	{
		return AJerarquiaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJerarquiaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJerarquiaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Jerarquia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJerarquiaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JerarquiaGameMode.h" },
		{ "ModuleRelativePath", "JerarquiaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJerarquiaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJerarquiaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJerarquiaGameMode_Statics::ClassParams = {
		&AJerarquiaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJerarquiaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJerarquiaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJerarquiaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJerarquiaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJerarquiaGameMode, 2942908999);
	template<> JERARQUIA_API UClass* StaticClass<AJerarquiaGameMode>()
	{
		return AJerarquiaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJerarquiaGameMode(Z_Construct_UClass_AJerarquiaGameMode, &AJerarquiaGameMode::StaticClass, TEXT("/Script/Jerarquia"), TEXT("AJerarquiaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJerarquiaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
