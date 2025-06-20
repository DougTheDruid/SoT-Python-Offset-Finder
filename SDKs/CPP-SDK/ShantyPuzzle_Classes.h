#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "ShantyPuzzle_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShantyPuzzleInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0xf8] - InheritedSize[0xb8]
class ShantyPuzzleCompletionComponent: public ActorComponent
{
public:
	float                                                        CompletionTime;                                    // 0xb8(0x4)
	char                                                         pad0x4_N2OA8[0x4];                                 // 0xbc(0x4)
	TArray<struct LandmarkReactionKeyFrame>                      StartCompletionReaction;                           // 0xc0(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      AbortCompletionReaction;                           // 0xd0(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      PuzzleCompletedReaction;                           // 0xe0(0x10)
	class LandmarkReactionPlayer*                                ReactionPlayer;                                    // 0xf0(0x8)
};


// Size 0x110 (Full Size[0x3e0] - InheritedSize[0x2d0]
class ShantyPuzzleComponent: public SceneComponent
{
public:
	char                                                         pad0x8_19TM3[0x8];                                 // 0x2d0(0x8)
	class UClass*                                                RequiredShantyItemDesc;                            // 0x2d8(0x8)
	TArray<struct ShantyPuzzleInteractionZoneDefinition>         ShantyPuzzleInteractionZoneDefinitions;            // 0x2e0(0x10)
	bool                                                         TimeLimited;                                       // 0x2f0(0x1)
	bool                                                         ShouldMoveEnsembleToActorPosition;                 // 0x2f1(0x1)
	char                                                         pad0x6_DJNUG[0x6];                                 // 0x2f2(0x6)
	struct GameTimeRange                                         ActiveTimeRange;                                   // 0x2f8(0x10)
	TArray<class ShantyPuzzleInteractionZoneComponent*>          ShantyPuzzleInteractionZones;                      // 0x308(0x10)
	class Ensemble*                                              CurrentlyPlayingShantyPuzzleEnsemble;              // 0x318(0x8)
	char                                                         pad0xc0_88BQL[0xc0];                               // 0x320(0xc0)
};


// Size 0x20 (Full Size[0x5e0] - InheritedSize[0x5c0]
class ShantyPuzzleInteractionZoneComponent: public SphereComponent
{
public:
	char                                                         pad0x20_ZY30K[0x20];                               // 0x5c0(0x20)
};


