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
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ResetState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_UseAMermaid_C::ResetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ResetState");

	UBP_Prompt_UseAMermaid_C_ResetState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBP_Prompt_UseAMermaid_C::EvaluatePromptDisplayState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState");

	UBP_Prompt_UseAMermaid_C_EvaluatePromptDisplayState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_UseAMermaid_C::PostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize");

	UBP_Prompt_UseAMermaid_C_PostInitialize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMermaidActivatedLocally                    Ev                                                         (Parm)
void UBP_Prompt_UseAMermaid_C::Prompt_MermaidActivatedLocally(const struct FMermaidActivatedLocally& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally");

	UBP_Prompt_UseAMermaid_C_Prompt_MermaidActivatedLocally_Params params {};
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMermaidDeactivatedLocally                  Ev                                                         (Parm)
void UBP_Prompt_UseAMermaid_C::Prompt_MermaidDeactivatedLocally(const struct FMermaidDeactivatedLocally& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally");

	UBP_Prompt_UseAMermaid_C_Prompt_MermaidDeactivatedLocally_Params params {};
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMermaidUsedEvent                           Ev                                                         (Parm)
void UBP_Prompt_UseAMermaid_C::Prompt_MermaidUsed(const struct FMermaidUsedEvent& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed");

	UBP_Prompt_UseAMermaid_C_Prompt_MermaidUsed_Params params {};
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_UseAMermaid_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_UseAMermaid_C_UnregisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_UseAMermaid_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_UseAMermaid_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_UseAMermaid_C::ExecuteUbergraph_BP_Prompt_UseAMermaid(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid");

	UBP_Prompt_UseAMermaid_C_ExecuteUbergraph_BP_Prompt_UseAMermaid_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_UseAMermaid_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

}

void UBP_Prompt_UseAMermaid_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
