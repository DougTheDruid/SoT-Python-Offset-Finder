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

// AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C
// 0x0111 (FullSize[0x0741] - InheritedSize[0x0630])
class UBP_Anim_Concertina_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1DEFFA064699D8E6099882A07E015CFC;       // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8FB8B3AD41DDBE46E9AA00B94F72B643;       // 0x0680(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FA004554F3D39839ABDF59B7BAB6781; // 0x06E0(0x0060)
	TEnumAsByte<EObjectAnimationState_EObjectAnimationState> ObjectAnimationState;                                      // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C");
		return ptr;
	}



	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
