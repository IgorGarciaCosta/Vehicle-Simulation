// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSim/VehicleSimGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleSimGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VehicleSim();
	VEHICLESIM_API UClass* Z_Construct_UClass_AVehicleSimGameModeBase();
	VEHICLESIM_API UClass* Z_Construct_UClass_AVehicleSimGameModeBase_NoRegister();
// End Cross Module References
	void AVehicleSimGameModeBase::StaticRegisterNativesAVehicleSimGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicleSimGameModeBase);
	UClass* Z_Construct_UClass_AVehicleSimGameModeBase_NoRegister()
	{
		return AVehicleSimGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleSimGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleSimGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSimGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VehicleSimGameModeBase.h" },
		{ "ModuleRelativePath", "VehicleSimGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleSimGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleSimGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicleSimGameModeBase_Statics::ClassParams = {
		&AVehicleSimGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleSimGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSimGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleSimGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVehicleSimGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicleSimGameModeBase.OuterSingleton, Z_Construct_UClass_AVehicleSimGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVehicleSimGameModeBase.OuterSingleton;
	}
	template<> VEHICLESIM_API UClass* StaticClass<AVehicleSimGameModeBase>()
	{
		return AVehicleSimGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleSimGameModeBase);
	AVehicleSimGameModeBase::~AVehicleSimGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_VehicleSim_Source_VehicleSim_VehicleSimGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_VehicleSim_Source_VehicleSim_VehicleSimGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVehicleSimGameModeBase, AVehicleSimGameModeBase::StaticClass, TEXT("AVehicleSimGameModeBase"), &Z_Registration_Info_UClass_AVehicleSimGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicleSimGameModeBase), 4204371618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_VehicleSim_Source_VehicleSim_VehicleSimGameModeBase_h_2021605805(TEXT("/Script/VehicleSim"),
		Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_VehicleSim_Source_VehicleSim_VehicleSimGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_VehicleSim_Source_VehicleSim_VehicleSimGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
