// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc8 (Full Size[0x1e0] - InheritedSize[0x118]
class BP_Prompt_ProposeVoyage_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	char                                                         pad0x93_8G6PL[0x93];                               // 0x120(0x93)
	bool                                                         State_OfferPurchased;                              // 0x120(0x1)
	char                                                         pad0x7_S9HDF[0x7];                                 // 0x121(0x7)
	Struct ObjectMessagingHandle                                 Handle_OnOfferPurchased;                           // 0x128(0x48)
	bool                                                         State_Complete;                                    // 0x170(0x1)
	char                                                         pad0x7_455VU[0x7];                                 // 0x171(0x7)
	Struct PrioritisedPromptWithHandle                           Prompt_ProposeVoyage;                              // 0x178(0x68)
};


}