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

// UserDefinedStruct BP_LineUp_AnimSequences.BP_LineUp_AnimSequences
// 0x0040
struct FBP_LineUp_AnimSequences
{
	class UAnimSequence*                               Idle_20_D6E79A8941796EB29DEB6D8F72BDBE18;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               IntoHighlight_25_9F89CE1547E363203FDA03AE8E890EFB;         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               Highlight_26_4A9C91434CA251FF43480E9BEE08E1AA;             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               OutOfHighlight_27_6DC51007467FDD2221BED1B4FB14050D;        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               Select_28_81E03000493A6D31134D1D899E4E579E;                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               ShipSelect_34_6872D3C44673A46E3A6D4CABEB8428EC;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UAnimSequence*>                       ShipSelectVariant_38_C117BE144E05632F8425A6B5096AD001;     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
