// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x75 (Full Size[0x74d] - InheritedSize[0x6d8]
class BP_InteractableShipLantern_C: public ShipInteractableLight
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x6d8(0x8)
	Class InteractableComponent*                                 Interactable;                                      // 0x6e0(0x8)
	Class StaticMeshComponent*                                   LanternGlow;                                       // 0x6e8(0x8)
	Class StaticMeshComponent*                                   Lantern;                                           // 0x6f0(0x8)
	Class StaticMeshComponent*                                   Hook;                                              // 0x6f8(0x8)
	Class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0x700(0x8)
	Class MaterialInstanceDynamic*                               DynamicGlowMaterial;                               // 0x708(0x8)
	struct FName                                                 FlameParameterName;                                // 0x710(0x8)
	struct FName                                                 GlowBrightnessParameterName;                       // 0x718(0x8)
	struct FName                                                 GlowRandomSeedParameterName;                       // 0x720(0x8)
	float                                                        FlameIntensityOn;                                  // 0x728(0x4)
	float                                                        FlameIntensityOff;                                 // 0x72c(0x4)
	float                                                        GlowIntensityOn;                                   // 0x730(0x4)
	float                                                        GlowIntensityOff;                                  // 0x734(0x4)
	bool                                                         Uses Glow;                                         // 0x738(0x1)
	char                                                         pad0x3_SEBR2[0x3];                                 // 0x739(0x3)
	Struct LinearColor                                           DefaultGlowColour;                                 // 0x73c(0x10)
	byte                                                         CurrentFlameOFateType;                             // 0x74c(0x1)
};


}