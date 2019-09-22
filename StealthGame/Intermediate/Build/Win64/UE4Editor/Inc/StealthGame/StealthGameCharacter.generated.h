// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTHGAME_StealthGameCharacter_generated_h
#error "StealthGameCharacter.generated.h already included, missing '#pragma once' in StealthGameCharacter.h"
#endif
#define STEALTHGAME_StealthGameCharacter_generated_h

#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_RPC_WRAPPERS
#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthGameCharacter(); \
	friend struct Z_Construct_UClass_AStealthGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameCharacter)


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAStealthGameCharacter(); \
	friend struct Z_Construct_UClass_AStealthGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameCharacter)


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameCharacter(AStealthGameCharacter&&); \
	NO_API AStealthGameCharacter(const AStealthGameCharacter&); \
public:


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameCharacter(AStealthGameCharacter&&); \
	NO_API AStealthGameCharacter(const AStealthGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthGameCharacter)


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AStealthGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AStealthGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AStealthGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AStealthGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AStealthGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AStealthGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AStealthGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AStealthGameCharacter, L_MotionController); }


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_11_PROLOG
#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_INCLASS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AStealthGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_StealthGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
