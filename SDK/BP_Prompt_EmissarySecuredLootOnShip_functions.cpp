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

// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissarySecuredLootOnShip_C::OnEmissarySecuredLootOnShip(const struct FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip");

	UBP_Prompt_EmissarySecuredLootOnShip_C_OnEmissarySecuredLootOnShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissarySecuredLootOnShip_C::EmissarySecuredLootOnShip(const struct FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip");

	UBP_Prompt_EmissarySecuredLootOnShip_C_EmissarySecuredLootOnShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissarySecuredLootOnShip_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate");

	UBP_Prompt_EmissarySecuredLootOnShip_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissarySecuredLootOnShip_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissarySecuredLootOnShip_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissarySecuredLootOnShip_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissarySecuredLootOnShip_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissarySecuredLootOnShip_C::ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip");

	UBP_Prompt_EmissarySecuredLootOnShip_C_ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissarySecuredLootOnShip_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissarySecuredLootOnShip_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
