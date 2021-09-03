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

// AnimDataEntryStruct ADS_CannonNative.ADS_CannonNative
// 0x0038
struct FADS_CannonNative
{
	struct FAthenaAnimationCannonAnimData              Cannon_27_F70E24474F5C470823E14AA7216D9971;                // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FAthenaAnimationCannonConcealedAnimData     Concealed_26_5962372442FD72E46575E2999B01951D;             // 0x0028(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
