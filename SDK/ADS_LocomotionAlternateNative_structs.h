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

// AnimDataEntryStruct ADS_LocomotionAlternateNative.ADS_LocomotionAlternateNative
// 0x0140
struct FADS_LocomotionAlternateNative
{
	struct FAthenaAnimationLocomotionAlternateAnimData Drunk_48_A586B449410EBBDE851BBD991F7C6A63;                 // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FAthenaAnimationLocomotionAlternateAnimData Limp_49_5DAB2AC340B980B8EF92528FE62C5895;                  // 0x0050(0x0050) (Edit, BlueprintVisible)
	struct FAthenaAnimationLocomotionAlternateAnimData PegLeg_50_D8C2B28B4975F5BD98B483A8911DF23B;                // 0x00A0(0x0050) (Edit, BlueprintVisible)
	struct FAthenaAnimationLocomotionAlternateAnimData HotCoals_53_63626D244758D873648CF0ADFBDF3480;              // 0x00F0(0x0050) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
