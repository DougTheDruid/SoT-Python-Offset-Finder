namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
class UpdateAchievementsXblRequestModel: public None
{
public:
	TArray<Struct AchievementProgressXblRequestModel>  Achievements                                       // 0x0(0x10)
	Struct FString                                     Action                                             // 0x10(0x10)
	Struct FString                                     ServiceConfigId                                    // 0x20(0x10)
	Struct FString                                     UserId                                             // 0x38(0x10)
};


// Size 0x18
class AchievementProgressXblRequestModel: public None
{
public:
	Struct FString                                     Id                                                 // 0x0(0x10)
};


}