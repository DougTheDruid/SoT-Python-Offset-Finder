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
// Parameters
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
struct UBP_PromptCoordinator_BootyStorage_C_IsInSunkenKingdom_Params
{
	bool                                               InSunkenKingdom;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
struct UBP_PromptCoordinator_BootyStorage_C_Reset_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageUpdateFunc_Params
{
	struct FEventOnCrewStorageUpdate                   Event;                                                     // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFullFunc_Params
{
	struct FEventOnCrewStorageFull                     Event;                                                     // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
struct UBP_PromptCoordinator_BootyStorage_C_OnWieldedFunc_Params
{
	struct FEventObjectWielded                         Object;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
struct UBP_PromptCoordinator_BootyStorage_C_PostInitialize_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
struct UBP_PromptCoordinator_BootyStorage_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
struct UBP_PromptCoordinator_BootyStorage_C_Uninitialize_Implementable_Params
{
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
struct UBP_PromptCoordinator_BootyStorage_C_OnWielded_Params
{
	struct FEventObjectWielded                         Object;                                                    // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageChange_Event_Params
{
	struct FEventOnCrewStorageFull                     Event;                                                     // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFull_Event_Params
{
	struct FEventOnCrewStorageUpdate                   Event;                                                     // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
struct UBP_PromptCoordinator_BootyStorage_C_OnItemsRetrieved_Event_Params
{
	struct FEventItemsRetrieved                        Event;                                                     // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CustomEvent_1
struct UBP_PromptCoordinator_BootyStorage_C_CustomEvent_1_Params
{
	struct FRetrieveBootyActorSpawnedEvent             Event;                                                     // (Parm)
};

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
struct UBP_PromptCoordinator_BootyStorage_C_ExecuteUbergraph_BP_PromptCoordinator_BootyStorage_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
