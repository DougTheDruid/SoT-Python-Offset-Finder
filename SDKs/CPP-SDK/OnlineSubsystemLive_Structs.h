// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
struct UpdateAchievementsXblRequestModel
{
public:
	TArray<struct AchievementProgressXblRequestModel>            Achievements;                                      // 0x0(0x10)
	struct FString                                               Action;                                            // 0x10(0x10)
	struct FString                                               ServiceConfigId;                                   // 0x20(0x10)
	struct FString                                               UserId;                                            // 0x38(0x10)
};


// Size 0x18
struct AchievementProgressXblRequestModel
{
public:
	struct FString                                               Id;                                                // 0x0(0x10)
	char                                                         pad0x8_O32NN[0x8];                                 // 0x10(0x8)
};


}