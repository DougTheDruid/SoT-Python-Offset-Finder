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

// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.UnregisterDamageEventFromCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_RepairShipWheel_C::UnregisterDamageEventFromCurrentShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.UnregisterDamageEventFromCurrentShip");

	UBP_Prompt_RepairShipWheel_C_UnregisterDamageEventFromCurrentShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.RegisterDamageEventWithCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_RepairShipWheel_C::RegisterDamageEventWithCurrentShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.RegisterDamageEventWithCurrentShip");

	UBP_Prompt_RepairShipWheel_C_RegisterDamageEventWithCurrentShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_RepairShipWheel_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.Evaluate");

	UBP_Prompt_RepairShipWheel_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_RepairShipWheel_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_RepairShipWheel_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.OnCurrentShipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCurrentShipChanged Event                          (Parm)
void UBP_Prompt_RepairShipWheel_C::OnCurrentShipChanged(const struct FEventCurrentShipChanged& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.OnCurrentShipChanged");

	UBP_Prompt_RepairShipWheel_C_OnCurrentShipChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.OnShipDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWheelDamageLevelChanged Event                          (Parm)
void UBP_Prompt_RepairShipWheel_C::OnShipDamaged(const struct FEventWheelDamageLevelChanged& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.OnShipDamaged");

	UBP_Prompt_RepairShipWheel_C_OnShipDamaged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_RepairShipWheel_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_RepairShipWheel_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.ExecuteUbergraph_BP_Prompt_RepairShipWheel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_RepairShipWheel_C::ExecuteUbergraph_BP_Prompt_RepairShipWheel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipWheel.BP_Prompt_RepairShipWheel_C.ExecuteUbergraph_BP_Prompt_RepairShipWheel");

	UBP_Prompt_RepairShipWheel_C_ExecuteUbergraph_BP_Prompt_RepairShipWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_RepairShipWheel_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(CurrentShip, AShip);
}

void UBP_Prompt_RepairShipWheel_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(CurrentShip);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
