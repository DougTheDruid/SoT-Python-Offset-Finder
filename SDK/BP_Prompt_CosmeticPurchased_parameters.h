#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated
struct UBP_Prompt_CosmeticPurchased_C_OnPlayerEntitlementUpdated_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo
struct UBP_Prompt_CosmeticPurchased_C_SetCosmeticPromptInfo_Params
{
	class UClass*                                      AccessKey;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              CategoryType;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPrioritisedPromptWithHandle                PromptCosmeticPurchased;                                   // 0x0018(0x0068)  (Parm)
	struct FPrioritisedPromptWithHandle                PromptVisitCustomizationChest;                             // 0x0080(0x0068)  (Parm)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased
struct UBP_Prompt_CosmeticPurchased_C_OnOfferPurchased_Params
{
	struct FAthena_FOfferPurchasedEvent                Event;                                                     // 0x0000(0x01E8)  (Parm)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate
struct UBP_Prompt_CosmeticPurchased_C_Evaluate_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_CosmeticPurchased_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_CosmeticPurchased_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent
struct UBP_Prompt_CosmeticPurchased_C_OfferPurchasedEvent_Params
{
	struct FAthena_FOfferPurchasedEvent                Event;                                                     // 0x0000(0x01E8)  (Parm)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent
struct UBP_Prompt_CosmeticPurchased_C_ShopClosedEvent_Params
{
	struct FAthena_FShopClosedEvent                    Event;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize
struct UBP_Prompt_CosmeticPurchased_C_PostInitialize_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events
struct UBP_Prompt_CosmeticPurchased_C_Unregister_HUD_Events_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD
struct UBP_Prompt_CosmeticPurchased_C_OnEndPlay_HUD_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated
struct UBP_Prompt_CosmeticPurchased_C_PlayerEntitlementUpdated_Params
{
	struct FPlayerEntitlementUpdatedEvent              Event;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased
struct UBP_Prompt_CosmeticPurchased_C_ExecuteUbergraph_BP_Prompt_CosmeticPurchased_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
