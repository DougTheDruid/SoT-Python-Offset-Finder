// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xe8 (Full Size[0x220] - InheritedSize[0x138]
class BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C: public BP_PromptCoordinator_Base_C
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x16c_ICMZ1[0x16c];                             // 0x140(0x16c)
	struct ObjectMessagingHandle                                 Handle_CrewEnteredTunnelOfTheDamnedPortalProximity; // 0x140(0x58)
	struct PrioritisedPromptWithHandle                           Prompt_BootyWillBeLost;                            // 0x198(0x70)
	float                                                        PromptDisplayDuration;                             // 0x208(0x4)
	bool                                                         CrewInRadius;                                      // 0x20c(0x1)
	bool                                                         PromptOnCooldown;                                  // 0x20d(0x1)
	char                                                         pad0x2_6MNWG[0x2];                                 // 0x20e(0x2)
	float                                                        PromptDisplayCooldown;                             // 0x210(0x4)
	char                                                         pad0x4_VU2UJ[0x4];                                 // 0x214(0x4)
	class TunnelsOfTheDamnedLootFilterDataAsset*                 LootFilterDataAsset;                               // 0x218(0x8)
};


}