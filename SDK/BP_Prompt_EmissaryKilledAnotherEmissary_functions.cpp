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
//		Name   -> Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.OnEmissaryKilledAnotherEmissary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryKilledAnotherEmissaryNetworkEvent  NewParam                                                   (Parm)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::OnEmissaryKilledAnotherEmissary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.OnEmissaryKilledAnotherEmissary");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_OnEmissaryKilledAnotherEmissary_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.EmissaryKilledAnotherEmisary
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryKilledAnotherEmissaryNetworkEvent  NewParam                                                   (Parm)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::EmissaryKilledAnotherEmisary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.EmissaryKilledAnotherEmisary");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_EmissaryKilledAnotherEmisary_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.Evaluate");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissaryKilledAnotherEmissary_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
