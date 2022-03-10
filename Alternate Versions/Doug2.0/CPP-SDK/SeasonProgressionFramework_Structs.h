namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class PlayerTrackedObjective: public None
{
public:
	Struct Guid                                        ObjectiveId                                        // 0x0(0x10)
};


// Size 0x20
class SeasonReward: public None
{
public:
	Struct Guid                                        Id                                                 // 0x0(0x10)
};


// Size 0x1
class SeasonServiceDataUpdatedEvent: public None
{
public:
};


// Size 0x28
class SeasonRewardEarnedEvent: public None
{
public:
	Struct Guid                                        SeasonId                                           // 0x0(0x10)
	bool                                               MultipleRewards                                    // 0x10(0x1)
	TArray<Struct MultipleRewards>                     Rewards                                            // 0x18(0x10)
};


// Size 0x24
class LevelCompletionEvent: public None
{
public:
	Struct Guid                                        SeasonId                                           // 0x0(0x10)
	int                                                Level                                              // 0x10(0x4)
	int                                                TimeSpentInLevel                                   // 0x14(0x4)
	int                                                Tier                                               // 0x18(0x4)
	int                                                TimeSpentInTier                                    // 0x1c(0x4)
	bool                                               TierCompleted                                      // 0x20(0x1)
	bool                                               SeasonCompleted                                    // 0x21(0x1)
};


// Size 0x30
class LevelProgressionEvent: public None
{
public:
	Struct Guid                                        SeasonId                                           // 0x0(0x10)
	Struct Guid                                        SourceGoalId                                       // 0x10(0x10)
	int                                                XpChange                                           // 0x20(0x4)
	int                                                CurrentXP                                          // 0x24(0x4)
	int                                                CurrentTier                                        // 0x28(0x4)
	int                                                CurrentLevel                                       // 0x2c(0x4)
};


// Size 0x34
class SeasonGoalCompletionEvent: public None
{
public:
	Struct Guid                                        SeasonId                                           // 0x0(0x10)
	Struct Guid                                        GoalId                                             // 0x10(0x10)
	byte                                               GoalType                                           // 0x20(0x1)
	Struct Guid                                        GoalGroupId                                        // 0x24(0x10)
};


// Size 0x40
class SeasonGoalProgressionEvent: public None
{
public:
	int                                                PreviousProgress                                   // 0x0(0x4)
	int                                                CurrentProgress                                    // 0x4(0x4)
	int                                                CompletionThreshold                                // 0x8(0x4)
	Struct Guid                                        SeasonId                                           // 0xc(0x10)
	Struct Guid                                        GoalId                                             // 0x1c(0x10)
	byte                                               GoalType                                           // 0x2c(0x1)
	Struct Guid                                        GoalGroupId                                        // 0x30(0x10)
};


// Size 0xe0
class TrackedObjectiveCompletionMessage: public None
{
public:
	Struct Guid                                        ObjectiveId                                        // 0x0(0x10)
	Struct PirateIdentity                              PirateIdentity                                     // 0x10(0x78)
	Struct PlayerBaseTelemetryFragment                 PlayerInfo                                         // 0x88(0x48)
	byte                                               PlayMode                                           // 0xd0(0x1)
	byte                                               PlayModeVariant                                    // 0xd1(0x1)
	double                                             CreatedAt                                          // 0xd8(0x8)
};


// Size 0xe0
class TrackedObjectiveProgressUpdateMessage: public None
{
public:
	Struct Guid                                        ObjectiveId                                        // 0x0(0x10)
	Struct PirateIdentity                              PirateIdentity                                     // 0x10(0x78)
	Struct PlayerBaseTelemetryFragment                 PlayerInfo                                         // 0x88(0x48)
	byte                                               PlayMode                                           // 0xd0(0x1)
	byte                                               PlayModeVariant                                    // 0xd1(0x1)
	int                                                Value                                              // 0xd4(0x4)
	double                                             CreatedAt                                          // 0xd8(0x8)
};


// Size 0x18
class TrackedObjectiveEvent: public None
{
public:
};


}