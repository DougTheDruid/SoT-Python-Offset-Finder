#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0004
struct FMaterialQualityOverrides
{
	bool                                               bEnableOverride;                                           // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               bForceFullyRough;                                          // 0x0001(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               bForceNonMetal;                                            // 0x0002(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               bForceDisableLMDirectionality;                             // 0x0003(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
// 0x0020
struct FShaderQualityOverridesListItem
{
	struct FString                                     RangeName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class UBoolProperty*                               QualityProperty;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShaderPlatformQualitySettings*              SettingContainer;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
