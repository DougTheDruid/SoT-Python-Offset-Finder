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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C
// 0x0150 (FullSize[0x0780] - InheritedSize[0x0630])
class UBP_Anim_FlintlockPistol_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA28F382499BAD2D62FC829468574B03;       // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F39798534963A2FAA39D00965995ABD4;       // 0x0680(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_10C67A1147FD9A4753E31CA816D0F579; // 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState_EObjectAnimationState> ObjectAnimationState;                                      // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bReloadWanted;                                             // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1S5N[0x6];                                     // 0x0732(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      ReloadEventHandle;                                         // 0x0738(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C");
		return ptr;
	}



	void AnimNotify_ExitedFire();
	void OnOneShotUseTriggered(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void BlueprintInitializeAnimation();
	void ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event);
	void BlueprintUninitializeAnimation();
	void AnimNotify_ResetReload();
	void ExecuteUbergraph_BP_Anim_FlintlockPistol(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
