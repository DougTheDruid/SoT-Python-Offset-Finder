// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90
class MediaPlayer: public Object
{
public:
	bool                                                         Looping;                                           // 0x48(0x1)
	Struct FString                                               URL;                                               // 0x50(0x10)
};


// Size 0x60
class MediaSoundWave: public SoundWave
{
public:
	int                                                          AudioTrackIndex;                                   // 0x218(0x4)
	Class MediaPlayer*                                           MediaPlayer;                                       // 0x220(0x8)
};


// Size 0x70
class MediaTexture: public Texture
{
public:
	byte                                                         AddressX;                                          // 0x138(0x1)
	byte                                                         AddressY;                                          // 0x139(0x1)
	Struct LinearColor                                           ClearColor;                                        // 0x13c(0x10)
	int                                                          VideoTrackIndex;                                   // 0x14c(0x4)
	Class MediaPlayer*                                           MediaPlayer;                                       // 0x150(0x8)
};


}