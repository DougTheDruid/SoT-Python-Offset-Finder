#pragma once

// Name: SoT, Version: 2.3.0


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

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateMerchantPrompt
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ShowAppropriateMerchantPrompt_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetIsHidden
struct UBP_Prompt_CTPurchaseVoyageSequence_C_SetIsHidden_Params
{
	bool                                               NewHidden;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadiusFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftGoldhoarderRadiusFunc_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadiusFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredGoldhoarderRadiusFunc_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadiusFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftOutpostRadiusFunc_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadiusFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredOutpostRadiusFunc_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchasedFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnCompanyRankPurchasedFunc_Params
{
	struct FEventCompanyRankProgressUpdateNotification InputPin;                                                  // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyageFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerWithdrewVoyageFunc_Params
{
	struct FEventPlayerWithdrewVoyage                  EventPlayerWithdrewVoyage;                                 // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventoryFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageDiscardFromInventoryFunc_Params
{
	struct FVoyageProposalDiscardEvent                 VoyageProposalDiscardEvent;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyageFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerProposedVoyageFunc_Params
{
	struct FVoyageProposalSelectedEvent                VoyageProposalSelectedEvent;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchasedFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnOfferPurchasedFunc_Params
{
	struct FOfferPurchasedEvent                        OfferPurchasedEvent;                                       // 0x0000(0x01E8)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyageFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerCancelledVoyageFunc_Params
{
	struct FVoyageCancelled                            VoyageCancelled;                                           // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShipFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerExitedShipFunc_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShipFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnSomethingEnteredShipFunc_Params
{
	struct FEventEnteredShip                           EventEnteredShip;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompletedFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageCompletedFunc_Params
{
	struct FVoyageComplete                             VoyageComplete;                                            // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegunFunc
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageBegunFunc_Params
{
	struct FVoyageBegun                                VoyageBegun;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsNearAnyShopkeeper
struct UBP_Prompt_CTPurchaseVoyageSequence_C_IsNearAnyShopkeeper_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled
struct UBP_Prompt_CTPurchaseVoyageSequence_C_AreTutorialsForceDisabled_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter
struct UBP_Prompt_CTPurchaseVoyageSequence_C_IsCurrentlyControlledCharacter_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ShouldShowMerchantAllianceCompanyPrompts_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ShouldShowOrderOfSoulsCompanyPrompts_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ClearAllOutpostOverlapActors_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ShouldShowGoldHoarderCompanyPrompts_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ClearAllGoldHoarderOverlapActors_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations
struct UBP_Prompt_CTPurchaseVoyageSequence_C_SetGoldHoardersLocations_Params
{
	TArray<struct FVector>                             GoldHoarderLocations;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate
struct UBP_Prompt_CTPurchaseVoyageSequence_C_Evaluate_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete
struct UBP_Prompt_CTPurchaseVoyageSequence_C_Complete_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts
struct UBP_Prompt_CTPurchaseVoyageSequence_C_SetOutposts_Params
{
	TArray<struct FName>                               OutpostNames;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable
struct UBP_Prompt_CTPurchaseVoyageSequence_C_UninitializeImplementable_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PostInitialize_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations
struct UBP_Prompt_CTPurchaseVoyageSequence_C_SetOrderOfSoulsLocations_Params
{
	TArray<struct FVector>                             Order_of_Souls_Locations;                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations
struct UBP_Prompt_CTPurchaseVoyageSequence_C_SetMerchantAllianceLocations_Params
{
	TArray<struct FVector>                             Merchant_Alliance_Locations;                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_CTPurchaseVoyageSequence_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_CTPurchaseVoyageSequence_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_CTPurchaseVoyageSequence_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_CTPurchaseVoyageSequence_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ForceDisableTutorials_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Unregister HUD Events
struct UBP_Prompt_CTPurchaseVoyageSequence_C_Unregister_HUD_Events_Params
{
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnOfferPurchased_Params
{
	struct FOfferPurchasedEvent                        Event;                                                     // 0x0000(0x01E8)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerProposedVoyage_Params
{
	struct FVoyageProposalSelectedEvent                Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageDiscardFromInventory_Params
{
	struct FVoyageProposalDiscardEvent                 Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageBegun_Params
{
	struct FVoyageBegun                                Event;                                                     // 0x0000(0x0038)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageCompleted_Params
{
	struct FVoyageComplete                             Event;                                                     // 0x0000(0x0040)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnSomethingEnteredShip_Params
{
	struct FEventEnteredShip                           Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerExitedShip_Params
{
	struct FEventExitedShip                            Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftOutpostRadius_Params
{
	class AActor*                                      ActorInZone;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredOutpostRadius_Params
{
	class AActor*                                      ActorInZone;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftGoldhoarderRadius_Params
{
	class AActor*                                      ActorInZone;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius
struct UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredGoldhoarderRadius_Params
{
	class AActor*                                      ActorInZone;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerWithdrewVoyage_Params
{
	struct FEventPlayerWithdrewVoyage                  Event;                                                     // 0x0000(0x0048)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerCancelledVoyage_Params
{
	struct FVoyageCancelled                            Event;                                                     // 0x0000(0x0038)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchased
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnCompanyRankPurchased_Params
{
	struct FEventCompanyRankProgressUpdateNotification Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnEndPlay_HUD
struct UBP_Prompt_CTPurchaseVoyageSequence_C_OnEndPlay_HUD_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence
struct UBP_Prompt_CTPurchaseVoyageSequence_C_ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
