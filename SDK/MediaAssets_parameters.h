#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MediaAssets.MediaPlayer.SupportsSeeking
struct UMediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.SupportsScrubbing
struct UMediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.SupportsRate
struct UMediaPlayer_SupportsRate_Params
{
	float                                              Rate;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Unthinned;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.SetRate
struct UMediaPlayer_SetRate_Params
{
	float                                              Rate;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.SetLooping
struct UMediaPlayer_SetLooping_Params
{
	bool                                               InLooping;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.Seek
struct UMediaPlayer_Seek_Params
{
	struct FTimespan                                   InTime;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.Rewind
struct UMediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.Play
struct UMediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.Pause
struct UMediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.OpenUrl
struct UMediaPlayer_OpenUrl_Params
{
	struct FString                                     NewUrl;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.IsStopped
struct UMediaPlayer_IsStopped_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.IsPlaying
struct UMediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.IsPaused
struct UMediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.IsLooping
struct UMediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.GetUrl
struct UMediaPlayer_GetUrl_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function MediaAssets.MediaPlayer.GetTime
struct UMediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetRate
struct UMediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MediaAssets.MediaPlayer.GetDuration
struct UMediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.Close
struct UMediaPlayer_Close_Params
{
};

// Function MediaAssets.MediaPlayer.CanPlay
struct UMediaPlayer_CanPlay_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaPlayer.CanPause
struct UMediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MediaAssets.MediaSoundWave.SetMediaPlayer
struct UMediaSoundWave_SetMediaPlayer_Params
{
	class UMediaPlayer*                                InMediaPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MediaAssets.MediaTexture.SetMediaPlayer
struct UMediaTexture_SetMediaPlayer_Params
{
	class UMediaPlayer*                                InMediaPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
