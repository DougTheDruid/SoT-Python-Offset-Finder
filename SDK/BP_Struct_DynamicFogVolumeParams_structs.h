#pragma once

// Name: SoT, Version: 2.4.0


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

// UserDefinedStruct BP_Struct_DynamicFogVolumeParams.BP_Struct_DynamicFogVolumeParams
// 0x0010
struct FBP_Struct_DynamicFogVolumeParams
{
	float                                              Density_2_B776FAD3474D1E94F4881FB695B96C5A;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HeightFogFalloff_5_2B91C6884A25D5D133090D95A3362F12;       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InscatteringIntensity_10_FC5AAD7A47AAC53DAEE2558922F9F346; // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InScatteringPower_11_A9716E7C44FCD81C01BD79A85607B478;     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
