// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct AIGoalMovementModeFilter
{
public:
	TArray<Byte DisallowedMovementModes>                         DisallowedMovementModes;                           // 0x0(0x10)
	TArray<Byte DisallowedCustomMovementModes>                   DisallowedCustomMovementModes;                     // 0x10(0x10)
};


// Size 0x8
struct EventAIGoalHighPriorityTargetSuggestion
{
public:
	class Actor*                                                 HighPriorityTarget;                                // 0x0(0x8)
};


// Size 0x18
struct EventAIGoalTargetActorChanged
{
public:
	class Actor*                                                 PreviousTargetActor;                               // 0x0(0x8)
	class Actor*                                                 NewTargetActor;                                    // 0x8(0x8)
	byte                                                         TargetChangedReason;                               // 0x10(0x1)
	byte                                                         InvalidMovementMode;                               // 0x11(0x1)
	char                                                         pad0x6_TM6Y7[0x6];                                 // 0x12(0x6)
};


}