// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xd0 (Full Size[0x890] - InheritedSize[0x7c0]
class BP_SkullOfDestiny_Wieldable_C: public BP_BountyRewardSkull_Ritual_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x7c0(0x8)
	Class ParticleSystemComponent*                               ParticleSystem_Burst;                              // 0x7c8(0x8)
	Class ParticleSystemComponent*                               ParticleSystem_Glow;                               // 0x7d0(0x8)
	Class FlamesOfFateContainerComponent*                        FlamesOfFateContainer;                             // 0x7d8(0x8)
	float                                                        Lerp_Colours_Emissive_Boost_82B3C77845C62CE67714AF9B78A0B7E8; // 0x7e0(0x4)
	float                                                        Lerp_Colours_Lerp_Particle_Colour_82B3C77845C62CE67714AF9B78A0B7E8; // 0x7e4(0x4)
	byte                                                         Lerp_Colours__Direction_82B3C77845C62CE67714AF9B78A0B7E8; // 0x7e8(0x1)
	char                                                         pad0x7_AXRRW[0x7];                                 // 0x7e9(0x7)
	Class TimelineComponent*                                     Lerp Colours;                                      // 0x7f0(0x8)
	Class MaterialInstanceDynamic*                               SkullOfDestiny_DynamicMaterial;                    // 0x7f8(0x8)
	float                                                        ColourChangeDuration;                              // 0x800(0x4)
	Struct LinearColor                                           StartColour;                                       // 0x804(0x10)
	Struct LinearColor                                           EndColour;                                         // 0x814(0x10)
	bool                                                         CanTransition;                                     // 0x824(0x1)
	char                                                         pad0x3_EK4EW[0x3];                                 // 0x825(0x3)
	float                                                        EmissiveBoost;                                     // 0x828(0x4)
	char                                                         pad0x4_IIK7Q[0x4];                                 // 0x82c(0x4)
	Class ParticleSystemComponent*                               BurstParticles;                                    // 0x830(0x8)
	Struct ObjectMessagingHandle                                 ItemWieldedHandle;                                 // 0x838(0x48)
	Struct LinearColor                                           CurrentColour;                                     // 0x880(0x10)
};


}