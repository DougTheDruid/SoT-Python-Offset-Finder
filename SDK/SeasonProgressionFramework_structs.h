#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SeasonProgressionFramework.ETrackedObjectiveType
enum class SeasonProgressionFramework_ETrackedObjectiveType : uint8_t
{
	ETrackedObjectiveType__ProgressUpdate = 0,
	ETrackedObjectiveType__Completion = 1,
	ETrackedObjectiveType__ETrackedObjectiveType_MAX = 2,

};

// Enum SeasonProgressionFramework.ESeasonGoalType
enum class SeasonProgressionFramework_ESeasonGoalType : uint8_t
{
	ESeasonGoalType__Goal          = 0,
	ESeasonGoalType__Challenge     = 1,
	ESeasonGoalType__Individual    = 2,
	ESeasonGoalType__ESeasonGoalType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SeasonProgressionFramework.PlayerTrackedObjective
// 0x0010
struct FPlayerTrackedObjective
{
	struct FGuid                                       ObjectiveId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.SeasonReward
// 0x0020
struct FSeasonReward
{
	struct FGuid                                       Id;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int64_t                                            Tier;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            Level;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.SeasonRewardEarnedEvent
// 0x0028
struct FSeasonRewardEarnedEvent
{
	struct FGuid                                       SeasonId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MultipleRewards;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WGSL[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSeasonReward>                       Rewards;                                                   // 0x0018(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.LevelCompletionEvent
// 0x0024
struct FLevelCompletionEvent
{
	struct FGuid                                       SeasonId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Level;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TimeSpentInLevel;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Tier;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TimeSpentInTier;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TierCompleted;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SeasonCompleted;                                           // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9XUJ[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.LevelProgressionEvent
// 0x0030
struct FLevelProgressionEvent
{
	struct FGuid                                       SeasonId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       SourceGoalId;                                              // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                XpChange;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentXP;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentTier;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentLevel;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.SeasonGoalCompletionEvent
// 0x0034
struct FSeasonGoalCompletionEvent
{
	struct FGuid                                       SeasonId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       GoalId;                                                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SeasonProgressionFramework_ESeasonGoalType> GoalType;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I3RT[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       GoalGroupId;                                               // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.SeasonGoalProgressionEvent
// 0x0040
struct FSeasonGoalProgressionEvent
{
	int                                                PreviousProgress;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentProgress;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CompletionThreshold;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       SeasonId;                                                  // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       GoalId;                                                    // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SeasonProgressionFramework_ESeasonGoalType> GoalType;                                                  // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M6YV[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       GoalGroupId;                                               // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveCompletionMessage
// 0x00D8
struct FTrackedObjectiveCompletionMessage
{
	struct FGuid                                       ObjectiveId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPirateIdentity                             PirateIdentity;                                            // 0x0010(0x0078)
	struct FPlayerBaseTelemetryFragment                PlayerInfo;                                                // 0x0088(0x0048)
	double                                             CreatedAt;                                                 // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveProgressUpdateMessage
// 0x00E0
struct FTrackedObjectiveProgressUpdateMessage
{
	struct FGuid                                       ObjectiveId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPirateIdentity                             PirateIdentity;                                            // 0x0010(0x0078)
	struct FPlayerBaseTelemetryFragment                PlayerInfo;                                                // 0x0088(0x0048)
	int                                                Value;                                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M2RD[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             CreatedAt;                                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveEvent
// 0x0018
struct FTrackedObjectiveEvent
{
	unsigned char                                      UnknownData_KUNA[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
