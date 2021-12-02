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
//		Name   -> Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryLevel_FEmissaryActivated           NewParam                                                   (Parm)
void UBP_Prompt_EmissaryActivated_C::OnEmissaryActivatedFunc(const struct FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc");

	UBP_Prompt_EmissaryActivated_C_OnEmissaryActivatedFunc_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryLevel_FEmissaryActivated           NewParam                                                   (Parm)
void UBP_Prompt_EmissaryActivated_C::EmissaryActivated(const struct FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated");

	UBP_Prompt_EmissaryActivated_C_EmissaryActivated_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryActivated_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate");

	UBP_Prompt_EmissaryActivated_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryActivated_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryActivated_C_RegisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryActivated_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryActivated_C_UnregisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryActivated_C::ExecuteUbergraph_BP_Prompt_EmissaryActivated(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated");

	UBP_Prompt_EmissaryActivated_C_ExecuteUbergraph_BP_Prompt_EmissaryActivated_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissaryActivated_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissaryActivated_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
