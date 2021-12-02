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

// BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C
// 0x01E8 (FullSize[0x0300] - InheritedSize[0x0118])
class UBP_Prompt_CosmeticPurchased_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_OfferPurchasedEvent;                                // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_ShopClosedEvent;                                    // 0x0168(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerEntitlementUpdatedEvent;                      // 0x01B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_CosmeticPurchased;                                  // 0x01F8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitCustomizationChest;                            // 0x0260(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AccessKey;                                                 // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              CategoryTypes;                                             // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PurchasedEntitlementIds;                                   // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayUntilPromptDisplays;                                  // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DelayBetweenPrompts;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PromptDisplayDuration;                                     // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CosmeticPurchased;                                         // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PromptInfoSet;                                             // 0x02FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisplayingPrompts;                                         // 0x02FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ProcessingPurchase;                                        // 0x02FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C");
		return ptr;
	}



	void OnPlayerEntitlementUpdated();
	void SetCosmeticPromptInfo(class UClass* AccessKey, TArray<class UClass*>* CategoryType, const struct FPrioritisedPromptWithHandle& PromptCosmeticPurchased, const struct FPrioritisedPromptWithHandle& PromptVisitCustomizationChest);
	void OnOfferPurchased(const struct FAthena_FOfferPurchasedEvent& Event);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void OfferPurchasedEvent(const struct FAthena_FOfferPurchasedEvent& Event);
	void ShopClosedEvent(const struct FAthena_FShopClosedEvent& Event);
	void PostInitialize();
	void Unregister_HUD_Events();
	void OnEndPlay_HUD(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void PlayerEntitlementUpdated(const struct FPlayerEntitlementUpdatedEvent& Event);
	void ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
