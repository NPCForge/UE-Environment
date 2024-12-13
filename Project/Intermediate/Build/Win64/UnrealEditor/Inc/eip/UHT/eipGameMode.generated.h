// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "eipGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EIP_eipGameMode_generated_h
#error "eipGameMode.generated.h already included, missing '#pragma once' in eipGameMode.h"
#endif
#define EIP_eipGameMode_generated_h

#define FID_Project_Source_eip_eipGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAeipGameMode(); \
	friend struct Z_Construct_UClass_AeipGameMode_Statics; \
public: \
	DECLARE_CLASS(AeipGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/eip"), EIP_API) \
	DECLARE_SERIALIZER(AeipGameMode)


#define FID_Project_Source_eip_eipGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AeipGameMode(AeipGameMode&&); \
	AeipGameMode(const AeipGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EIP_API, AeipGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AeipGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AeipGameMode) \
	EIP_API virtual ~AeipGameMode();


#define FID_Project_Source_eip_eipGameMode_h_9_PROLOG
#define FID_Project_Source_eip_eipGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Source_eip_eipGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Project_Source_eip_eipGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EIP_API UClass* StaticClass<class AeipGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Source_eip_eipGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
