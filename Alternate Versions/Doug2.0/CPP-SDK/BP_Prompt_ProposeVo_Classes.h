namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc8
class BP_Prompt_ProposeVoyage_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_OfferPurchased                               // 0x120(0x1)
	Struct ObjectMessagingHandle                       Handle_OnOfferPurchased                            // 0x128(0x48)
	bool                                               State_Complete                                     // 0x170(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_ProposeVoyage                               // 0x178(0x68)
};


}