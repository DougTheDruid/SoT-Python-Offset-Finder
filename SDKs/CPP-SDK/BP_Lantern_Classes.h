// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x98 (Full Size[0xa38] - InheritedSize[0x9a0]
class BP_Lantern_C: public Lantern
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x9a0(0x8)
	class StaticMeshComponent*                                   LanternTriggerGlow;                                // 0x9a8(0x8)
	class StaticMeshComponent*                                   LanternGlow;                                       // 0x9b0(0x8)
	class AmbientLightSourceComponent*                           AmbientLightSource;                                // 0x9b8(0x8)
	class SpotLightComponent*                                    SpotLight;                                         // 0x9c0(0x8)
	class UsableWieldableComponent*                              UsableWieldable;                                   // 0x9c8(0x8)
	class MaterialInstanceDynamic*                               LanternGlowDynamicMaterial;                        // 0x9d0(0x8)
	float                                                        EmissiveInt_threshold;                             // 0x9d8(0x4)
	char                                                         pad0x4_8Z0SC[0x4];                                 // 0x9dc(0x4)
	class MaterialInstanceDynamic*                               LanternTriggerGlowDynamicMaterial;                 // 0x9e0(0x8)
	float                                                        TriggerGlowDuration;                               // 0x9e8(0x4)
	float                                                        TriggerGlowRampInDuration;                         // 0x9ec(0x4)
	float                                                        TriggerGlowRampOutDuration;                        // 0x9f0(0x4)
	struct LinearColor                                           DefaultSpotlightColour;                            // 0x9f4(0x10)
	struct LinearColor                                           DefaultAmbientLightColour;                         // 0xa04(0x10)
	struct LinearColor                                           DefaultGlowColour;                                 // 0xa14(0x10)
	char                                                         pad0x4_00D52[0x4];                                 // 0xa24(0x4)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0xa28(0x10)
};


}