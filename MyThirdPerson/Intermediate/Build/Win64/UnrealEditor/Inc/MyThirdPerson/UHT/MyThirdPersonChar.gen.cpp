// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThirdPerson/MyThirdPersonChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdPersonChar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonChar();
MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThirdPerson();
// End Cross Module References

// Begin Class AMyThirdPersonChar
void AMyThirdPersonChar::StaticRegisterNativesAMyThirdPersonChar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyThirdPersonChar);
UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister()
{
	return AMyThirdPersonChar::StaticClass();
}
struct Z_Construct_UClass_AMyThirdPersonChar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyThirdPersonChar.h" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyTPS_Cam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyTPS_Cam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc\xed\x8c\x94\xeb\xa1\x9c\xec\x9a\xb0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc\xed\x8c\x94\xeb\xa1\x9c\xec\x9a\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdPersonChar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyThirdPersonChar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams = {
	&AMyThirdPersonChar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyThirdPersonChar()
{
	if (!Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton, Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton;
}
template<> MYTHIRDPERSON_API UClass* StaticClass<AMyThirdPersonChar>()
{
	return AMyThirdPersonChar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyThirdPersonChar);
AMyThirdPersonChar::~AMyThirdPersonChar() {}
// End Class AMyThirdPersonChar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyThirdPersonChar, AMyThirdPersonChar::StaticClass, TEXT("AMyThirdPersonChar"), &Z_Registration_Info_UClass_AMyThirdPersonChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyThirdPersonChar), 4269373716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_2719150583(TEXT("/Script/MyThirdPerson"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_School_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
