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

// UserDefinedStruct BP_AnimSequenceVariants.BP_AnimSequenceVariants
// 0x0010
struct FBP_AnimSequenceVariants
{
	TArray<class UAnimSequence*>                       AnimSequence_47_0C261F9545659CFDCCC15C9F19F605D0;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
