// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa8
class BP_Prompt_EmissaryKilledAnotherEmissary_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	Struct ObjectMessagingHandle                                 Handle_EmissaryKilledAnotherEmissary;              // 0x120(0x48)
	struct FName                                                 CompanyName;                                       // 0x168(0x8)
	struct FName                                                 VictimCompanyName;                                 // 0x170(0x8)
	bool                                                         SurfacedThisSession;                               // 0x178(0x1)
	struct FName                                                 ExpectedCompanyName;                               // 0x17c(0x8)
	TArray<Struct FName>                                         ExpectedVictimCompanyName;                         // 0x188(0x10)
	TArray<Struct PrioritisedPromptWithHandle>                   Prompts;                                           // 0x198(0x10)
	class                                                        PromptAccessKey;                                   // 0x1a8(0x8)
	int                                                          PromptIndex;                                       // 0x1b0(0x4)
	int                                                          NumberOfPrompts;                                   // 0x1b4(0x4)
	float                                                        InitialDelay;                                      // 0x1b8(0x4)
	float                                                        ShowPromptDuration;                                // 0x1bc(0x4)
};


}