// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct PlayerTrackedObjective
{
public:
	Struct Guid                                                  ObjectiveId;                                       // 0x0(0x10)
};


// Size 0x20
struct SeasonReward
{
public:
	Struct Guid                                                  Id;                                                // 0x0(0x10)
};


// Size 0x1
struct SeasonServiceDataUpdatedEvent
{
public:
};


// Size 0x28
struct SeasonRewardEarnedEvent
{
public:
	Struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	bool                                                         MultipleRewards;                                   // 0x10(0x1)
	char                                                         pad0x7_7KO3C[0x7];                                 // 0x11(0x7)
	TArray<Struct SeasonReward>                                  Rewards;                                           // 0x18(0x10)
};


// Size 0x24
struct LevelCompletionEvent
{
public:
	Struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	int                                                          Level;                                             // 0x10(0x4)
	int                                                          TimeSpentInLevel;                                  // 0x14(0x4)
	int                                                          Tier;                                              // 0x18(0x4)
	int                                                          TimeSpentInTier;                                   // 0x1c(0x4)
	bool                                                         TierCompleted;                                     // 0x20(0x1)
	bool                                                         SeasonCompleted;                                   // 0x21(0x1)
};


// Size 0x30
struct LevelProgressionEvent
{
public:
	Struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	Struct Guid                                                  SourceGoalId;                                      // 0x10(0x10)
	int                                                          XpChange;                                          // 0x20(0x4)
	int                                                          CurrentXP;                                         // 0x24(0x4)
	int                                                          CurrentTier;                                       // 0x28(0x4)
	int                                                          CurrentLevel;                                      // 0x2c(0x4)
};


// Size 0x34
struct SeasonGoalCompletionEvent
{
public:
	Struct Guid                                                  SeasonId;                                          // 0x0(0x10)
	Struct Guid                                                  GoalId;                                            // 0x10(0x10)
	byte                                                         GoalType;                                          // 0x20(0x1)
	char                                                         pad0x3_JU9F4[0x3];                                 // 0x21(0x3)
	Struct Guid                                                  GoalGroupId;                                       // 0x24(0x10)
};


// Size 0x40
struct SeasonGoalProgressionEvent
{
public:
	int                                                          PreviousProgress;                                  // 0x0(0x4)
	int                                                          CurrentProgress;                                   // 0x4(0x4)
	int                                                          CompletionThreshold;                               // 0x8(0x4)
	Struct Guid                                                  SeasonId;                                          // 0xc(0x10)
	Struct Guid                                                  GoalId;                                            // 0x1c(0x10)
	byte                                                         GoalType;                                          // 0x2c(0x1)
	char                                                         pad0x3_90O87[0x3];                                 // 0x2d(0x3)
	Struct Guid                                                  GoalGroupId;                                       // 0x30(0x10)
};


// Size 0xe0
struct TrackedObjectiveCompletionMessage
{
public:
	Struct Guid                                                  ObjectiveId;                                       // 0x0(0x10)
	Struct PirateIdentity                                        PirateIdentity;                                    // 0x10(0x78)
	Struct PlayerBaseTelemetryFragment                           PlayerInfo;                                        // 0x88(0x48)
	byte                                                         PlayMode;                                          // 0xd0(0x1)
	byte                                                         PlayModeVariant;                                   // 0xd1(0x1)
	char                                                         pad0x6_LFKMS[0x6];                                 // 0xd2(0x6)
	double                                                       CreatedAt;                                         // 0xd8(0x8)
};


// Size 0xe0
struct TrackedObjectiveProgressUpdateMessage
{
public:
	Struct Guid                                                  ObjectiveId;                                       // 0x0(0x10)
	Struct PirateIdentity                                        PirateIdentity;                                    // 0x10(0x78)
	Struct PlayerBaseTelemetryFragment                           PlayerInfo;                                        // 0x88(0x48)
	byte                                                         PlayMode;                                          // 0xd0(0x1)
	byte                                                         PlayModeVariant;                                   // 0xd1(0x1)
	char                                                         pad0x2_FQQ7Y[0x2];                                 // 0xd2(0x2)
	int                                                          Value;                                             // 0xd4(0x4)
	double                                                       CreatedAt;                                         // 0xd8(0x8)
};


// Size 0x18
struct TrackedObjectiveEvent
{
public:
};


}