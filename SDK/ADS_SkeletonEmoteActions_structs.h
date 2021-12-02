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

// AnimDataEntryStruct ADS_SkeletonEmoteActions.ADS_SkeletonEmoteActions
// 0x0010
struct FADS_SkeletonEmoteActions
{
	TArray<struct FAthenaAnimationSkeletonEmoteActionAnimations> SkeletonEmoteActions_11_C3B3D3934CED931AA0DDF4BFE901E9B0;  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
