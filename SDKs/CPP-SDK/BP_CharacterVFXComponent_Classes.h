// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x250
class BP_CharacterVFXComponent_C: public CharacterVfxComponent
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xe0(0x8)
	Struct ObjectMessagingHandle                                 EnterWaterEvent;                                   // 0xe8(0x48)
	Struct ObjectMessagingHandle                                 UnderwaterStateChanged;                            // 0x130(0x48)
	Class ParticleSystemComponent*                               Splash Emitter;                                    // 0x178(0x8)
	Class ParticleSystem*                                        Large Foot Splash;                                 // 0x180(0x8)
	Class ParticleSystem*                                        Small Foot Splash;                                 // 0x188(0x8)
	float                                                        Threshold for run;                                 // 0x190(0x4)
	float                                                        Threshold for large foot impact;                   // 0x194(0x4)
	Struct ObjectMessagingHandle                                 FallingIntoWaterHandle;                            // 0x198(0x48)
	Class ParticleSystem*                                        Large Falling Splash;                              // 0x1e0(0x8)
	Struct ObjectMessagingHandle                                 PlayerViewUnderWaterHandle;                        // 0x1e8(0x48)
	Struct ObjectMessagingHandle                                 EnterShipEventHandle;                              // 0x230(0x48)
	Struct ObjectMessagingHandle                                 ExitShipEventHandle;                               // 0x278(0x48)
	Struct Vector                                                WindOffsetFromShip;                                // 0x2c0(0xc)
	bool                                                         DEBUG_WindActive;                                  // 0x2cc(0x1)
	float                                                        DEBUG_WindToggleTimer;                             // 0x2d0(0x4)
	Struct ObjectMessagingHandle                                 WindDirectionChangedHandle;                        // 0x2d8(0x48)
	Class ParticleSystemComponent*                               vfx_particle_underwater_ambient;                   // 0x320(0x8)
	Class ParticleSystemComponent*                               vfx_player_underwater_ambient;                     // 0x328(0x8)
};


}