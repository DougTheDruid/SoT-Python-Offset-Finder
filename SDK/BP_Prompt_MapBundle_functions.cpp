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
//		Name   -> Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_MapBundle_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_MapBundle_C_RegisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_MapBundle_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_MapBundle_C_UnregisterCharacterEvents_Implementable_Params params {};
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_MapBundle_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate");

	UBP_Prompt_MapBundle_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerBuriedItemsMapBundleBecameVisible    Event                                                      (Parm)
void UBP_Prompt_MapBundle_C::OnMapBundleBecameVisible(const struct FPlayerBuriedItemsMapBundleBecameVisible& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible");

	UBP_Prompt_MapBundle_C_OnMapBundleBecameVisible_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_MapBundle_C::ExecuteUbergraph_BP_Prompt_MapBundle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle");

	UBP_Prompt_MapBundle_C_ExecuteUbergraph_BP_Prompt_MapBundle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_MapBundle_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(MapBundlePromptAccessKey, UClass);
}

void UBP_Prompt_MapBundle_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(MapBundlePromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
