namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x728
class BP_Prompt_CTPurchaseVoyageSequence_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	float                                              TriggerVolumeRadius                                // 0x120(0x4)
	int                                                InsideGoldHoardersRadius                           // 0x124(0x4)
	TArray<class GoldHoarderOverlapActors*>            GoldHoarderOverlapActors                           // 0x128(0x10)
	TArray<class OutpostOverlapActors*>                OutpostOverlapActors                               // 0x138(0x10)
	float                                              OutpostRadiusReduction                             // 0x148(0x4)
	Struct PrioritisedPromptWithHandle                 Prompt_GoToVendors                                 // 0x150(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_GoToGoldhoarders                            // 0x1b8(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_GoToOrderOfSouls                            // 0x220(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_GoToMerchantAlliance                        // 0x288(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_ProposeVoyage                               // 0x2f0(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_VoteOnVoyage                                // 0x358(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_BoardShip                                   // 0x3c0(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_VisitSignpost_GH                            // 0x428(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_VisitSignpost_MA                            // 0x490(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_VisitSignpost_OOS                           // 0x4f8(0x68)
	Struct ObjectMessagingHandle                       Handle_OfferPurchased                              // 0x560(0x48)
	Struct ObjectMessagingHandle                       Handle_VoyageProposalDiscarded                     // 0x5a8(0x48)
	Struct ObjectMessagingHandle                       Handle_VoyageProposed                              // 0x5f0(0x48)
	Struct ObjectMessagingHandle                       Handle_VoyageBegun                                 // 0x638(0x48)
	Struct ObjectMessagingHandle                       Handle_VoyageComplete                              // 0x680(0x48)
	Struct ObjectMessagingHandle                       Handle_PlayerEnteredShip                           // 0x6c8(0x48)
	Struct ObjectMessagingHandle                       Handle_PlayerExitedShip                            // 0x710(0x48)
	Struct ObjectMessagingHandle                       Handle_PlayerWithdrewVoyage                        // 0x758(0x48)
	Struct ObjectMessagingHandle                       Handle_VoyageCancelled                             // 0x7a0(0x48)
	bool                                               State_InsideOutpostRadius                          // 0x7e8(0x1)
	bool                                               State_InsideGoldhoardersRadius                     // 0x7e9(0x1)
	bool                                               State_InsideOrderOfSouls                           // 0x7ea(0x1)
	bool                                               State_InsideMerchantAllianceRadius                 // 0x7eb(0x1)
	bool                                               State_OnShip                                       // 0x7ec(0x1)
	bool                                               State_IsHidden                                     // 0x7ed(0x1)
	bool                                               State_IsTutorialForceDisabled                      // 0x7ee(0x1)
	bool                                               State_SeenSignpostPrompt                           // 0x7ef(0x1)
	BlueprintGeneratedClass BP_CT_TutorialProgress_C*  CompanyTutorialProgress                            // 0x7f0(0x8)
	Struct ObjectMessagingHandle                       Handle_CompanyRankPurchased                        // 0x7f8(0x48)
};


}