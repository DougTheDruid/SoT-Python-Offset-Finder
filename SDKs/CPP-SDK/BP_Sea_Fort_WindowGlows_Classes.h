#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x41 (Full Size[0x409] - InheritedSize[0x3c8]
class BP_Sea_Fort_WindowGlows_C: public SeaFortDistantLights
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	class StaticMeshComponent*                                   glows;                                             // 0x3d0(0x8)
	class StaticMeshComponent*                                   window_planes;                                     // 0x3d8(0x8)
	class SceneComponent*                                        SharedRoot;                                        // 0x3e0(0x8)
	float                                                        FadeCurve_Fade_F995538E47EE9A6B32A4C3A8CF00537A;   // 0x3e8(0x4)
	char                                                         FadeCurve__Direction_F995538E47EE9A6B32A4C3A8CF00537A; // 0x3ec(0x1)
	char                                                         pad0x3_D2EZ9[0x3];                                 // 0x3ed(0x3)
	class TimelineComponent*                                     FadeCurve;                                         // 0x3f0(0x8)
	class MaterialInstanceDynamic*                               WindowDynamicMaterial;                             // 0x3f8(0x8)
	class MaterialInstanceDynamic*                               GlowDynamicMaterial;                               // 0x400(0x8)
	bool                                                         MaterialsCreated;                                  // 0x408(0x1)
};


