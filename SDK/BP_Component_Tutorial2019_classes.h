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

// BlueprintGeneratedClass BP_Component_Tutorial2019.BP_Component_Tutorial2019_C
// 0x00A0 (FullSize[0x0178] - InheritedSize[0x00D8])
class UBP_Component_Tutorial2019_C : public UTutorial2019ContextualDelegatingComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class AActor>>                    GoldHoarders;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             GoldHoarderLocations;                                      // 0x00F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	class UBP_Prompt_CTPurchaseVoyageSequence_C*       GoToVendorPromptObject;                                    // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<TAssetPtr<class AActor>>                    NPCBlacklist;                                              // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               OutpostNames;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GoldHoarderOnRepPrerequiste;                               // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DOQB[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_PlayerFinishedSpawning;                             // 0x0130(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Component_Tutorial2019.BP_Component_Tutorial2019_C");
		return ptr;
	}



	void SwapMysteriousStrangerToTutorialModeOnClient();
	void TeleportPlayerToOnboardingSpawnPoint();
	void GetPlayerController(class AAthenaPlayerController** Player_Controller);
	void ConvertActorIdsToActors(TArray<TAssetPtr<class AActor>>* ActorRefs, TArray<class AActor*>* OutActors);
	void Debug_SearchForMissingGoldHoarders();
	void PopulateGoldHoarderLocationsFromGoldHoarders();
	void EnsurePurchaseVoyageSequenceCreatedAndPopulated(TArray<struct FVector>* InputPin);
	void EnsurePurchaseVoyageSequenceObjectCreated(class UBP_Prompt_CTPurchaseVoyageSequence_C** PromptObject);
	void OnRep_GoldHoarderLocations();
	void TrySetUpCoordinator();
	void ReceiveTutorial2019BeginPlayOnClient();
	void ReceiveTutorial2019BeginPlayOnServer();
	void ForceDisableComponent_Blueprint();
	void Set_Prompts_Visibility(bool IsHidden, bool ReEvaluate, float Delay_In_Seconds);
	void ControllerOnEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Component_Tutorial2019(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
