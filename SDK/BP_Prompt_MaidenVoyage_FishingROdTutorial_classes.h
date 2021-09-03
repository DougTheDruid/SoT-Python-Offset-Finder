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

// BlueprintGeneratedClass BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C
// 0x0510 (FullSize[0x0628] - InheritedSize[0x0118])
class UBP_Prompt_MaidenVoyage_FishingRodTutorial_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_RodWielded;                                          // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_FishBattling;                                        // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_CastRod;                                             // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_CaughtFish;                                          // 0x0123(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_DockWithCannon;                                      // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_BattleFish;                                          // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_FishTired;                                           // 0x0126(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_ReelingWhileBattling;                                // 0x0127(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FPrioritisedPromptWithHandle                Prompt_CastRod;                                            // 0x0128(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_WaitForBite;                                        // 0x0190(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_BattleFish;                                         // 0x01F8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ReelFish;                                           // 0x0260(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_WieldRod;                                           // 0x02C8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_CastRod;                                            // 0x0310(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_FishBite;                                           // 0x0358(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_FishCaught;                                         // 0x03A0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_BattleFish;                                         // 0x03E8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RequiredInput;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      WieldedItemType;                                           // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Sword_WieldedItemType;                                     // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FPrioritisedPromptWithHandle                Prompt_SnapLine;                                           // 0x0448(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_ReelingWhileBattling;                               // 0x04B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_StowRod;                                            // 0x04F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FishStartedBattling;                                       // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6VQ5[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_FishEscaped;                                        // 0x0548(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_Completed;                                           // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T9EU[0x7];                                     // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_PlayerDeath;                                        // 0x0598(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_DockToObject;                                       // 0x05E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C");
		return ptr;
	}



	void FullStateReset();
	void OnFishEscapingFunc();
	void OnBattleWhilstReelingFunc(const struct FEventFishingReelingWhileBattlingStateChange& EventFishingReelingWhileBattlingStateChange);
	void OnFishCaughtFunc();
	void OnFishTiredFunc();
	void OnFishBiteFunc();
	void OnCastRodFunc(const struct FEventSetFishingAnimationState& EventSetFishingAnimationState);
	void OnStowFunc(const struct FEventStartStow& EventStartStow);
	void OnWieldFunc(const struct FEventObjectWielded& EventObjectWielded);
	void ResetPromptState();
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void PostInitialize();
	void UnregisterOtherEvents_Implementable();
	void OnWield(const struct FEventObjectWielded& Event);
	void OnFishTired(const struct FEventFishingFishBecameTired& Event);
	void OnCastRod(const struct FEventSetFishingAnimationState& Event);
	void OnFishCaught(const struct FEventFishingFishCaught& Event);
	void OnFishBite(const struct FEventFishingFishStartedBattling& Event);
	void OnBattleWhilstReeling(const struct FEventFishingReelingWhileBattlingStateChange& Event);
	void OnStow(const struct FEventStartStow& Event);
	void OnFishEscaping(const struct FEventFishingFishEscaping& Event);
	void OnTakeControl(const struct FEventPlayerTakenControlOfControllable& NewParam);
	void ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
