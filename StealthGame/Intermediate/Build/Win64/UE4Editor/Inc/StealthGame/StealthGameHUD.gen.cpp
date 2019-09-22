// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/StealthGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthGameHUD() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_AStealthGameHUD_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_AStealthGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
// End Cross Module References
	void AStealthGameHUD::StaticRegisterNativesAStealthGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AStealthGameHUD_NoRegister()
	{
		return AStealthGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AStealthGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "StealthGameHUD.h" },
		{ "ModuleRelativePath", "StealthGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthGameHUD_Statics::ClassParams = {
		&AStealthGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStealthGameHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStealthGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthGameHUD, 3263367958);
	template<> STEALTHGAME_API UClass* StaticClass<AStealthGameHUD>()
	{
		return AStealthGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthGameHUD(Z_Construct_UClass_AStealthGameHUD, &AStealthGameHUD::StaticClass, TEXT("/Script/StealthGame"), TEXT("AStealthGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
