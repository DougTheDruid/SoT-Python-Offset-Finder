#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x30
struct TalkingIndicatorState
{
public:
	struct FString                                               GamerTag;                                          // 0x0(0x10)
	char                                                         TalkingStatus;                                     // 0x10(0x1)
	struct FString                                               Xuid;                                              // 0x18(0x10)
	char                                                         Attitude;                                          // 0x28(0x1)
};


// Size 0x30
struct TalkingIndicatorUpdateEvent
{
public:
	struct TalkingIndicatorState                                 TalkingIndicatorState;                             // 0x0(0x30)
};


