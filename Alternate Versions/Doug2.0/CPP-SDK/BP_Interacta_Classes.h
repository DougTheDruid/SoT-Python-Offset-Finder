namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x71
class BP_InteractableShipRailingLight_C: public ShipInteractableLight
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x6e0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x6e8(0x8)
	Class StaticMeshComponent*                         LanternGlow                                        // 0x6f0(0x8)
	Class StaticMeshComponent*                         Light                                              // 0x6f8(0x8)
	Class MaterialInstanceDynamic*                     DynamicGlowMaterial                                // 0x700(0x8)
	struct FName                                       GlowBrightnessParameterName                        // 0x708(0x8)
	struct FName                                       GlowRandomSeedParameterName                        // 0x710(0x8)
	float                                              GlowIntensityOn                                    // 0x718(0x4)
	float                                              GlowIntensityOff                                   // 0x71c(0x4)
	bool                                               UsesGlow                                           // 0x720(0x1)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0x728(0x8)
	struct FName                                       FlameParameterName                                 // 0x730(0x8)
	float                                              FlameIntensityOn                                   // 0x738(0x4)
	float                                              FlameIntensityOff                                  // 0x73c(0x4)
	Struct LinearColor                                 DefaultGlowColour                                  // 0x740(0x10)
	byte                                               CurrentFlameOfFateType                             // 0x750(0x1)
};


// Size 0x75
class BP_InteractableShipLantern_C: public ShipInteractableLight
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x6e0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x6e8(0x8)
	Class StaticMeshComponent*                         LanternGlow                                        // 0x6f0(0x8)
	Class StaticMeshComponent*                         Lantern                                            // 0x6f8(0x8)
	Class StaticMeshComponent*                         Hook                                               // 0x700(0x8)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0x708(0x8)
	Class MaterialInstanceDynamic*                     DynamicGlowMaterial                                // 0x710(0x8)
	struct FName                                       FlameParameterName                                 // 0x718(0x8)
	struct FName                                       GlowBrightnessParameterName                        // 0x720(0x8)
	struct FName                                       GlowRandomSeedParameterName                        // 0x728(0x8)
	float                                              FlameIntensityOn                                   // 0x730(0x4)
	float                                              FlameIntensityOff                                  // 0x734(0x4)
	float                                              GlowIntensityOn                                    // 0x738(0x4)
	float                                              GlowIntensityOff                                   // 0x73c(0x4)
	bool                                               Uses Glow                                          // 0x740(0x1)
	Struct LinearColor                                 DefaultGlowColour                                  // 0x744(0x10)
	byte                                               CurrentFlameOFateType                              // 0x754(0x1)
};


}