namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x79
class BP_InteractableRowboatLantern_C: public InteractableLight
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x5d0(0x8)
	Class StaticMeshComponent*                         LanternGlow                                        // 0x5d8(0x8)
	Class StaticMeshComponent*                         Lantern                                            // 0x5e0(0x8)
	Class StaticMeshComponent*                         Hook                                               // 0x5e8(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x5f0(0x8)
	Class MaterialInstanceDynamic*                     DynamicGlowMaterial                                // 0x5f8(0x8)
	struct FName                                       GlowBrightnessParameterName                        // 0x600(0x8)
	struct FName                                       GlowRandomSeedParameterName                        // 0x608(0x8)
	float                                              GlowIntensityOn                                    // 0x610(0x4)
	float                                              GlowIntensityOff                                   // 0x614(0x4)
	bool                                               UsesGlow                                           // 0x618(0x1)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0x620(0x8)
	struct FName                                       FlameParameterName                                 // 0x628(0x8)
	float                                              FlameIntensityOn                                   // 0x630(0x4)
	float                                              FlameIntensityOff                                  // 0x634(0x4)
	Struct LinearColor                                 DefaultGlowColour                                  // 0x638(0x10)
	byte                                               CurrentFlameOfFateType                             // 0x648(0x1)
};


}