#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x48 (Full Size[0x410] - InheritedSize[0x3c8]
class BP_Tavern_B_AudioLayer_C: public Actor
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	class TritonComponent*                                       Triton;                                            // 0x3d0(0x8)
	class WwiseEmitterComponent*                                 Fire;                                              // 0x3d8(0x8)
	class AudioSpaceComponent*                                   Tavern_AudioSpace_EdgeSection;                     // 0x3e0(0x8)
	class AudioSpaceComponent*                                   Tavern_AudioSpace_LargeSection;                    // 0x3e8(0x8)
	class AudioPortalComponent*                                  Tavern_AudioPortal;                                // 0x3f0(0x8)
	class SceneComponent*                                        Scene;                                             // 0x3f8(0x8)
	class WwiseEvent*                                            TavernFire_Play;                                   // 0x400(0x8)
	class WwiseEvent*                                            TavernFire_Stop;                                   // 0x408(0x8)
};


