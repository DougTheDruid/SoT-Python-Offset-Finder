// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AIGoal: public Object
{
public:
	Class BehaviorTree*                                          BehaviorTree;                                      // 0x28(0x8)
	char                                                         pad0x8_100OE[0x8];                                 // 0x30(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AIGoalAssetList: public DataAsset
{
public:
	TArray<class AIGoal*>                                        GoalTemplates;                                     // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIGoalProcessorInterface: public Interface
{
public:
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class AIGoalProcessorComponent: public ActorComponent
{
public:
	char                                                         pad0x8_8YRP8[0x8];                                 // 0xc8(0x8)
	TArray<class AIGoal*>                                        Goals;                                             // 0xd0(0x10)
	Class AIGoalAssetList*                                       AIGoalAssetList;                                   // 0xe0(0x8)
	Class AIGoal*                                                ActiveGoal;                                        // 0xe8(0x8)
	TArray<class AIGoalAssetList*>                               AdditionalGoalLists;                               // 0xf0(0x10)
	char                                                         pad0x28_VPRMX[0x28];                               // 0x100(0x28)
};


// Size 0x0 (Full Size[0x128] - InheritedSize[0x128]
class FirstActionableAIGoalProcessorComponent: public AIGoalProcessorComponent
{
public:
};


}