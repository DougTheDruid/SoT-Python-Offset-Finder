// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x71 (Full Size[0x749] - InheritedSize[0x6d8]
class BP_InteractableShipRailingLight_C: public ShipInteractableLight
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x6d8(0x8)
	Class InteractableComponent*                                 Interactable;                                      // 0x6e0(0x8)
	Class StaticMeshComponent*                                   LanternGlow;                                       // 0x6e8(0x8)
	Class StaticMeshComponent*                                   Light;                                             // 0x6f0(0x8)
	Class MaterialInstanceDynamic*                               DynamicGlowMaterial;                               // 0x6f8(0x8)
	struct FName                                                 GlowBrightnessParameterName;                       // 0x700(0x8)
	struct FName                                                 GlowRandomSeedParameterName;                       // 0x708(0x8)
	float                                                        GlowIntensityOn;                                   // 0x710(0x4)
	float                                                        GlowIntensityOff;                                  // 0x714(0x4)
	bool                                                         UsesGlow;                                          // 0x718(0x1)
	char                                                         pad0x7_AEKZQ[0x7];                                 // 0x719(0x7)
	Class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0x720(0x8)
	struct FName                                                 FlameParameterName;                                // 0x728(0x8)
	float                                                        FlameIntensityOn;                                  // 0x730(0x4)
	float                                                        FlameIntensityOff;                                 // 0x734(0x4)
	Struct LinearColor                                           DefaultGlowColour;                                 // 0x738(0x10)
	byte                                                         CurrentFlameOfFateType;                            // 0x748(0x1)
};


}