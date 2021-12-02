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
//		Name   -> Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventEmoteStarted                          EventEmoteStarted                                          (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_DiceEmote_C::OnEmoteStartedFunc(const struct FEventEmoteStarted& EventEmoteStarted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc");

	UBP_PromptCoordinator_DiceEmote_C_OnEmoteStartedFunc_Params params {};
	params.EventEmoteStarted = EventEmoteStarted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_DiceEmote_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable");

	UBP_PromptCoordinator_DiceEmote_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_PromptCoordinator_DiceEmote_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable");

	UBP_PromptCoordinator_DiceEmote_C_UnregisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_DiceEmote_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate");

	UBP_PromptCoordinator_DiceEmote_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventEmoteStarted                          EmoteStartedEvent                                          (Parm)
void UBP_PromptCoordinator_DiceEmote_C::OnEmoteStarted(const struct FEventEmoteStarted& EmoteStartedEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted");

	UBP_PromptCoordinator_DiceEmote_C_OnEmoteStarted_Params params {};
	params.EmoteStartedEvent = EmoteStartedEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_DiceEmote_C::ExecuteUbergraph_BP_PromptCoordinator_DiceEmote(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote");

	UBP_PromptCoordinator_DiceEmote_C_ExecuteUbergraph_BP_PromptCoordinator_DiceEmote_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_PromptCoordinator_DiceEmote_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(DiceEmotePromptAccessKey, UClass);
}

void UBP_PromptCoordinator_DiceEmote_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(DiceEmotePromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
