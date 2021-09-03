﻿#pragma once

// Name: SoT, Version: 2.2.1.1


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

// ScriptStruct LightPropagationVolumeRuntime.LightPropagationVolumeSettings
// 0x0070
struct FLightPropagationVolumeSettings
{
	unsigned char                                      bOverride_LPVIntensity : 1;                                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;            // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                 // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSize : 1;                                     // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                 // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                       // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                         // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_LHWN[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LPVIntensity;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVVplInjectionBias;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVSize;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSecondaryOcclusionIntensity;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSecondaryBounceIntensity;                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVGeometryVolumeBias;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVEmissiveInjectionIntensity;                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVDirectionalOcclusionIntensity;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVDirectionalOcclusionRadius;                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVDiffuseOcclusionExponent;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVSpecularOcclusionExponent;                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              LPVDiffuseOcclusionIntensity;                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LPVSpecularOcclusionIntensity;                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TBJF[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LPVWorldRef;                                               // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
