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
// Parameters
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorDespawned_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnStowedFunc_Params
{
	struct FEventObjectStowed                          Event;                                                     // 0x0000(0x0018)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorSpawned_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve
struct UBP_PromptCoordinator_BootyStorage_C_CrewHasLootToRetrieve_Params
{
	bool                                               HasTreasure;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
struct UBP_PromptCoordinator_BootyStorage_C_IsInSunkenKingdom_Params
{
	bool                                               InSunkenKingdom;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
struct UBP_PromptCoordinator_BootyStorage_C_Reset_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageUpdateFunc_Params
{
	struct FEventOnCrewStorageUpdate                   Event;                                                     // 0x0000(0x0014)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFullFunc_Params
{
	struct FEventOnCrewStorageFull                     Event;                                                     // 0x0000(0x0014)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnWieldedFunc_Params
{
	struct FAthena_FEventObjectWielded                 Object;                                                    // 0x0000(0x0010)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
struct UBP_PromptCoordinator_BootyStorage_C_PostInitialize_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
struct UBP_PromptCoordinator_BootyStorage_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_Uninitialize_Implementable_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete
struct UBP_PromptCoordinator_BootyStorage_C_SetPromptComplete_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt
struct UBP_PromptCoordinator_BootyStorage_C_ResetLootPrompt_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt
struct UBP_PromptCoordinator_BootyStorage_C_ResetMermaidPrompt_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed
struct UBP_PromptCoordinator_BootyStorage_C_OnStowed_Params
{
	struct FEventObjectStowed                          Event;                                                     // 0x0000(0x0018)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
struct UBP_PromptCoordinator_BootyStorage_C_OnWielded_Params
{
	struct FAthena_FEventObjectWielded                 Object;                                                    // 0x0000(0x0010)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageChange_Event_Params
{
	struct FEventOnCrewStorageFull                     Event;                                                     // 0x0000(0x0014)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFull_Event_Params
{
	struct FEventOnCrewStorageUpdate                   Event;                                                     // 0x0000(0x0014)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnItemsRetrieved_Event_Params
{
	struct FEventItemsRetrieved                        Event;                                                     // 0x0000(0x0014)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyActorDespawned_Event_Params
{
	struct FRetrieveBootyActorDespawnedEvent           Event;                                                     // 0x0000(0x0001)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnBootyActorSpawned_Event_Params
{
	struct FRetrieveBootyActorSpawnedEvent             Event;                                                     // 0x0000(0x0001)  (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
struct UBP_PromptCoordinator_BootyStorage_C_ExecuteUbergraph_BP_PromptCoordinator_BootyStorage_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
