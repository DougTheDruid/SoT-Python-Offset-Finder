// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xd0 (Full Size[0x588] - InheritedSize[0x4b8]
class GoalDrivenAIController: public AIController
{
public:
	char                                                         pad0xd0_GXWTT[0xd0];                               // 0x4b8(0xd0)
};


// Size 0x10 (Full Size[0x610] - InheritedSize[0x600]
class GoalDrivenCharacter: public CharacterWithActionStateMachine
{
public:
	char                                                         pad0x10_7KI8T[0x10];                               // 0x600(0x10)
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class GoalDrivenCharacterAggregationComponent: public ActorComponent
{
public:
	char                                                         pad0x30_XJCFL[0x30];                               // 0xc8(0x30)
};


// Size 0x0 (Full Size[0x440] - InheritedSize[0x440]
class GoalDrivenCharacterAnimInstance: public AnimInstance
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GoalDrivenCharacterDockingPolicyDefinition: public DockingPolicyDefinition
{
public:
};


// Size 0x70 (Full Size[0x600] - InheritedSize[0x590]
class GoalDrivenCharacterMovementComponent: public CharacterMovementComponent
{
public:
	char                                                         pad0x10_ELUJ0[0x10];                               // 0x590(0x10)
	bool                                                         CreateDisturbance;                                 // 0x5a0(0x1)
	char                                                         pad0x3_RXRC3[0x3];                                 // 0x5a1(0x3)
	float                                                        DisturbanceSize;                                   // 0x5a4(0x4)
	float                                                        DisturbanceVelocityScale;                          // 0x5a8(0x4)
	bool                                                         AdjustMeshPositionOnClient;                        // 0x5ac(0x1)
	char                                                         pad0x3_RYRLF[0x3];                                 // 0x5ad(0x3)
	float                                                        MeshAdjustmentMaximumDistance;                     // 0x5b0(0x4)
	float                                                        MeshAdjustmentInterpolationRate;                   // 0x5b4(0x4)
	float                                                        DesiredWalkSpeed;                                  // 0x5b8(0x4)
	float                                                        DesiredRunSpeed;                                   // 0x5bc(0x4)
	float                                                        MinimumMovementSpeedForRunAnimation;               // 0x5c0(0x4)
	float                                                        MinimumDistanceFromTargetToRun;                    // 0x5c4(0x4)
	char                                                         pad0x38_1CCIG[0x38];                               // 0x5c8(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GoalDrivenCharacterWithRotationOverrideDockingPolicyDefinition: public DockingPolicyDefinition
{
public:
};


// Size 0x10 (Full Size[0x2c8] - InheritedSize[0x2b8]
class GoalDrivenPathFollowingComponent: public PathFollowingComponent
{
public:
	float                                                        ReachedGoalMaxSpeedToSlowDistanceFactor;           // 0x2b8(0x4)
	float                                                        MinSlowDownSpeed;                                  // 0x2bc(0x4)
	char                                                         pad0x8_ZL39Y[0x8];                                 // 0x2c0(0x8)
};


}