// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::OnBootyRetrieveActorDespawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned");

	UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventObjectStowed                          Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnStowedFunc(const struct FEventObjectStowed& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnStowedFunc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::OnBootyRetrieveActorSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned");

	UBP_PromptCoordinator_BootyStorage_C_OnBootyRetrieveActorSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               HasTreasure                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_BootyStorage_C::CrewHasLootToRetrieve(bool* HasTreasure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve");

	UBP_PromptCoordinator_BootyStorage_C_CrewHasLootToRetrieve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasTreasure != nullptr)
		*HasTreasure = params.HasTreasure;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               InSunkenKingdom                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_BootyStorage_C::IsInSunkenKingdom(bool* InSunkenKingdom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom");

	UBP_PromptCoordinator_BootyStorage_C_IsInSunkenKingdom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSunkenKingdom != nullptr)
		*InSunkenKingdom = params.InSunkenKingdom;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset");

	UBP_PromptCoordinator_BootyStorage_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventOnCrewStorageUpdate                   Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageUpdateFunc(const struct FEventOnCrewStorageUpdate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageUpdateFunc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventOnCrewStorageFull                     Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFullFunc(const struct FEventOnCrewStorageFull& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFullFunc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventObjectWielded                         Object                                                     (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnWieldedFunc(const struct FEventObjectWielded& Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnWieldedFunc_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::PostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize");

	UBP_PromptCoordinator_BootyStorage_C_PostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_BootyStorage_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable");

	UBP_PromptCoordinator_BootyStorage_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate");

	UBP_PromptCoordinator_BootyStorage_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_BootyStorage_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable");

	UBP_PromptCoordinator_BootyStorage_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::Uninitialize_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable");

	UBP_PromptCoordinator_BootyStorage_C_Uninitialize_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::SetPromptComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete");

	UBP_PromptCoordinator_BootyStorage_C_SetPromptComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::ResetLootPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt");

	UBP_PromptCoordinator_BootyStorage_C_ResetLootPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::ResetMermaidPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt");

	UBP_PromptCoordinator_BootyStorage_C_ResetMermaidPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventObjectStowed                          Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnStowed(const struct FEventObjectStowed& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed");

	UBP_PromptCoordinator_BootyStorage_C_OnStowed_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventObjectWielded                         Object                                                     (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnWielded(const struct FEventObjectWielded& Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded");

	UBP_PromptCoordinator_BootyStorage_C_OnWielded_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventOnCrewStorageFull                     Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageChange_Event(const struct FEventOnCrewStorageFull& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageChange_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventOnCrewStorageUpdate                   Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFull_Event(const struct FEventOnCrewStorageUpdate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFull_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventItemsRetrieved                        Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnItemsRetrieved_Event(const struct FEventItemsRetrieved& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnItemsRetrieved_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRetrieveBootyActorDespawnedEvent           Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnBootyActorDespawned_Event(const struct FRetrieveBootyActorDespawnedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnBootyActorDespawned_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRetrieveBootyActorSpawnedEvent             Event                                                      (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnBootyActorSpawned_Event(const struct FRetrieveBootyActorSpawnedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnBootyActorSpawned_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_BootyStorage_C::ExecuteUbergraph_BP_PromptCoordinator_BootyStorage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage");

	UBP_PromptCoordinator_BootyStorage_C_ExecuteUbergraph_BP_PromptCoordinator_BootyStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_PromptCoordinator_BootyStorage_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptKey, UClass);
	READ_PTR_FULL(CurrentlyWieldedItem, AWieldableItem);
}

void UBP_PromptCoordinator_BootyStorage_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptKey);
	DELE_PTR_FULL(CurrentlyWieldedItem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
