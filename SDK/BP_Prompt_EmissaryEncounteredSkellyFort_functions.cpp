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
//		Name   -> Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryEncounteredSkellyFortNetworkEvent  NewParam                                                   (Parm)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::OnEmissaryEncounteredSkellyFort(const struct FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_OnEmissaryEncounteredSkellyFort_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryEncounteredSkellyFortNetworkEvent  NewParam                                                   (Parm)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::EmissaryEncounteredSkellyFort(const struct FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_EmissaryEncounteredSkellyFort_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissaryEncounteredSkellyFort_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
