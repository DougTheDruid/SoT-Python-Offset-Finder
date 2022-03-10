namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xd0
class BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       Handle_CrewEnteredTunnelOfTheDamnedPortalProximity // 0x120(0x48)
	Struct PrioritisedPromptWithHandle                 Prompt_BootyWillBeLost                             // 0x168(0x68)
	float                                              PromptDisplayDuration                              // 0x1d0(0x4)
	bool                                               CrewInRadius                                       // 0x1d4(0x1)
	bool                                               PromptOnCooldown                                   // 0x1d5(0x1)
	float                                              PromptDisplayCooldown                              // 0x1d8(0x4)
	Class TunnelsOfTheDamnedLootFilterDataAsset*       LootFilterDataAsset                                // 0x1e0(0x8)
};


}