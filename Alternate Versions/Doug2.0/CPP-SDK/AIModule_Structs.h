namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x4
class AIRequestID: public None
{
public:
};


// Size 0x3c
class AIStimulus: public None
{
public:
	float                                              Age                                                // 0x0(0x4)
	float                                              ExpirationAge                                      // 0x4(0x4)
	float                                              Strength                                           // 0x8(0x4)
	Struct Vector                                      StimulusLocation                                   // 0xc(0xc)
	Struct Vector                                      ReceiverLocation                                   // 0x18(0xc)
	struct FName                                       Tag                                                // 0x24(0x8)
	bool                                               bSuccessfullySensed                                // 0x38(0x1)
};


// Size 0x40
class AIMoveRequest: public None
{
public:
	Class Actor*                                       GoalActor                                          // 0x0(0x8)
};


// Size 0x8
class PawnActionStack: public None
{
public:
	Class PawnAction*                                  TopAction                                          // 0x0(0x8)
};


// Size 0x18
class PawnActionEvent: public None
{
public:
	Class PawnAction*                                  Action                                             // 0x0(0x8)
};


// Size 0x28
class BlackboardKeySelector: public None
{
public:
	TArray<class AllowedTypes*>                        AllowedTypes                                       // 0x0(0x10)
	struct FName                                       SelectedKeyName                                    // 0x10(0x8)
	class                                              SelectedKeyType                                    // 0x18(0x8)
	byte                                               SelectedKeyID                                      // 0x20(0x1)
	bool                                               bNoneIsAllowedValue                                // 0x24(0x1)
};


// Size 0x1
class GenericTeamId: public None
{
public:
	byte                                               TeamID                                             // 0x0(0x1)
};


// Size 0x30
class AIDataProviderBoolValue: public None
{
public:
	bool                                               DefaultValue                                       // 0x28(0x1)
};


// Size 0x28
class AIDataProviderTypedValue: public None
{
public:
	class                                              PropertyType                                       // 0x20(0x8)
};


// Size 0x20
class AIDataProviderValue: public None
{
public:
	Class Property*                                    CachedProperty                                     // 0x8(0x8)
	Class AIDataProvider*                              DataBinding                                        // 0x10(0x8)
	struct FName                                       DataField                                          // 0x18(0x8)
};


// Size 0x30
class AIDataProviderFloatValue: public None
{
public:
	float                                              DefaultValue                                       // 0x28(0x4)
};


// Size 0x30
class AIDataProviderIntValue: public None
{
public:
	int                                                DefaultValue                                       // 0x28(0x4)
};


// Size 0x30
class AIDataProviderStructValue: public None
{
public:
};


// Size 0x10
class CustomDataProviderObjectPropertySelector: public None
{
public:
	class                                              ObjectClass                                        // 0x0(0x8)
	struct FName                                       PropertyName                                       // 0x8(0x8)
};


// Size 0xc
class IgnoreActorInfo: public None
{
public:
	float                                              TimeRemaining                                      // 0x8(0x4)
};


// Size 0x4
class AISenseAffiliationFilter: public None
{
public:
	bool                                               bDetectEnemies                                     // 0x0(0x1)
	bool                                               bDetectNeutrals                                    // 0x0(0x1)
	bool                                               bDetectFriendlies                                  // 0x0(0x1)
};


// Size 0x20
class ActorPerceptionBlueprintInfo: public None
{
public:
	Class Actor*                                       Target                                             // 0x0(0x8)
	TArray<Struct Target>                              LastSensedStimuli                                  // 0x8(0x10)
	bool                                               bIsHostile                                         // 0x18(0x1)
};


// Size 0x30
class AIDamageEvent: public None
{
public:
	float                                              Amount                                             // 0x0(0x4)
	Struct Vector                                      Location                                           // 0x4(0xc)
	Struct Vector                                      HitLocation                                        // 0x10(0xc)
	Class Actor*                                       DamagedActor                                       // 0x20(0x8)
	Class Actor*                                       Instigator                                         // 0x28(0x8)
};


// Size 0x30
class AINoiseEvent: public None
{
public:
	Struct Vector                                      NoiseLocation                                      // 0x4(0xc)
	float                                              Loudness                                           // 0x10(0x4)
	float                                              MaxRange                                           // 0x14(0x4)
	Class Actor*                                       Instigator                                         // 0x18(0x8)
	struct FName                                       Tag                                                // 0x20(0x8)
};


// Size 0x18
class AIPredictionEvent: public None
{
public:
	Class Actor*                                       Requestor                                          // 0x0(0x8)
	Class Actor*                                       PredictedActor                                     // 0x8(0x8)
};


// Size 0x18
class AISightEvent: public None
{
public:
	Class Actor*                                       SeenActor                                          // 0x8(0x8)
	Class Actor*                                       Observer                                           // 0x10(0x8)
};


// Size 0x38
class AITeamStimulusEvent: public None
{
public:
	Class Actor*                                       Broadcaster                                        // 0x28(0x8)
	Class Actor*                                       Enemy                                              // 0x30(0x8)
};


// Size 0x20
class AITouchEvent: public None
{
public:
	Class Actor*                                       TouchReceiver                                      // 0x10(0x8)
	Class Actor*                                       OtherActor                                         // 0x18(0x8)
};


// Size 0x30
class BTCompositeChild: public None
{
public:
	Class BTCompositeNode*                             ChildComposite                                     // 0x0(0x8)
	Class BTTaskNode*                                  ChildTask                                          // 0x8(0x8)
	TArray<class Decorators*>                          Decorators                                         // 0x10(0x10)
	TArray<Struct BTDecoratorLogic>                    DecoratorOps                                       // 0x20(0x10)
};


