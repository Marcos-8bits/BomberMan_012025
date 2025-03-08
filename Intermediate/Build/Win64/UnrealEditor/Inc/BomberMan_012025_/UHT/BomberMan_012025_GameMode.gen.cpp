// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025_/BomberMan_012025_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025_GameMode() {}

// Begin Cross Module References
BOMBERMAN_012025__API UClass* Z_Construct_UClass_ABomberMan_012025_GameMode();
BOMBERMAN_012025__API UClass* Z_Construct_UClass_ABomberMan_012025_GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025_();
// End Cross Module References

// Begin Class ABomberMan_012025_GameMode
void ABomberMan_012025_GameMode::StaticRegisterNativesABomberMan_012025_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025_GameMode);
UClass* Z_Construct_UClass_ABomberMan_012025_GameMode_NoRegister()
{
	return ABomberMan_012025_GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_012025_GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_012025_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberMan_012025_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025_GameMode_Statics::ClassParams = {
	&ABomberMan_012025_GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025_GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025_GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_012025_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025_GameMode.OuterSingleton;
}
template<> BOMBERMAN_012025__API UClass* StaticClass<ABomberMan_012025_GameMode>()
{
	return ABomberMan_012025_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025_GameMode);
ABomberMan_012025_GameMode::~ABomberMan_012025_GameMode() {}
// End Class ABomberMan_012025_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_BomberMan_012025__Source_BomberMan_012025__BomberMan_012025_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025_GameMode, ABomberMan_012025_GameMode::StaticClass, TEXT("ABomberMan_012025_GameMode"), &Z_Registration_Info_UClass_ABomberMan_012025_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025_GameMode), 3585996667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_BomberMan_012025__Source_BomberMan_012025__BomberMan_012025_GameMode_h_1650822339(TEXT("/Script/BomberMan_012025_"),
	Z_CompiledInDeferFile_FID_Proyectos_BomberMan_012025__Source_BomberMan_012025__BomberMan_012025_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_BomberMan_012025__Source_BomberMan_012025__BomberMan_012025_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
