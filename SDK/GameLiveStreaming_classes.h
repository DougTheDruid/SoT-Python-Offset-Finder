#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}



	void STATIC_StopBroadcastingGame();
	void STATIC_StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo);
	bool STATIC_IsBroadcastingGame();
	void AfterRead();
	void BeforeDelete();

};

// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnQueriedLiveStreams;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_PSCE[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}



	class UQueryLiveStreamsCallbackProxy* STATIC_QueryLiveStreams(const struct FString& GameName);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
