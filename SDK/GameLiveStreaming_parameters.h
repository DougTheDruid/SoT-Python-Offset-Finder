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

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
	int                                                FrameRate;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScreenScaling;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableWebCam;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DesiredWebCamWidth;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DesiredWebCamHeight;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMirrorWebCamImage;                                        // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCaptureAudioFromComputer;                                 // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCaptureAudioFromMicrophone;                               // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDrawSimpleWebCamVideo;                                    // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
	struct FString                                     GameName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UQueryLiveStreamsCallbackProxy*              ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
