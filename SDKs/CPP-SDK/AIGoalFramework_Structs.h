#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

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
	char                                                         TargetChangedReason;                               // 0x10(0x1)
	char                                                         InvalidMovementMode;                               // 0x11(0x1)
};


// Size 0x20
struct AIGoalMovementModeFilter
{
public:
	TArray<char>                                                 DisallowedMovementModes;                           // 0x0(0x10)
	TArray<char>                                                 DisallowedCustomMovementModes;                     // 0x10(0x10)
};


