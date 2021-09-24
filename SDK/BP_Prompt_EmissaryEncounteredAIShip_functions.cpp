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
//		Name   -> Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryEncounteredAIShipEvent             NewParam                                                   (Parm)
void UBP_Prompt_EmissaryEncounteredAIShip_C::OnEmissaryEncounteredAIShip(const struct FEmissaryEncounteredAIShipEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip");

	UBP_Prompt_EmissaryEncounteredAIShip_C_OnEmissaryEncounteredAIShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEmissaryEncounteredAIShipEvent             NewParam                                                   (Parm)
void UBP_Prompt_EmissaryEncounteredAIShip_C::EmissaryEncounteredAIShip(const struct FEmissaryEncounteredAIShipEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip");

	UBP_Prompt_EmissaryEncounteredAIShip_C_EmissaryEncounteredAIShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredAIShip_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate");

	UBP_Prompt_EmissaryEncounteredAIShip_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredAIShip_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredAIShip_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredAIShip_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredAIShip_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEncounteredAIShip_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip");

	UBP_Prompt_EmissaryEncounteredAIShip_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissaryEncounteredAIShip_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissaryEncounteredAIShip_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
