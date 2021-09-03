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

// BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C
// 0x05F0 (FullSize[0x0708] - InheritedSize[0x0118])
class UBP_Prompt_CTPurchaseVoyageSequence_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TriggerVolumeRadius;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                InsideGoldHoardersRadius;                                  // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AOverlapTriggerActor*>                GoldHoarderOverlapActors;                                  // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AOverlapTriggerActor*>                OutpostOverlapActors;                                      // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              OutpostRadiusReduction;                                    // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZK2A[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                Prompt_GoToVendors;                                        // 0x0150(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToGoldhoarders;                                   // 0x01B8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToOrderOfSouls;                                   // 0x0220(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToMerchantAlliance;                               // 0x0288(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ProposeVoyage;                                      // 0x02F0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VoteOnVoyage;                                       // 0x0358(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_BoardShip;                                          // 0x03C0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OfferPurchased;                                     // 0x0428(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageProposalDiscarded;                            // 0x0470(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageProposed;                                     // 0x04B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageBegun;                                        // 0x0500(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageComplete;                                     // 0x0548(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerEnteredShip;                                  // 0x0590(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerExitedShip;                                   // 0x05D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerWithdrewVoyage;                               // 0x0620(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageCancelled;                                    // 0x0668(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_InsideOutpostRadius;                                 // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_InsideGoldhoardersRadius;                            // 0x06B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_InsideOrderOfSouls;                                  // 0x06B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_InsideMerchantAllianceRadius;                        // 0x06B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_OnShip;                                              // 0x06B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_IsHidden;                                            // 0x06B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_IsTutorialForceDisabled;                             // 0x06B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VQIY[0x1];                                     // 0x06B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_CT_TutorialProgress_C*                   CompanyTutorialProgress;                                   // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FObjectMessagingHandle                      Handle_CompanyRankPurchased;                               // 0x06C0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C");
		return ptr;
	}



	void ShowAppropriateMerchantPrompt();
	void SetIsHidden(bool NewHidden);
	void PlayerLeftGoldhoarderRadiusFunc(class AActor* Actor);
	void PlayerEnteredGoldhoarderRadiusFunc(class AActor* Actor);
	void PlayerLeftOutpostRadiusFunc(class AActor* Actor);
	void PlayerEnteredOutpostRadiusFunc(class AActor* Actor);
	void OnCompanyRankPurchasedFunc(const struct FEventCompanyRankProgressUpdateNotification& InputPin);
	void OnPlayerWithdrewVoyageFunc(const struct FEventPlayerWithdrewVoyage& EventPlayerWithdrewVoyage);
	void OnVoyageDiscardFromInventoryFunc(const struct FVoyageProposalDiscardEvent& VoyageProposalDiscardEvent);
	void OnPlayerProposedVoyageFunc(const struct FVoyageProposalSelectedEvent& VoyageProposalSelectedEvent);
	void OnOfferPurchasedFunc(const struct FOfferPurchasedEvent& OfferPurchasedEvent);
	void OnPlayerCancelledVoyageFunc(const struct FVoyageCancelled& VoyageCancelled);
	void OnPlayerExitedShipFunc();
	void OnSomethingEnteredShipFunc(const struct FEventEnteredShip& EventEnteredShip);
	void OnVoyageCompletedFunc(const struct FVoyageComplete& VoyageComplete);
	void OnVoyageBegunFunc(const struct FVoyageBegun& VoyageBegun);
	void IsNearAnyShopkeeper(bool* Result);
	void AreTutorialsForceDisabled(bool* Result);
	void IsCurrentlyControlledCharacter(class AActor* Actor, bool* Result);
	void ShouldShowMerchantAllianceCompanyPrompts(bool* Result);
	void ShouldShowOrderOfSoulsCompanyPrompts(bool* Result);
	void ClearAllOutpostOverlapActors();
	void ShouldShowGoldHoarderCompanyPrompts(bool* Result);
	void ClearAllGoldHoarderOverlapActors();
	void SetGoldHoardersLocations(TArray<struct FVector>* GoldHoarderLocations);
	void Evaluate();
	void Complete();
	void SetOutposts(TArray<struct FName>* OutpostNames);
	void UninitializeImplementable();
	void PostInitialize();
	void SetOrderOfSoulsLocations(TArray<struct FVector>* Order_of_Souls_Locations);
	void SetMerchantAllianceLocations(TArray<struct FVector>* Merchant_Alliance_Locations);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterOtherEvents_Implementable();
	void RegisterOtherEvents_Implementable();
	void ForceDisableTutorials();
	void Unregister_HUD_Events();
	void OnOfferPurchased(const struct FOfferPurchasedEvent& Event);
	void OnPlayerProposedVoyage(const struct FVoyageProposalSelectedEvent& Event);
	void OnVoyageDiscardFromInventory(const struct FVoyageProposalDiscardEvent& Event);
	void OnVoyageBegun(const struct FVoyageBegun& Event);
	void OnVoyageCompleted(const struct FVoyageComplete& Event);
	void OnSomethingEnteredShip(const struct FEventEnteredShip& Event);
	void OnPlayerExitedShip(const struct FEventExitedShip& Event);
	void PlayerLeftOutpostRadius(class AActor* ActorInZone);
	void PlayerEnteredOutpostRadius(class AActor* ActorInZone);
	void PlayerLeftGoldhoarderRadius(class AActor* ActorInZone);
	void PlayerEnteredGoldhoarderRadius(class AActor* ActorInZone);
	void OnPlayerWithdrewVoyage(const struct FEventPlayerWithdrewVoyage& Event);
	void OnPlayerCancelledVoyage(const struct FVoyageCancelled& Event);
	void OnCompanyRankPurchased(const struct FEventCompanyRankProgressUpdateNotification& Event);
	void OnEndPlay_HUD(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
