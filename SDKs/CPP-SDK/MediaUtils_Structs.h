// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
struct MediaPlayerOptions
{
public:
	Struct MediaPlayerTrackOptions                               Tracks;                                            // 0x0(0x1c)
	char                                                         pad0x4_3KYS3[0x4];                                 // 0x1c(0x4)
	Struct Timespan                                              SeekTime;                                          // 0x20(0x8)
	byte                                                         PlayOnOpen;                                        // 0x28(0x1)
	byte                                                         Loop;                                              // 0x29(0x1)
};


// Size 0x1c
struct MediaPlayerTrackOptions
{
public:
	int                                                          Audio;                                             // 0x0(0x4)
	int                                                          Caption;                                           // 0x4(0x4)
	int                                                          MetaData;                                          // 0x8(0x4)
	int                                                          Script;                                            // 0xc(0x4)
	int                                                          Subtitle;                                          // 0x10(0x4)
	int                                                          Text;                                              // 0x14(0x4)
	int                                                          Video;                                             // 0x18(0x4)
};


}