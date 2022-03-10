namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x98
class EmoteData: public None
{
public:
	Struct EmoteId                                     EmoteId                                            // 0x0(0x8)
	Struct FText                                       EmoteDisplayName                                   // 0x8(0x38)
	Struct FText                                       AudioDescription                                   // 0x40(0x38)
	float                                              DelayBeforeAllowingExit                            // 0x78(0x4)
	float                                              VerticalOffsetFactorWhenZoomed                     // 0x7c(0x4)
	bool                                               HideNameplate                                      // 0x80(0x1)
	Class EmotePropData*                               EmotePropDataAsset                                 // 0x88(0x8)
	bool                                               CanPlayInSuccession                                // 0x90(0x1)
	bool                                               ShowDescriptionInTextChat                          // 0x91(0x1)
};


// Size 0x8
class EmoteId: public None
{
public:
	struct FName                                       EmoteId                                            // 0x0(0x8)
};


// Size 0xc
class EventEmoteEndRequested: public None
{
public:
	struct FName                                       EmoteIdentifier                                    // 0x0(0x8)
	bool                                               EndForcedEmote                                     // 0x8(0x1)
};


// Size 0x1
class EventEndEmoteAnimation: public None
{
public:
};


// Size 0x98
class EventEmoteSwapped: public None
{
public:
	Struct EmoteData                                   EmoteData                                          // 0x0(0x98)
};


// Size 0xc
class EventEmoteCompleted: public None
{
public:
	struct FName                                       EmoteName                                          // 0x0(0x8)
};


// Size 0x98
class EventEmoteStarted: public None
{
public:
	Struct EmoteData                                   EmoteData                                          // 0x0(0x98)
};


// Size 0xa8
class EventEmoteRequested: public None
{
public:
	Struct EmoteData                                   EmoteData                                          // 0x0(0x98)
	struct FName                                       ForcedEmoteIdentifier                              // 0x98(0x8)
	bool                                               ForcedEmote                                        // 0xa0(0x1)
};


// Size 0x14
class EmoteDiceOutcomeTelemetryEvent: public None
{
public:
	int                                                MaxLimit                                           // 0x0(0x4)
	int                                                RollNumber                                         // 0x4(0x4)
	Struct Vector                                      OrientationUsed                                    // 0x8(0xc)
};


// Size 0x1
class EventDisableLookAtEmoteCamera: public None
{
public:
};


// Size 0x8
class EventEnableLookAtEmoteCamera: public None
{
public:
};


}