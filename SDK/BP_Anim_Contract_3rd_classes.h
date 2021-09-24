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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C
// 0x0101 (FullSize[0x0731] - InheritedSize[0x0630])
class UBP_Anim_Contract_3rd_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_36198F564211C9DF22D9E3BA855A0136;       // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_47D4FF824E791C777B72BBA3A330516D;       // 0x0680(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CF1859694B295D3418EFB18A5F3FF981; // 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState_EObjectAnimationState> ObjectAnimationState;                                      // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C");
		return ptr;
	}



	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_Contract_3rd(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
