// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0
class BP_Prompt_EmissaryEntitlementPurchased_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	Struct ObjectMessagingHandle                                 Handle_EmissaryEntitlementPurchased;               // 0x120(0x48)
	Struct Guid                                                  OfferId;                                           // 0x168(0x10)
	Struct Guid                                                  ExpectedOfferId;                                   // 0x178(0x10)
	TArray<Struct PrioritisedPromptWithHandle>                   Prompts;                                           // 0x188(0x10)
	bool                                                         PromptSurfacedThisSession;                         // 0x198(0x1)
	class                                                        PromptAccessKey;                                   // 0x1a0(0x8)
	int                                                          PromptIndex;                                       // 0x1a8(0x4)
	int                                                          NumberOfPrompts;                                   // 0x1ac(0x4)
	float                                                        InitialDelay;                                      // 0x1b0(0x4)
	float                                                        ShowPromptDuration;                                // 0x1b4(0x4)
};


}