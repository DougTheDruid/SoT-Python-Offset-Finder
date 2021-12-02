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
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_QuickStorageTransfer_C::IsStorageContainer(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer");

	UBP_Prompt_QuickStorageTransfer_C_IsStorageContainer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBP_Prompt_QuickStorageTransfer_C::GetShowPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt");

	UBP_Prompt_QuickStorageTransfer_C_GetShowPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBP_Prompt_QuickStorageTransfer_C::EvaluatePromptDisplayState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState");

	UBP_Prompt_QuickStorageTransfer_C_EvaluatePromptDisplayState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_QuickStorageTransfer_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_QuickStorageTransfer_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_QuickStorageTransfer_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_QuickStorageTransfer_C_UnregisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FEventObjectWielded                 Event                                                      (Parm)
void UBP_Prompt_QuickStorageTransfer_C::OnObjectWielded(const struct FAthena_FEventObjectWielded& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded");

	UBP_Prompt_QuickStorageTransfer_C_OnObjectWielded_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_QuickStorageTransfer_C::ExecuteUbergraph_BP_Prompt_QuickStorageTransfer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer");

	UBP_Prompt_QuickStorageTransfer_C_ExecuteUbergraph_BP_Prompt_QuickStorageTransfer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_QuickStorageTransfer_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

}

void UBP_Prompt_QuickStorageTransfer_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
