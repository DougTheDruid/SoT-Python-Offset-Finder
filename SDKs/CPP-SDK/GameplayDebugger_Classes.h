#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "GameplayDebugger_Structs.h"


// Size 0x2a0 (Full Size[0x368] - InheritedSize[0xc8]
class GameplayDebuggingControllerComponent: public ActorComponent
{
public:
	class GameplayDebuggingHUDComponent*                         OnDebugAIHUD;                                      // 0xc8(0x8)
	class Actor*                                                 DebugAITargetActor;                                // 0xd0(0x8)
	class InputComponent*                                        AIDebugViewInputComponent;                         // 0xd8(0x8)
	class InputComponent*                                        DebugCameraInputComponent;                         // 0xe0(0x8)
	struct InputChord                                            ActivationKey;                                     // 0x110(0x28)
	struct InputChord                                            CategoryZeroBind;                                  // 0x138(0x28)
	struct InputChord                                            CategoryOneBind;                                   // 0x160(0x28)
	struct InputChord                                            CategoryTwoBind;                                   // 0x188(0x28)
	struct InputChord                                            CategoryThreeBind;                                 // 0x1b0(0x28)
	struct InputChord                                            CategoryFourBind;                                  // 0x1d8(0x28)
	struct InputChord                                            CategoryFiveBind;                                  // 0x200(0x28)
	struct InputChord                                            CategorySixBind;                                   // 0x228(0x28)
	struct InputChord                                            CategorySevenBind;                                 // 0x250(0x28)
	struct InputChord                                            CategoryEightBind;                                 // 0x278(0x28)
	struct InputChord                                            CategoryNineBind;                                  // 0x2a0(0x28)
	struct InputChord                                            CycleDetailsViewBind;                              // 0x2c8(0x28)
	struct InputChord                                            DebugCameraBind;                                   // 0x2f0(0x28)
	struct InputChord                                            OnScreenDebugMessagesBind;                         // 0x318(0x28)
	struct InputChord                                            GameHUDBind;                                       // 0x340(0x28)
};


// Size 0x230 (Full Size[0x800] - InheritedSize[0x5d0]
class GameplayDebuggingComponent: public PrimitiveComponent
{
public:
	struct FString                                               DebugComponentClassName;                           // 0x5d0(0x10)
	int                                                          ShowExtendedInformatiomCounter;                    // 0x5e0(0x4)
	TArray<int>                                                  ReplicateViewDataCounters;                         // 0x5e8(0x10)
	struct FString                                               ControllerName;                                    // 0x5f8(0x10)
	struct FString                                               PawnName;                                          // 0x608(0x10)
	struct FString                                               PawnClass;                                         // 0x618(0x10)
	struct FString                                               DebugIcon;                                         // 0x628(0x10)
	struct FString                                               MovementBaseInfo;                                  // 0x638(0x10)
	struct FString                                               MovementModeInfo;                                  // 0x648(0x10)
	struct FString                                               PathFollowingInfo;                                 // 0x658(0x10)
	struct FString                                               CurrentAITask;                                     // 0x668(0x10)
	struct FString                                               CurrentAIState;                                    // 0x678(0x10)
	struct FString                                               CurrentAIAssets;                                   // 0x688(0x10)
	struct FString                                               GameplayTasksState;                                // 0x698(0x10)
	struct FString                                               NavDataInfo;                                       // 0x6a8(0x10)
	struct FString                                               AbilityInfo;                                       // 0x6b8(0x10)
	struct FString                                               MontageInfo;                                       // 0x6c8(0x10)
	struct FString                                               BrainComponentName;                                // 0x6d8(0x10)
	struct FString                                               BrainComponentString;                              // 0x6e8(0x10)
	TArray<char>                                                 BlackboardRepData;                                 // 0x6f8(0x10)
	TArray<struct Vector>                                        PathPoints;                                        // 0x718(0x10)
	TArray<char>                                                 PathCorridorData;                                  // 0x728(0x10)
	TArray<char>                                                 NavmeshRepData;                                    // 0x748(0x10)
	TArray<char>                                                 EQSRepData;                                        // 0x758(0x10)
	struct Vector                                                SensingComponentLocation;                          // 0x768(0xc)
	int                                                          NextPathPointIndex;                                // 0x774(0x4)
	bool                                                         bIsUsingPathFollowing;                             // 0x778(0x1)
	bool                                                         bIsUsingCharacter;                                 // 0x778(0x1)
	bool                                                         bIsUsingBehaviorTree;                              // 0x778(0x1)
	bool                                                         bIsUsingAbilities;                                 // 0x778(0x1)
	class Actor*                                                 TargetActor;                                       // 0x780(0x8)
};


