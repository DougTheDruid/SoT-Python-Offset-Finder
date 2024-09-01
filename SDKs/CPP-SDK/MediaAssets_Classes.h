#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "MediaAssets_Structs.h"


// Size 0x148 (Full Size[0x170] - InheritedSize[0x28]
class MediaPlayer: public Object
{
public:
	multicastinlinedelegate                                      OnEndReached;                                      // 0x28(0x10)
	multicastinlinedelegate                                      OnMediaClosed;                                     // 0x38(0x10)
	multicastinlinedelegate                                      OnMediaOpened;                                     // 0x48(0x10)
	multicastinlinedelegate                                      OnMediaOpenFailed;                                 // 0x58(0x10)
	multicastinlinedelegate                                      OnPlaybackResumed;                                 // 0x68(0x10)
	multicastinlinedelegate                                      OnPlaybackSuspended;                               // 0x78(0x10)
	multicastinlinedelegate                                      OnSeekCompleted;                                   // 0x88(0x10)
	multicastinlinedelegate                                      OnTracksChanged;                                   // 0x98(0x10)
	struct Timespan                                              CacheAhead;                                        // 0xa8(0x8)
	struct Timespan                                              CacheBehind;                                       // 0xb0(0x8)
	struct Timespan                                              CacheBehindGame;                                   // 0xb8(0x8)
	bool                                                         NativeAudioOut;                                    // 0xc0(0x1)
	bool                                                         PlayOnOpen;                                        // 0xc1(0x1)
	bool                                                         Shuffle;                                           // 0xc4(0x1)
	bool                                                         Loop;                                              // 0xc4(0x1)
	class MediaPlaylist*                                         Playlist;                                          // 0xc8(0x8)
	int                                                          PlaylistIndex;                                     // 0xd0(0x4)
	struct Timespan                                              TimeDelay;                                         // 0xd8(0x8)
	float                                                        HorizontalFieldOfView;                             // 0xe0(0x4)
	float                                                        VerticalFieldOfView;                               // 0xe4(0x4)
	struct Rotator                                               ViewRotation;                                      // 0xe8(0xc)
	struct Guid                                                  PlayerGuid;                                        // 0x158(0x10)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class BaseMediaSource: public MediaSource
{
public:
	struct FName                                                 PlayerName;                                        // 0x80(0x8)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class PlatformMediaSource: public MediaSource
{
public:
	class MediaSource*                                           MediaSource;                                       // 0x80(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class MovieAssetContainer: public DataAsset
{
public:
	TArray<class MediaTexture*>                                  MediaTextures;                                     // 0x28(0x10)
	TArray<class MediaPlayer*>                                   MediaPlayers;                                      // 0x38(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MediaTimeStampInfo: public Object
{
public:
	struct Timespan                                              Time;                                              // 0x28(0x8)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class MediaComponent: public ActorComponent
{
public:
	class MediaTexture*                                          MediaTexture;                                      // 0xc8(0x8)
	class MediaPlayer*                                           MediaPlayer;                                       // 0xd0(0x8)
};


// Size 0xf0 (Full Size[0x230] - InheritedSize[0x140]
class MediaTexture: public Texture
{
public:
	char                                                         AddressX;                                          // 0x140(0x1)
	char                                                         AddressY;                                          // 0x141(0x1)
	bool                                                         AutoClear;                                         // 0x142(0x1)
	struct LinearColor                                           ClearColor;                                        // 0x144(0x10)
	bool                                                         EnableGenMips;                                     // 0x154(0x1)
	char                                                         NumMips;                                           // 0x155(0x1)
	bool                                                         NewStyleOutput;                                    // 0x156(0x1)
	char                                                         OutputFormat;                                      // 0x157(0x1)
	float                                                        CurrentAspectRatio;                                // 0x158(0x4)
	char                                                         CurrentOrientation;                                // 0x15c(0x1)
	class MediaPlayer*                                           MediaPlayer;                                       // 0x160(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MediaPlaylist: public Object
{
public:
	TArray<class MediaSource*>                                   Items;                                             // 0x28(0x10)
};


// Size 0x28 (Full Size[0xb0] - InheritedSize[0x88]
class FileMediaSource: public BaseMediaSource
{
public:
	struct FString                                               FilePath;                                          // 0x88(0x10)
	bool                                                         PrecacheFile;                                      // 0x98(0x1)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class TimeSynchronizableMediaSource: public BaseMediaSource
{
public:
	bool                                                         bUseTimeSynchronization;                           // 0x88(0x1)
	int                                                          FrameDelay;                                        // 0x8c(0x4)
	double                                                       TimeDelay;                                         // 0x90(0x8)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class StreamMediaSource: public BaseMediaSource
{
public:
	struct FString                                               StreamUrl;                                         // 0x88(0x10)
};


