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
//		Name   -> Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_TavernBoard_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_TavernBoard_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_TavernBoard_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_TavernBoard_C_UnregisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_TavernBoard_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate");

	UBP_Prompt_TavernBoard_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FApproachedPlayerGeneratedMapsContainer     Event                                                      (Parm)
void UBP_Prompt_TavernBoard_C::OnApproachedTavernBoard(const struct FApproachedPlayerGeneratedMapsContainer& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard");

	UBP_Prompt_TavernBoard_C_OnApproachedTavernBoard_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_TavernBoard_C::ExecuteUbergraph_BP_Prompt_TavernBoard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard");

	UBP_Prompt_TavernBoard_C_ExecuteUbergraph_BP_Prompt_TavernBoard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_TavernBoard_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(TavernBoardPromptAccessKey, UClass);
}

void UBP_Prompt_TavernBoard_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(TavernBoardPromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
