// Name: SoT, Version: 2.4.0

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
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldFunc
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FEventObjectWielded                 EventObjectWielded                                         (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_BuryingItem_C::OnWieldFunc(const struct FAthena_FEventObjectWielded& EventObjectWielded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldFunc");

	UBP_Prompt_BuryingItem_C_OnWieldFunc_Params params {};
	params.EventObjectWielded = EventObjectWielded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_BuryingItem_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_BuryingItem_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_BuryingItem_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_BuryingItem_C_UnregisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_BuryingItem_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.Evaluate");

	UBP_Prompt_BuryingItem_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FEventObjectWielded                 OnWieldEvent                                               (Parm)
void UBP_Prompt_BuryingItem_C::OnWieldEvent(const struct FAthena_FEventObjectWielded& OnWieldEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldEvent");

	UBP_Prompt_BuryingItem_C_OnWieldEvent_Params params {};
	params.OnWieldEvent = OnWieldEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.ExecuteUbergraph_BP_Prompt_BuryingItem
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_BuryingItem_C::ExecuteUbergraph_BP_Prompt_BuryingItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.ExecuteUbergraph_BP_Prompt_BuryingItem");

	UBP_Prompt_BuryingItem_C_ExecuteUbergraph_BP_Prompt_BuryingItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_BuryingItem_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(NotificationInputId, UClass);
	READ_PTR_FULL(BuryingItemPromptAccessKey, UClass);
	READ_PTR_FULL(In, UClass);
}

void UBP_Prompt_BuryingItem_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(NotificationInputId);
	DELE_PTR_FULL(BuryingItemPromptAccessKey);
	DELE_PTR_FULL(In);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
