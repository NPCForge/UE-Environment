// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "eipCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EIP_eipCharacter_generated_h
#error "eipCharacter.generated.h already included, missing '#pragma once' in eipCharacter.h"
#endif
#define EIP_eipCharacter_generated_h

#define FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAeipCharacter(); \
	friend struct Z_Construct_UClass_AeipCharacter_Statics; \
public: \
	DECLARE_CLASS(AeipCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/eip"), NO_API) \
	DECLARE_SERIALIZER(AeipCharacter)


#define FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AeipCharacter(AeipCharacter&&); \
	AeipCharacter(const AeipCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AeipCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AeipCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AeipCharacter) \
	NO_API virtual ~AeipCharacter();


#define FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h_18_PROLOG
#define FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EIP_API UClass* StaticClass<class AeipCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ashef_UE_environment_workspace_Source_eip_eipCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
