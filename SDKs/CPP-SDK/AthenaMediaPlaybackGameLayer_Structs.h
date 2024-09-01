#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct VideoPlaybackStopEvent
{
public:
	struct FString                                               MediaTextureName;                                  // 0x0(0x10)
};


// Size 0x10
struct VideoPlaybackStartEvent
{
public:
	struct FString                                               MediaTextureName;                                  // 0x0(0x10)
};


// Size 0x18
struct VideoPlaybackStateEvent
{
public:
	struct FString                                               MediaTextureName;                                  // 0x0(0x10)
	char                                                         State;                                             // 0x10(0x1)
};


// Size 0x40
struct MediaPlayedTelemetryEvent
{
public:
	struct FString                                               MediaName;                                         // 0x0(0x10)
	struct IntPoint                                              LowestResolution;                                  // 0x10(0x8)
	struct IntPoint                                              MedianResolution;                                  // 0x18(0x8)
	struct IntPoint                                              HighestResolution;                                 // 0x20(0x8)
	uint32                                                       TimestampWhenEnded;                                // 0x28(0x4)
	uint32                                                       TotalMediaLength;                                  // 0x2c(0x4)
	uint32                                                       LowestBitrate;                                     // 0x30(0x4)
	uint32                                                       MedianBitrate;                                     // 0x34(0x4)
	uint32                                                       HighestBitrate;                                    // 0x38(0x4)
};


// Size 0x10
struct VideoPlaybackPauseEvent
{
public:
	struct FString                                               MediaTextureName;                                  // 0x0(0x10)
};


// Size 0x28
struct VideoSubtitleEvent
{
public:
	struct FString                                               MediaTextureName;                                  // 0x0(0x10)
	struct FString                                               SubtitleString;                                    // 0x10(0x10)
	double                                                       SubtitleDuration;                                  // 0x20(0x8)
};


// Size 0x20
struct VideoPlaybackLoadEvent
{
public:
	struct FString                                               MediaTextureName;                                  // 0x0(0x10)
	struct FString                                               VideoUri;                                          // 0x10(0x10)
};


