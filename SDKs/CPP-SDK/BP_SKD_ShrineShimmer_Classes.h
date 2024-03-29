#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x49 (Full Size[0x4b9] - InheritedSize[0x470]
class BP_SKD_ShrineShimmer_C: public ShimmerActor
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x470(0x8)
	class StaticMeshComponent*                                   surface_bio_lum;                                   // 0x478(0x8)
	class StaticMeshComponent*                                   volume_glow;                                       // 0x480(0x8)
	class StaticMeshComponent*                                   shimmer_water_00;                                  // 0x488(0x8)
	class StaticMeshComponent*                                   shimmer_air_01;                                    // 0x490(0x8)
	class StaticMeshComponent*                                   shimmer_air_00;                                    // 0x498(0x8)
	class SceneComponent*                                        SharedRoot;                                        // 0x4a0(0x8)
	float                                                        FadeCurve_Opacity_D7ECDDBE4184BCE83B3BD58190CD98C7; // 0x4a8(0x4)
	char                                                         FadeCurve__Direction_D7ECDDBE4184BCE83B3BD58190CD98C7; // 0x4ac(0x1)
	char                                                         pad0x3_KG7KZ[0x3];                                 // 0x4ad(0x3)
	class TimelineComponent*                                     FadeCurve;                                         // 0x4b0(0x8)
	bool                                                         ShimmerIsVisible;                                  // 0x4b8(0x1)
};


