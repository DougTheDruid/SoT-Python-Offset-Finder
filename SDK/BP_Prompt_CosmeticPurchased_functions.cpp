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
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_Prompt_CosmeticPurchased_C::OnPlayerEntitlementUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated");

	UBP_Prompt_CosmeticPurchased_C_OnPlayerEntitlementUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UClass*>                              CategoryType                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FPrioritisedPromptWithHandle                PromptCosmeticPurchased                                    (Parm)
//		struct FPrioritisedPromptWithHandle                PromptVisitCustomizationChest                              (Parm)
void UBP_Prompt_CosmeticPurchased_C::SetCosmeticPromptInfo(class UClass* AccessKey, TArray<class UClass*>* CategoryType, const struct FPrioritisedPromptWithHandle& PromptCosmeticPurchased, const struct FPrioritisedPromptWithHandle& PromptVisitCustomizationChest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo");

	UBP_Prompt_CosmeticPurchased_C_SetCosmeticPromptInfo_Params params {};
	params.AccessKey = AccessKey;
	params.PromptCosmeticPurchased = PromptCosmeticPurchased;
	params.PromptVisitCustomizationChest = PromptVisitCustomizationChest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CategoryType != nullptr)
		*CategoryType = params.CategoryType;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FOfferPurchasedEvent                Event                                                      (Parm)
void UBP_Prompt_CosmeticPurchased_C::OnOfferPurchased(const struct FAthena_FOfferPurchasedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased");

	UBP_Prompt_CosmeticPurchased_C_OnOfferPurchased_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_CosmeticPurchased_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate");

	UBP_Prompt_CosmeticPurchased_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_CosmeticPurchased_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_CosmeticPurchased_C_RegisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_CosmeticPurchased_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_CosmeticPurchased_C_UnregisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FOfferPurchasedEvent                Event                                                      (Parm)
void UBP_Prompt_CosmeticPurchased_C::OfferPurchasedEvent(const struct FAthena_FOfferPurchasedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent");

	UBP_Prompt_CosmeticPurchased_C_OfferPurchasedEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAthena_FShopClosedEvent                    Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_CosmeticPurchased_C::ShopClosedEvent(const struct FAthena_FShopClosedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent");

	UBP_Prompt_CosmeticPurchased_C_ShopClosedEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_CosmeticPurchased_C::PostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize");

	UBP_Prompt_CosmeticPurchased_C_PostInitialize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Prompt_CosmeticPurchased_C::Unregister_HUD_Events()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events");

	UBP_Prompt_CosmeticPurchased_C_Unregister_HUD_Events_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_CosmeticPurchased_C::OnEndPlay_HUD(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD");

	UBP_Prompt_CosmeticPurchased_C_OnEndPlay_HUD_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerEntitlementUpdatedEvent              Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_CosmeticPurchased_C::PlayerEntitlementUpdated(const struct FPlayerEntitlementUpdatedEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated");

	UBP_Prompt_CosmeticPurchased_C_PlayerEntitlementUpdated_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_CosmeticPurchased_C::ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased");

	UBP_Prompt_CosmeticPurchased_C_ExecuteUbergraph_BP_Prompt_CosmeticPurchased_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_CosmeticPurchased_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(AccessKey, UClass);
}

void UBP_Prompt_CosmeticPurchased_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(AccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
