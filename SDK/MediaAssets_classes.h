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
// Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaPlayer
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMediaClosed;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      Looping : 1;                                               // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected)
	unsigned char                                      UnknownData_JFRL[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FR3S[0x58];                                    // 0x0060(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}



	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& NewUrl);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	struct FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	void Close();
	bool CanPlay();
	bool CanPause();
	void AfterRead();
	void BeforeDelete();

};

// Class MediaAssets.MediaSoundWave
// 0x0060 (FullSize[0x0278] - InheritedSize[0x0218])
class UMediaSoundWave : public USoundWave
{
public:
	int                                                AudioTrackIndex;                                           // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UFLO[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_70HC[0x30];                                    // 0x0228(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                        // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_UGC6[0x18];                                    // 0x0260(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}



	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void AfterRead();
	void BeforeDelete();

};

// Class MediaAssets.MediaTexture
// 0x0070 (FullSize[0x01A8] - InheritedSize[0x0138])
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<Engine_ETextureAddress>                AddressX;                                                  // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETextureAddress>                AddressY;                                                  // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KHTG[0x2];                                     // 0x013A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ClearColor;                                                // 0x013C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                VideoTrackIndex;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BTAN[0x8];                                     // 0x0158(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                        // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_7PA4[0x40];                                    // 0x0168(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}



	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
