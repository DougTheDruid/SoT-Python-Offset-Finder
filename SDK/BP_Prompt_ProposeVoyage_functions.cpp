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
//		Name   -> Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.PostInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_ProposeVoyage_C::PostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.PostInitialize");

	UBP_Prompt_ProposeVoyage_C_PostInitialize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FOfferPurchasedEvent                Ev                                                         (Parm)
void UBP_Prompt_ProposeVoyage_C::Prompt_OfferPurchased(const struct FAthena_FOfferPurchasedEvent& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased");

	UBP_Prompt_ProposeVoyage_C_Prompt_OfferPurchased_Params params {};
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_ProposeVoyage_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_ProposeVoyage_C_UnregisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_ProposeVoyage_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate");

	UBP_Prompt_ProposeVoyage_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_ProposeVoyage_C::ExecuteUbergraph_BP_Prompt_ProposeVoyage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage");

	UBP_Prompt_ProposeVoyage_C_ExecuteUbergraph_BP_Prompt_ProposeVoyage_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_ProposeVoyage_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

}

void UBP_Prompt_ProposeVoyage_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
