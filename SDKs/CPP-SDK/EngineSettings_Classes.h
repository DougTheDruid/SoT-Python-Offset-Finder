// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class ConsoleSettings: public Object
{
public:
	int                                                          MaxScrollbackSize;                                 // 0x28(0x4)
	char                                                         pad0x4_ERE0O[0x4];                                 // 0x2c(0x4)
	TArray<struct ManualAutoCompleteList>                        ManualAutoCompleteList;                            // 0x30(0x10)
	TArray<Str AutoCompleteMapPaths>                             AutoCompleteMapPaths;                              // 0x40(0x10)
};


// Size 0x88 (Full Size[0xb0] - InheritedSize[0x28]
class GameMapsSettings: public Object
{
public:
	Struct FString                                               EditorStartupMap;                                  // 0x28(0x10)
	Struct FString                                               LocalMapOptions;                                   // 0x38(0x10)
	Struct FString                                               TransitionMap;                                     // 0x48(0x10)
	bool                                                         bUseSplitscreen;                                   // 0x58(0x1)
	byte                                                         TwoPlayerSplitscreenLayout;                        // 0x59(0x1)
	byte                                                         ThreePlayerSplitscreenLayout;                      // 0x5a(0x1)
	char                                                         pad0x5_PHWT0[0x5];                                 // 0x5b(0x5)
	Struct StringClassReference                                  GameInstanceClass;                                 // 0x60(0x10)
	Struct FString                                               GameDefaultMap;                                    // 0x70(0x10)
	Struct FString                                               ServerDefaultMap;                                  // 0x80(0x10)
	Struct StringClassReference                                  GlobalDefaultGameMode;                             // 0x90(0x10)
	Struct StringClassReference                                  GlobalDefaultServerGameMode;                       // 0xa0(0x10)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class GameNetworkManagerSettings: public Object
{
public:
	int                                                          MinDynamicBandwidth;                               // 0x28(0x4)
	int                                                          MaxDynamicBandwidth;                               // 0x2c(0x4)
	int                                                          TotalNetBandwidth;                                 // 0x30(0x4)
	int                                                          BadPingThreshold;                                  // 0x34(0x4)
	bool                                                         bIsStandbyCheckingEnabled;                         // 0x38(0x1)
	char                                                         pad0x3_01VUE[0x3];                                 // 0x39(0x3)
	float                                                        StandbyRxCheatTime;                                // 0x3c(0x4)
	float                                                        StandbyTxCheatTime;                                // 0x40(0x4)
	float                                                        PercentMissingForRxStandby;                        // 0x44(0x4)
	float                                                        PercentMissingForTxStandby;                        // 0x48(0x4)
	float                                                        PercentForBadPing;                                 // 0x4c(0x4)
	float                                                        JoinInProgressStandbyWaitTime;                     // 0x50(0x4)
	char                                                         pad0x4_XM65B[0x4];                                 // 0x54(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameSessionSettings: public Object
{
public:
	int                                                          MaxSpectators;                                     // 0x28(0x4)
	int                                                          MaxPlayers;                                        // 0x2c(0x4)
	bool                                                         bRequiresPushToTalk;                               // 0x30(0x1)
	char                                                         pad0x7_8MY68[0x7];                                 // 0x31(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GeneralEngineSettings: public Object
{
public:
};


// Size 0xe8 (Full Size[0x110] - InheritedSize[0x28]
class GeneralProjectSettings: public Object
{
public:
	Struct FString                                               CompanyName;                                       // 0x28(0x10)
	Struct FString                                               CompanyDistinguishedName;                          // 0x38(0x10)
	Struct FString                                               CopyrightNotice;                                   // 0x48(0x10)
	Struct FString                                               Description;                                       // 0x58(0x10)
	Struct FString                                               Homepage;                                          // 0x68(0x10)
	Struct FString                                               LicensingTerms;                                    // 0x78(0x10)
	Struct FString                                               PrivacyPolicy;                                     // 0x88(0x10)
	Struct Guid                                                  ProjectID;                                         // 0x98(0x10)
	Struct FString                                               ProjectName;                                       // 0xa8(0x10)
	Struct FString                                               ProjectVersion;                                    // 0xb8(0x10)
	Struct FString                                               SupportContact;                                    // 0xc8(0x10)
	Struct FText                                                 ProjectDisplayedTitle;                             // 0xd8(0x38)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class HudSettings: public Object
{
public:
	bool                                                         bShowHUD;                                          // 0x28(0x1)
	char                                                         pad0x7_8J89F[0x7];                                 // 0x29(0x7)
	TArray<struct FName>                                         DebugDisplay;                                      // 0x30(0x10)
};


}