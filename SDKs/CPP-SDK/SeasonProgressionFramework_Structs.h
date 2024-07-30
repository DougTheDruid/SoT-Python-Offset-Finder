#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x24
struct LevelCompletionEvent
{
public:
	struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	int                                                          Level;                                             // 0x10(0x4)
	int                                                          TimeSpentInLevel;                                  // 0x14(0x4)
	int                                                          Tier;                                              // 0x18(0x4)
	int                                                          TimeSpentInTier;                                   // 0x1c(0x4)
	bool                                                         TierCompleted;                                     // 0x20(0x1)
	bool                                                         SeasonCompleted;                                   // 0x21(0x1)
};


// Size 0xe0
struct TrackedObjectiveProgressUpdateMessage
{
public:
	struct Guid                                                  ObjectiveId;                                       // 0x0(0x10)
	struct PirateIdentity                                        PirateIdentity;                                    // 0x10(0x78)
	struct PlayerBaseTelemetryFragment                           PlayerInfo;                                        // 0x88(0x48)
	char                                                         PlayMode;                                          // 0xd0(0x1)
	char                                                         PlayModeVariant;                                   // 0xd1(0x1)
	int                                                          Value;                                             // 0xd4(0x4)
	double                                                       CreatedAt;                                         // 0xd8(0x8)
};


// Size 0x1
struct SeasonPopupAssetLoadCompleted
{
public:
	bool                                                         LoadSuccessful;                                    // 0x0(0x1)
};


// Size 0x30
struct LevelProgressionEvent
{
public:
	struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	struct Guid                                                  SourceGoalId;                                      // 0x10(0x10)
	int                                                          XpChange;                                          // 0x20(0x4)
	int                                                          CurrentXP;                                         // 0x24(0x4)
	int                                                          CurrentTier;                                       // 0x28(0x4)
	int                                                          CurrentLevel;                                      // 0x2c(0x4)
};


// Size 0x34
struct SeasonGoalCompletionEvent
{
public:
	struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	struct Guid                                                  GoalId;                                            // 0x10(0x10)
	char                                                         GoalType;                                          // 0x20(0x1)
	struct Guid                                                  GoalGroupId;                                       // 0x24(0x10)
};


// Size 0xe0
struct TrackedObjectiveCompletionMessage
{
public:
	struct Guid                                                  ObjectiveId;                                       // 0x0(0x10)
	struct PirateIdentity                                        PirateIdentity;                                    // 0x10(0x78)
	struct PlayerBaseTelemetryFragment                           PlayerInfo;                                        // 0x88(0x48)
	char                                                         PlayMode;                                          // 0xd0(0x1)
	char                                                         PlayModeVariant;                                   // 0xd1(0x1)
	double                                                       CreatedAt;                                         // 0xd8(0x8)
};


// Size 0x10
struct PlayerTrackedObjective
{
public:
	struct Guid                                                  ObjectiveId;                                       // 0x0(0x10)
};


// Size 0x40
struct SeasonGoalProgressionEvent
{
public:
	int                                                          PreviousProgress;                                  // 0x0(0x4)
	int                                                          CurrentProgress;                                   // 0x4(0x4)
	int                                                          CompletionThreshold;                               // 0x8(0x4)
	struct Guid                                                  SeasonId;                                          // 0xc(0x10)
	struct Guid                                                  GoalId;                                            // 0x1c(0x10)
	char                                                         GoalType;                                          // 0x2c(0x1)
	struct Guid                                                  GoalGroupId;                                       // 0x30(0x10)
};


// Size 0x20
struct SeasonReward
{
public:
	struct Guid                                                  Id;                                                // 0x0(0x10)
	int64                                                        Tier;                                              // 0x10(0x8)
	int64                                                        Level;                                             // 0x18(0x8)
};


// Size 0x28
struct SeasonRewardEarnedEvent
{
public:
	struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	bool                                                         MultipleRewards;                                   // 0x10(0x1)
	TArray<struct SeasonReward>                                  Rewards;                                           // 0x18(0x10)
};


