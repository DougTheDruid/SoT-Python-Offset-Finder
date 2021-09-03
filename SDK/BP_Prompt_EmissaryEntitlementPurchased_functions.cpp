// Name: SoT, Version: 2.2.1.1

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

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEntitlementPurchasedEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEntitlementPurchased_C::OnEmissaryEntitlementPurchasedFunc(const struct FEmissaryEntitlementPurchasedEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc");

	UBP_Prompt_EmissaryEntitlementPurchased_C_OnEmissaryEntitlementPurchasedFunc_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEntitlementPurchasedEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEntitlementPurchased_C::EmissaryEntitlementPurchased(const struct FEmissaryEntitlementPurchasedEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased");

	UBP_Prompt_EmissaryEntitlementPurchased_C_EmissaryEntitlementPurchased_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEntitlementPurchased_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate");

	UBP_Prompt_EmissaryEntitlementPurchased_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEntitlementPurchased_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEntitlementPurchased_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEntitlementPurchased_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEntitlementPurchased_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEntitlementPurchased_C::ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased");

	UBP_Prompt_EmissaryEntitlementPurchased_C_ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissaryEntitlementPurchased_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissaryEntitlementPurchased_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
