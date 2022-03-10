namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x230
class GameplayDebuggingComponent: public PrimitiveComponent
{
public:
	Struct FString                                     DebugComponentClassName                            // 0x5b0(0x10)
	int                                                ShowExtendedInformatiomCounter                     // 0x5c0(0x4)
	TArray<Int >                                       ReplicateViewDataCounters                          // 0x5c8(0x10)
	Struct FString                                     ControllerName                                     // 0x5d8(0x10)
	Struct FString                                     PawnName                                           // 0x5e8(0x10)
	Struct FString                                     PawnClass                                          // 0x5f8(0x10)
	Struct FString                                     DebugIcon                                          // 0x608(0x10)
	Struct FString                                     MovementBaseInfo                                   // 0x618(0x10)
	Struct FString                                     MovementModeInfo                                   // 0x628(0x10)
	Struct FString                                     PathFollowingInfo                                  // 0x638(0x10)
	Struct FString                                     CurrentAITask                                      // 0x648(0x10)
	Struct FString                                     CurrentAIState                                     // 0x658(0x10)
	Struct FString                                     CurrentAIAssets                                    // 0x668(0x10)
	Struct FString                                     GameplayTasksState                                 // 0x678(0x10)
	Struct FString                                     NavDataInfo                                        // 0x688(0x10)
	Struct FString                                     AbilityInfo                                        // 0x698(0x10)
	Struct FString                                     MontageInfo                                        // 0x6a8(0x10)
	Struct FString                                     BrainComponentName                                 // 0x6b8(0x10)
	Struct FString                                     BrainComponentString                               // 0x6c8(0x10)
	TArray<Byte BrainComponentString>                  BlackboardRepData                                  // 0x6d8(0x10)
	TArray<Struct BlackboardRepData>                   PathPoints                                         // 0x6f8(0x10)
	TArray<Byte PathPoints>                            PathCorridorData                                   // 0x708(0x10)
	TArray<Byte PathCorridorData>                      NavmeshRepData                                     // 0x728(0x10)
	TArray<Byte NavmeshRepData>                        EQSRepData                                         // 0x738(0x10)
	Struct Vector                                      SensingComponentLocation                           // 0x748(0xc)
	int                                                NextPathPointIndex                                 // 0x754(0x4)
	bool                                               bIsUsingPathFollowing                              // 0x758(0x1)
	bool                                               bIsUsingCharacter                                  // 0x758(0x1)
	bool                                               bIsUsingBehaviorTree                               // 0x758(0x1)
	bool                                               bIsUsingAbilities                                  // 0x758(0x1)
	Class Actor*                                       TargetActor                                        // 0x760(0x8)
};


// Size 0xf0
class GameplayDebuggingHUDComponent: public Actor
{
public:
	float                                              MenuStartX                                         // 0x3d0(0x4)
	float                                              MenuStartY                                         // 0x3d4(0x4)
	float                                              DebugInfoStartX                                    // 0x3d8(0x4)
	float                                              DebugInfoStartY                                    // 0x3dc(0x4)
	Class Canvas*                                      Canvas                                             // 0x3e0(0x8)
	Class PlayerController*                            PlayerOwner                                        // 0x3e8(0x8)
};


// Size 0x80
class GameplayDebuggerSettings: public Object
{
public:
	Struct GDTCustomViewNames                          CustomViewNames                                    // 0x28(0x50)
	bool                                               OverHead                                           // 0x78(0x1)
	bool                                               Basic                                              // 0x79(0x1)
	bool                                               BehaviorTree                                       // 0x7a(0x1)
	bool                                               EQS                                                // 0x7b(0x1)
	bool                                               EnableEQSOnHUD                                     // 0x7c(0x1)
	int                                                ActiveEQSIndex                                     // 0x80(0x4)
	bool                                               Perception                                         // 0x84(0x1)
	bool                                               GameView1                                          // 0x85(0x1)
	bool                                               GameView2                                          // 0x86(0x1)
	bool                                               GameView3                                          // 0x87(0x1)
	bool                                               GameView4                                          // 0x88(0x1)
	bool                                               GameView5                                          // 0x89(0x1)
};


// Size 0x2a0
class GameplayDebuggingControllerComponent: public ActorComponent
{
public:
	Class GameplayDebuggingHUDComponent*               OnDebugAIHUD                                       // 0xc8(0x8)
	Class Actor*                                       DebugAITargetActor                                 // 0xd0(0x8)
	Class InputComponent*                              AIDebugViewInputComponent                          // 0xd8(0x8)
	Class InputComponent*                              DebugCameraInputComponent                          // 0xe0(0x8)
	Struct InputChord                                  ActivationKey                                      // 0x110(0x28)
	Struct InputChord                                  CategoryZeroBind                                   // 0x138(0x28)
	Struct InputChord                                  CategoryOneBind                                    // 0x160(0x28)
	Struct InputChord                                  CategoryTwoBind                                    // 0x188(0x28)
	Struct InputChord                                  CategoryThreeBind                                  // 0x1b0(0x28)
	Struct InputChord                                  CategoryFourBind                                   // 0x1d8(0x28)
	Struct InputChord                                  CategoryFiveBind                                   // 0x200(0x28)
	Struct InputChord                                  CategorySixBind                                    // 0x228(0x28)
	Struct InputChord                                  CategorySevenBind                                  // 0x250(0x28)
	Struct InputChord                                  CategoryEightBind                                  // 0x278(0x28)
	Struct InputChord                                  CategoryNineBind                                   // 0x2a0(0x28)
	Struct InputChord                                  CycleDetailsViewBind                               // 0x2c8(0x28)
	Struct InputChord                                  DebugCameraBind                                    // 0x2f0(0x28)
	Struct InputChord                                  OnScreenDebugMessagesBind                          // 0x318(0x28)
	Struct InputChord                                  GameHUDBind                                        // 0x340(0x28)
};


// Size 0x30
class GaneplayDebuggerProxyHUD: public HUD
{
public:
};


// Size 0xb0
class GameplayDebuggingReplicator: public Actor
{
public:
	Struct FString                                     DebugComponentClassName                            // 0x3d0(0x10)
	Struct FString                                     DebugComponentHUDClassName                         // 0x3e0(0x10)
	Struct FString                                     DebugComponentControllerClassName                  // 0x3f0(0x10)
	int                                                MaxEQSQueries                                      // 0x400(0x4)
	Class GameplayDebuggingComponent*                  DebugComponent                                     // 0x408(0x8)
	Class PlayerController*                            LocalPlayerOwner                                   // 0x410(0x8)
	Class Actor*                                       LastSelectedActorToDebug                           // 0x418(0x8)
	bool                                               bIsGlobalInWorld                                   // 0x420(0x1)
	bool                                               bAutoActivate                                      // 0x421(0x1)
	bool                                               OverHead                                           // 0x422(0x1)
	bool                                               Basic                                              // 0x423(0x1)
	bool                                               BehaviorTree                                       // 0x424(0x1)
	bool                                               EQS                                                // 0x425(0x1)
	bool                                               EnableEQSOnHUD                                     // 0x426(0x1)
	int                                                ActiveEQSIndex                                     // 0x428(0x4)
	bool                                               Perception                                         // 0x42c(0x1)
	bool                                               GameView1                                          // 0x42d(0x1)
	bool                                               GameView2                                          // 0x42e(0x1)
	bool                                               GameView3                                          // 0x42f(0x1)
	bool                                               GameView4                                          // 0x430(0x1)
	bool                                               GameView5                                          // 0x431(0x1)
};


}