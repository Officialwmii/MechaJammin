// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MECHAJAM_MechaJamProjectile_generated_h
#error "MechaJamProjectile.generated.h already included, missing '#pragma once' in MechaJamProjectile.h"
#endif
#define MECHAJAM_MechaJamProjectile_generated_h

#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_SPARSE_DATA
#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechaJamProjectile(); \
	friend struct Z_Construct_UClass_AMechaJamProjectile_Statics; \
public: \
	DECLARE_CLASS(AMechaJamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechaJam"), NO_API) \
	DECLARE_SERIALIZER(AMechaJamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMechaJamProjectile(); \
	friend struct Z_Construct_UClass_AMechaJamProjectile_Statics; \
public: \
	DECLARE_CLASS(AMechaJamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechaJam"), NO_API) \
	DECLARE_SERIALIZER(AMechaJamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechaJamProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechaJamProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaJamProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaJamProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaJamProjectile(AMechaJamProjectile&&); \
	NO_API AMechaJamProjectile(const AMechaJamProjectile&); \
public:


#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaJamProjectile(AMechaJamProjectile&&); \
	NO_API AMechaJamProjectile(const AMechaJamProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaJamProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaJamProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechaJamProjectile)


#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_12_PROLOG
#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_SPARSE_DATA \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_RPC_WRAPPERS \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_INCLASS \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_SPARSE_DATA \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MechaJam_Source_MechaJam_MechaJamProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHAJAM_API UClass* StaticClass<class AMechaJamProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MechaJam_Source_MechaJam_MechaJamProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
