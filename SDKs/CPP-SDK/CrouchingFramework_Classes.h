#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class CrouchDataAsset: public DataAsset
{
public:
	float                                                        PostCrouchResetTime;                               // 0x28(0x4)
	float                                                        PostCrouchStealthModeResetTime;                    // 0x2c(0x4)
	float                                                        ProjectileCapsuleZModifierWhenCrouching;           // 0x30(0x4)
	class MaterialInterface*                                     CrouchVignette;                                    // 0x38(0x8)
	float                                                        MaxAnimValue;                                      // 0x40(0x4)
	float                                                        BlurStrength;                                      // 0x44(0x4)
	float                                                        VignetteStrength;                                  // 0x48(0x4)
	float                                                        VignetteSpeedModifier;                             // 0x4c(0x4)
};


