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

// BlueprintGeneratedClass BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C
// 0x0250 (FullSize[0x0368] - InheritedSize[0x0118])
class UBP_PromptCoordinator_BootyStorage_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ShowMermaidPrompt;                                         // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasUsedStatue;                                             // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasRetrievedLoot;                                          // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowLootPrompt;                                            // 0x0123(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D90A[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                MermaidPrompt;                                             // 0x0128(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                LootPrompt;                                                // 0x0190(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CrewStorageChangedHandle;                                  // 0x01F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CrewStorageFullHandle;                                     // 0x0240(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ItemsRetrievedHandle;                                      // 0x0288(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      RetrieveActorHandle;                                       // 0x02D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      WieldedEventHandle;                                        // 0x0318(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LootStatuePromptDuration;                                  // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LootMermaidPromptDuration;                                 // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C");
		return ptr;
	}



	void IsInSunkenKingdom(bool* InSunkenKingdom);
	void Reset();
	void OnCrewStorageUpdateFunc(const struct FEventOnCrewStorageUpdate& Event);
	void OnCrewStorageFullFunc(const struct FEventOnCrewStorageFull& Event);
	void OnWieldedFunc(const struct FEventObjectWielded& Object);
	void PostInitialize();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Uninitialize_Implementable();
	void OnWielded(const struct FEventObjectWielded& Object);
	void OnCrewStorageChange_Event(const struct FEventOnCrewStorageFull& Event);
	void OnCrewStorageFull_Event(const struct FEventOnCrewStorageUpdate& Event);
	void OnItemsRetrieved_Event(const struct FEventItemsRetrieved& Event);
	void CustomEvent_1(const struct FRetrieveBootyActorSpawnedEvent& Event);
	void ExecuteUbergraph_BP_PromptCoordinator_BootyStorage(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
