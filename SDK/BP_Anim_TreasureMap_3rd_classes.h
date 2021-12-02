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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C
// 0x0101 (FullSize[0x0731] - InheritedSize[0x0630])
class UBP_Anim_TreasureMap_3rd_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_24A0B2B647C712FB320275A8FD7B6C4C;       // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C226407B45B5F0794BEF42841DC3A4B8;       // 0x0680(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_740A23004F5FA11BC4270BB73771A4CA; // 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState_EObjectAnimationState> ObjectAnimationState;                                      // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C");
		return ptr;
	}



	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_TreasureMap_3rd(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
