// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STEALTHGAME_StealthGameProjectile_generated_h
#error "StealthGameProjectile.generated.h already included, missing '#pragma once' in StealthGameProjectile.h"
#endif
#define STEALTHGAME_StealthGameProjectile_generated_h

#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthGameProjectile(); \
	friend struct Z_Construct_UClass_AStealthGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AStealthGameProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStealthGameProjectile(); \
	friend struct Z_Construct_UClass_AStealthGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AStealthGameProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameProjectile(AStealthGameProjectile&&); \
	NO_API AStealthGameProjectile(const AStealthGameProjectile&); \
public:


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameProjectile(AStealthGameProjectile&&); \
	NO_API AStealthGameProjectile(const AStealthGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthGameProjectile)


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AStealthGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AStealthGameProjectile, ProjectileMovement); }


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_9_PROLOG
#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_INCLASS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AStealthGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_StealthGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
