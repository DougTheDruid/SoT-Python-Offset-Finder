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

// AnimDataEntryStruct ADS_FrontendPiratePoses.ADS_FrontendPiratePoses
// 0x0010
struct FADS_FrontendPiratePoses
{
	TArray<struct FBP_LineUp_Animation>                Poses_3_564E3A8A40C5BF1FA007C298A241C6B6;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
