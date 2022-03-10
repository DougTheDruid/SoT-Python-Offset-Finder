namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x278
class SeasonPopupAsset: public DataAsset
{
public:
	struct FName                                       ThemeId                                            // 0x28(0x8)
	TArray<Struct ThemeId>                             TierInfos                                          // 0x30(0x10)
	TArray<Struct TierInfos>                           TrialInfos                                         // 0x40(0x10)
	TArray<Struct TrialInfos>                          DeedInfos                                          // 0x50(0x10)
	TArray<Struct DeedInfos>                           RenownActionInfos                                  // 0x60(0x10)
	Struct SeasonIconPopupAsset                        SeasonInfo                                         // 0x70(0x68)
	Struct SeasonIconPopupAsset                        LevelIncreaseInfo                                  // 0xd8(0x68)
	Struct SeasonIconPopupAsset                        RewardInfo                                         // 0x140(0x68)
	Struct SeasonIconPopupAsset                        MultipleRewardsInfo                                // 0x1a8(0x68)
	Struct StringAssetReference                        BackgroundImage                                    // 0x210(0x10)
	Struct FString                                     DefaultToastSfxEventName                           // 0x220(0x10)
	Struct FString                                     DefaultToastEventName                              // 0x230(0x10)
	Struct FString                                     DefaultToastSwitchName                             // 0x240(0x10)
	Struct FString                                     DefaultToastSwitchValue                            // 0x250(0x10)
	Struct FString                                     DefaultChatSfxEventName                            // 0x260(0x10)
	Struct FString                                     DefaultChatEventName                               // 0x270(0x10)
	Struct FString                                     DefaultChatSwitchName                              // 0x280(0x10)
	Struct FString                                     DefaultChatSwitchValue                             // 0x290(0x10)
};


// Size 0x10
class SeasonPopupListAsset: public DataAsset
{
public:
	TArray<class SeasonPopups*>                        SeasonPopups                                       // 0x28(0x10)
};


// Size 0x0
class SeasonProgressionUIInterface: public Interface
{
public:
};


// Size 0x0
class SeasonProgressionUITelemetryInterface: public Interface
{
public:
};


// Size 0xe8
class SeasonProgressionUIComponent: public ActorComponent
{
public:
	TArray<Struct SeasonPopupListAsset>                DetailsNavigationDesc                              // 0xe8(0x10)
	Struct SeasonProgressionUITelemetryFragment        NextReceivedEventsTelemetryData                    // 0xf8(0x18)
};


// Size 0x0
class SeasonProgressionUIServiceInterface: public Interface
{
public:
};


// Size 0x1c0
class SeasonProgressionUIService: public Actor
{
public:
	Class SeasonPopupListAsset*                        SeasonPopupListAsset                               // 0x400(0x8)
};


// Size 0x10
class SeasonProgressionUISettings: public Object
{
public:
	Struct StringAssetReference                        SeasonPopupListAsset                               // 0x28(0x10)
};


}