// Size 0x4
class BTDecoratorLogic: public None
{
public:
	byte                                               Operation                                          // 0x0(0x1)
};


// Size 0x18
class BehaviorTreeTemplateInfo: public None
{
public:
	Class BehaviorTree*                                Asset                                              // 0x0(0x8)
	Class BTCompositeNode*                             Template                                           // 0x8(0x8)
};


// Size 0x18
class BlackboardEntry: public None
{
public:
	struct FName                                       EntryName                                          // 0x0(0x8)
	Class BlackboardKeyType*                           KeyType                                            // 0x8(0x8)
	bool                                               bInstanceSynced                                    // 0x10(0x1)
};


// Size 0xc
class EnvBoolParam: public None
{
public:
};


// Size 0xc
class EnvBoolParam_DEPRECATED: public None
{
public:
	bool                                               Value                                              // 0x0(0x1)
	struct FName                                       ParamName                                          // 0x4(0x8)
};


// Size 0xc
class EnvIntParam: public None
{
public:
};


// Size 0xc
class EnvIntParam_DEPRECATED: public None
{
public:
	int                                                Value                                              // 0x0(0x4)
	struct FName                                       ParamName                                          // 0x4(0x8)
};


// Size 0xc
class EnvFloatParam: public None
{
public:
};


// Size 0xc
class EnvFloatParam_DEPRECATED: public None
{
public:
	float                                              Value                                              // 0x0(0x4)
	struct FName                                       ParamName                                          // 0x4(0x8)
};


// Size 0x40
class EnvQueryResult: public None
{
public:
	class                                              ItemType                                           // 0x10(0x8)
	int                                                OptionIndex                                        // 0x2c(0x4)
	int                                                QueryID                                            // 0x30(0x4)
};


// Size 0x40
class EnvTraceData: public None
{
public:
	int                                                VersionNum                                         // 0x0(0x4)
	class                                              NavigationFilter                                   // 0x8(0x8)
	struct FName                                       OverrideNavMesh                                    // 0x10(0x8)
	float                                              ProjectDown                                        // 0x18(0x4)
	float                                              ProjectUp                                          // 0x1c(0x4)
	float                                              ExtentX                                            // 0x20(0x4)
	float                                              ExtentY                                            // 0x24(0x4)
	float                                              ExtentZ                                            // 0x28(0x4)
	float                                              PostProjectionVerticalOffset                       // 0x2c(0x4)
	byte                                               TraceChannel                                       // 0x30(0x1)
	byte                                               SerializedChannel                                  // 0x31(0x1)
	byte                                               TraceShape                                         // 0x32(0x1)
	byte                                               TraceMode                                          // 0x33(0x1)
	bool                                               bTraceComplex                                      // 0x34(0x1)
	bool                                               bOnlyBlockingHits                                  // 0x34(0x1)
	bool                                               bCanTraceOnNavMesh                                 // 0x34(0x1)
	bool                                               bCanTraceOnGeometry                                // 0x34(0x1)
	bool                                               bCanDisableTrace                                   // 0x34(0x1)
	bool                                               bCanProjectDown                                    // 0x34(0x1)
	bool                                               bUseUpDownAsAbsoluteZStartAndEnd                   // 0x38(0x1)
	bool                                               bUseSourceZAsEnd                                   // 0x39(0x1)
};


// Size 0x20
class EnvDirection: public None
{
public:
	class                                              LineFrom                                           // 0x0(0x8)
	class                                              LineTo                                             // 0x8(0x8)
	class                                              Rotation                                           // 0x10(0x8)
	byte                                               DirMode                                            // 0x18(0x1)
};


// Size 0x10
class EnvNamedValue: public None
{
public:
	struct FName                                       ParamName                                          // 0x0(0x8)
	byte                                               ParamType                                          // 0x8(0x1)
	float                                              Value                                              // 0xc(0x4)
};


// Size 0x20
class CrowdAvoidanceSamplingPattern: public None
{
public:
	TArray<Float None>                                 Angles                                             // 0x0(0x10)
	TArray<Float >                                     Radii                                              // 0x10(0x10)
};


// Size 0x1c
class CrowdAvoidanceConfig: public None
{
public:
	float                                              VelocityBias                                       // 0x0(0x4)
	float                                              DesiredVelocityWeight                              // 0x4(0x4)
	float                                              CurrentVelocityWeight                              // 0x8(0x4)
	float                                              SideBiasWeight                                     // 0xc(0x4)
	float                                              ImpactTimeWeight                                   // 0x10(0x4)
	float                                              ImpactTimeRange                                    // 0x14(0x4)
	byte                                               CustomPatternIdx                                   // 0x18(0x1)
	byte                                               AdaptiveDivisions                                  // 0x19(0x1)
	byte                                               AdaptiveRings                                      // 0x1a(0x1)
	byte                                               AdaptiveDepth                                      // 0x1b(0x1)
};


// Size 0x290
class EnvQueryInstanceCache: public None
{
public:
	Class EnvQuery*                                    Template                                           // 0x0(0x8)
};


// Size 0x170
class EnvQueryRequest: public None
{
public:
	Class EnvQuery*                                    QueryTemplate                                      // 0x0(0x8)
	Class Object*                                      Owner                                              // 0x8(0x8)
	Class World*                                       World                                              // 0x10(0x8)
};


}