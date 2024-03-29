#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x88 (Full Size[0x450] - InheritedSize[0x3c8]
class BP_PirateGenerator_LineUpUI_C: public Actor
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3d0(0x8)
	TArray<class BP_PirateGenerator_LineUp_C*>                   Pirates;                                           // 0x3d8(0x10)
	TArray<struct CarouselPirateDesc>                            CarouselPirateDescs;                               // 0x3e8(0x10)
	TArray<bool>                                                 LockedPirates;                                     // 0x3f8(0x10)
	struct RadialCoordinate                                      MinBodyShape;                                      // 0x408(0x8)
	struct RadialCoordinate                                      MaxBodyShape;                                      // 0x410(0x8)
	bool                                                         UseIPG;                                            // 0x418(0x1)
	char                                                         pad0x7_9N9SY[0x7];                                 // 0x419(0x7)
	class AnimationDataStoreAsset*                               AnimationAsset;                                    // 0x420(0x8)
	class UClass*                                                DefaultAnimationSet;                               // 0x428(0x8)
	class CarouselPirateGeneratorParamsAsset*                    PirateGeneratorParams;                             // 0x430(0x8)
	int                                                          NumberOfPiratesCurrentlyGenerating;                // 0x438(0x4)
	char                                                         pad0x4_5PWFG[0x4];                                 // 0x43c(0x4)
	char                                                         pad0x10_K37NS[0x10];                               // 0x440(0x10)
};


