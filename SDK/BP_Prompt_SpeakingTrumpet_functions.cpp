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
//		Name   -> Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldFunc
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FEventObjectWielded                 EventObjectWielded                                         (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_SpeakingTrumpet_C::OnWieldFunc(const struct FAthena_FEventObjectWielded& EventObjectWielded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldFunc");

	UBP_Prompt_SpeakingTrumpet_C_OnWieldFunc_Params params {};
	params.EventObjectWielded = EventObjectWielded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_SpeakingTrumpet_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_SpeakingTrumpet_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_SpeakingTrumpet_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_SpeakingTrumpet_C_UnregisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_SpeakingTrumpet_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.Evaluate");

	UBP_Prompt_SpeakingTrumpet_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FEventObjectWielded                 OnWieldEvent                                               (Parm)
void UBP_Prompt_SpeakingTrumpet_C::OnWieldEvent(const struct FAthena_FEventObjectWielded& OnWieldEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldEvent");

	UBP_Prompt_SpeakingTrumpet_C_OnWieldEvent_Params params {};
	params.OnWieldEvent = OnWieldEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.ExecuteUbergraph_BP_Prompt_SpeakingTrumpet
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_SpeakingTrumpet_C::ExecuteUbergraph_BP_Prompt_SpeakingTrumpet(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.ExecuteUbergraph_BP_Prompt_SpeakingTrumpet");

	UBP_Prompt_SpeakingTrumpet_C_ExecuteUbergraph_BP_Prompt_SpeakingTrumpet_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_SpeakingTrumpet_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(NotificationInputId, UClass);
	READ_PTR_FULL(SpeakingTrumpetPromptAccessKey, UClass);
	READ_PTR_FULL(In, UClass);
}

void UBP_Prompt_SpeakingTrumpet_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(NotificationInputId);
	DELE_PTR_FULL(SpeakingTrumpetPromptAccessKey);
	DELE_PTR_FULL(In);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
