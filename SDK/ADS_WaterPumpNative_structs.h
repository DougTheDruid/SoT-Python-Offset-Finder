#pragma once

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

// AnimDataEntryStruct ADS_WaterPumpNative.ADS_WaterPumpNative
// 0x0028
struct FADS_WaterPumpNative
{
	struct FAthenaAnimationWaterPumpAnimData           WaterPump_5_C3B3D3934CED931AA0DDF4BFE901E9B0;              // 0x0000(0x0028) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
