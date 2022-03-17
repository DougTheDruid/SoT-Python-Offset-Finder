// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x98
struct EmoteData
{
public:
	Struct EmoteId                                               EmoteId;                                           // 0x0(0x8)
	Struct FText                                                 EmoteDisplayName;                                  // 0x8(0x38)
	Struct FText                                                 AudioDescription;                                  // 0x40(0x38)
	float                                                        DelayBeforeAllowingExit;                           // 0x78(0x4)
	float                                                        VerticalOffsetFactorWhenZoomed;                    // 0x7c(0x4)
	bool                                                         HideNameplate;                                     // 0x80(0x1)
	Class EmotePropData*                                         EmotePropDataAsset;                                // 0x88(0x8)
	bool                                                         CanPlayInSuccession;                               // 0x90(0x1)
	bool                                                         ShowDescriptionInTextChat;                         // 0x91(0x1)
};


// Size 0x8
struct EmoteId
{
public:
	struct FName                                                 EmoteId;                                           // 0x0(0x8)
};


// Size 0xc
struct EventEmoteEndRequested
{
public:
	struct FName                                                 EmoteIdentifier;                                   // 0x0(0x8)
	bool                                                         EndForcedEmote;                                    // 0x8(0x1)
};


// Size 0x1
struct EventEndEmoteAnimation
{
public:
};


// Size 0x98
struct EventEmoteSwapped
{
public:
	Struct EmoteData                                             EmoteData;                                         // 0x0(0x98)
};


// Size 0xc
struct EventEmoteCompleted
{
public:
	struct FName                                                 EmoteName;                                         // 0x0(0x8)
};


// Size 0x98
struct EventEmoteStarted
{
public:
	Struct EmoteData                                             EmoteData;                                         // 0x0(0x98)
};


// Size 0xa8
struct EventEmoteRequested
{
public:
	Struct EmoteData                                             EmoteData;                                         // 0x0(0x98)
	struct FName                                                 ForcedEmoteIdentifier;                             // 0x98(0x8)
	bool                                                         ForcedEmote;                                       // 0xa0(0x1)
};


// Size 0x14
struct EmoteDiceOutcomeTelemetryEvent
{
public:
	int                                                          MaxLimit;                                          // 0x0(0x4)
	int                                                          RollNumber;                                        // 0x4(0x4)
	Struct Vector                                                OrientationUsed;                                   // 0x8(0xc)
};


// Size 0x1
struct EventDisableLookAtEmoteCamera
{
public:
};


// Size 0x8
struct EventEnableLookAtEmoteCamera
{
public:
};


}