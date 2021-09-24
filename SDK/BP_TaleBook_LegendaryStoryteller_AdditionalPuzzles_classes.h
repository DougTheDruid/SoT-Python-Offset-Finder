#pragma once

// Name: SoT, Version: 2.3.0-Galleon


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleBook_LegendaryStoryteller_AdditionalPuzzles.BP_TaleBook_LegendaryStoryteller_AdditionalPuzzles_C
// 0x0030 (FullSize[0x0728] - InheritedSize[0x06F8])
class ABP_TaleBook_LegendaryStoryteller_AdditionalPuzzles_C : public AVoyageProposalContainer
{
public:
	class UChildActorComponent*                        TaleSelectionSlot_6;                                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TaleSelectionSlot_5;                                       // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TaleSelectionSlot_4;                                       // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TaleSelectionSlot_3;                                       // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TaleSelectionSlot_2;                                       // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TaleSelectionSlot_1;                                       // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TaleBook_LegendaryStoryteller_AdditionalPuzzles.BP_TaleBook_LegendaryStoryteller_AdditionalPuzzles_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