// Size 0x80 (Full Size[0xa8] - InheritedSize[0x28]
class GameplayDebuggerSettings: public Object
{
public:
	struct GDTCustomViewNames                                    CustomViewNames;                                   // 0x28(0x50)
	bool                                                         OverHead;                                          // 0x78(0x1)
	bool                                                         Basic;                                             // 0x79(0x1)
	bool                                                         BehaviorTree;                                      // 0x7a(0x1)
	bool                                                         EQS;                                               // 0x7b(0x1)
	bool                                                         EnableEQSOnHUD;                                    // 0x7c(0x1)
	int                                                          ActiveEQSIndex;                                    // 0x80(0x4)
	bool                                                         Perception;                                        // 0x84(0x1)
	bool                                                         GameView1;                                         // 0x85(0x1)
	bool                                                         GameView2;                                         // 0x86(0x1)
	bool                                                         GameView3;                                         // 0x87(0x1)
	bool                                                         GameView4;                                         // 0x88(0x1)
	bool                                                         GameView5;                                         // 0x89(0x1)
};


// Size 0xb0 (Full Size[0x478] - InheritedSize[0x3c8]
class GameplayDebuggingReplicator: public Actor
{
public:
	struct FString                                               DebugComponentClassName;                           // 0x3c8(0x10)
	struct FString                                               DebugComponentHUDClassName;                        // 0x3d8(0x10)
	struct FString                                               DebugComponentControllerClassName;                 // 0x3e8(0x10)
	int                                                          MaxEQSQueries;                                     // 0x3f8(0x4)
	class GameplayDebuggingComponent*                            DebugComponent;                                    // 0x400(0x8)
	class PlayerController*                                      LocalPlayerOwner;                                  // 0x408(0x8)
	class Actor*                                                 LastSelectedActorToDebug;                          // 0x410(0x8)
	bool                                                         bIsGlobalInWorld;                                  // 0x418(0x1)
	bool                                                         bAutoActivate;                                     // 0x419(0x1)
	bool                                                         OverHead;                                          // 0x41a(0x1)
	bool                                                         Basic;                                             // 0x41b(0x1)
	bool                                                         BehaviorTree;                                      // 0x41c(0x1)
	bool                                                         EQS;                                               // 0x41d(0x1)
	bool                                                         EnableEQSOnHUD;                                    // 0x41e(0x1)
	int                                                          ActiveEQSIndex;                                    // 0x420(0x4)
	bool                                                         Perception;                                        // 0x424(0x1)
	bool                                                         GameView1;                                         // 0x425(0x1)
	bool                                                         GameView2;                                         // 0x426(0x1)
	bool                                                         GameView3;                                         // 0x427(0x1)
	bool                                                         GameView4;                                         // 0x428(0x1)
	bool                                                         GameView5;                                         // 0x429(0x1)
};


// Size 0xf0 (Full Size[0x4b8] - InheritedSize[0x3c8]
class GameplayDebuggingHUDComponent: public Actor
{
public:
	float                                                        MenuStartX;                                        // 0x3c8(0x4)
	float                                                        MenuStartY;                                        // 0x3cc(0x4)
	float                                                        DebugInfoStartX;                                   // 0x3d0(0x4)
	float                                                        DebugInfoStartY;                                   // 0x3d4(0x4)
	class Canvas*                                                Canvas;                                            // 0x3d8(0x8)
	class PlayerController*                                      PlayerOwner;                                       // 0x3e0(0x8)
};


