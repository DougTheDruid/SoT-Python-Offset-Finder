// Name: SoT, Version: 2.2.1.1

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

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InSunkenKingdom                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
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


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset");

	UBP_PromptCoordinator_BootyStorage_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageUpdate Event                          (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageUpdateFunc(const struct FEventOnCrewStorageUpdate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageUpdateFunc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageFull Event                          (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFullFunc(const struct FEventOnCrewStorageFull& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFullFunc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Object                         (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnWieldedFunc(const struct FEventObjectWielded& Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc");

	UBP_PromptCoordinator_BootyStorage_C_OnWieldedFunc_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::PostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize");

	UBP_PromptCoordinator_BootyStorage_C_PostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_BootyStorage_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable");

	UBP_PromptCoordinator_BootyStorage_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate");

	UBP_PromptCoordinator_BootyStorage_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_BootyStorage_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable");

	UBP_PromptCoordinator_BootyStorage_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
// (Event, Public, BlueprintEvent)
void UBP_PromptCoordinator_BootyStorage_C::Uninitialize_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable");

	UBP_PromptCoordinator_BootyStorage_C_Uninitialize_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Object                         (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnWielded(const struct FEventObjectWielded& Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded");

	UBP_PromptCoordinator_BootyStorage_C_OnWielded_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageFull Event                          (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageChange_Event(const struct FEventOnCrewStorageFull& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageChange_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageUpdate Event                          (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFull_Event(const struct FEventOnCrewStorageUpdate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnCrewStorageFull_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventItemsRetrieved    Event                          (Parm)
void UBP_PromptCoordinator_BootyStorage_C::OnItemsRetrieved_Event(const struct FEventItemsRetrieved& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event");

	UBP_PromptCoordinator_BootyStorage_C_OnItemsRetrieved_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRetrieveBootyActorSpawnedEvent Event                          (Parm)
void UBP_PromptCoordinator_BootyStorage_C::CustomEvent_1(const struct FRetrieveBootyActorSpawnedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CustomEvent_1");

	UBP_PromptCoordinator_BootyStorage_C_CustomEvent_1_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
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

}

void UBP_PromptCoordinator_BootyStorage_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
