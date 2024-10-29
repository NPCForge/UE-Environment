// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "eip/eipGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeipGameMode() {}

// Begin Cross Module References
EIP_API UClass* Z_Construct_UClass_AeipGameMode();
EIP_API UClass* Z_Construct_UClass_AeipGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_eip();
// End Cross Module References

// Begin Class AeipGameMode
void AeipGameMode::StaticRegisterNativesAeipGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AeipGameMode);
UClass* Z_Construct_UClass_AeipGameMode_NoRegister()
{
	return AeipGameMode::StaticClass();
}
struct Z_Construct_UClass_AeipGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "eipGameMode.h" },
		{ "ModuleRelativePath", "eipGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AeipGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AeipGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_eip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AeipGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AeipGameMode_Statics::ClassParams = {
	&AeipGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AeipGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AeipGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AeipGameMode()
{
	if (!Z_Registration_Info_UClass_AeipGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AeipGameMode.OuterSingleton, Z_Construct_UClass_AeipGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AeipGameMode.OuterSingleton;
}
template<> EIP_API UClass* StaticClass<AeipGameMode>()
{
	return AeipGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AeipGameMode);
AeipGameMode::~AeipGameMode() {}
// End Class AeipGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ashef_UE_environment_workspace_Source_eip_eipGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AeipGameMode, AeipGameMode::StaticClass, TEXT("AeipGameMode"), &Z_Registration_Info_UClass_AeipGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AeipGameMode), 2076485077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ashef_UE_environment_workspace_Source_eip_eipGameMode_h_3091937689(TEXT("/Script/eip"),
	Z_CompiledInDeferFile_FID_Ashef_UE_environment_workspace_Source_eip_eipGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ashef_UE_environment_workspace_Source_eip_eipGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
