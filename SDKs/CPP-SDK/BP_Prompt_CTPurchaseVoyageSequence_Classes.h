#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x824 (Full Size[0x95c] - InheritedSize[0x138]
class BP_Prompt_CTPurchaseVoyageSequence_C: public BP_PromptCoordinator_Base_C
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0xb4_K8HQU[0xb4];                               // 0x140(0xb4)
	float                                                        TriggerVolumeRadius;                               // 0x140(0x4)
	int                                                          InsideGoldHoardersRadius;                          // 0x144(0x4)
	TArray<class OverlapTriggerActor*>                           GoldHoarderOverlapActors;                          // 0x148(0x10)
	TArray<class OverlapTriggerActor*>                           OutpostOverlapActors;                              // 0x158(0x10)
	float                                                        OutpostRadiusReduction;                            // 0x168(0x4)
	char                                                         pad0x4_CL4BI[0x4];                                 // 0x16c(0x4)
	struct PrioritisedPromptWithHandle                           Prompt_GoToVendors;                                // 0x170(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_GoToGoldhoarders;                           // 0x1e0(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_GoToOrderOfSouls;                           // 0x250(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_GoToMerchantAlliance;                       // 0x2c0(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_ProposeVoyage;                              // 0x330(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_VoteOnVoyage;                               // 0x3a0(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_BoardShip;                                  // 0x410(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_VisitSignpost_GH;                           // 0x480(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_VisitSignpost_MA;                           // 0x4f0(0x70)
	struct PrioritisedPromptWithHandle                           Prompt_VisitSignpost_OOS;                          // 0x560(0x70)
	struct ObjectMessagingHandle                                 Handle_OfferPurchased;                             // 0x5d0(0x58)
	struct ObjectMessagingHandle                                 Handle_VoyageProposalDiscarded;                    // 0x628(0x58)
	struct ObjectMessagingHandle                                 Handle_VoyageProposed;                             // 0x680(0x58)
	struct ObjectMessagingHandle                                 Handle_VoyageBegun;                                // 0x6d8(0x58)
	struct ObjectMessagingHandle                                 Handle_VoyageComplete;                             // 0x730(0x58)
	struct ObjectMessagingHandle                                 Handle_PlayerEnteredShip;                          // 0x788(0x58)
	struct ObjectMessagingHandle                                 Handle_PlayerExitedShip;                           // 0x7e0(0x58)
	struct ObjectMessagingHandle                                 Handle_PlayerWithdrewVoyage;                       // 0x838(0x58)
	struct ObjectMessagingHandle                                 Handle_VoyageCancelled;                            // 0x890(0x58)
	bool                                                         State_InsideOutpostRadius;                         // 0x8e8(0x1)
	bool                                                         State_InsideGoldhoardersRadius;                    // 0x8e9(0x1)
	bool                                                         State_InsideOrderOfSouls;                          // 0x8ea(0x1)
	bool                                                         State_InsideMerchantAllianceRadius;                // 0x8eb(0x1)
	bool                                                         State_OnShip;                                      // 0x8ec(0x1)
	bool                                                         State_IsHidden;                                    // 0x8ed(0x1)
	bool                                                         State_IsTutorialForceDisabled;                     // 0x8ee(0x1)
	bool                                                         State_SeenSignpostPrompt;                          // 0x8ef(0x1)
	blueprintgeneratedclass BP_CT_TutorialProgress_C*            CompanyTutorialProgress;                           // 0x8f0(0x8)
	struct ObjectMessagingHandle                                 Handle_CompanyRankPurchased;                       // 0x8f8(0x58)
	struct FeatureFlag                                           FeatureName;                                       // 0x950(0xc)
};


