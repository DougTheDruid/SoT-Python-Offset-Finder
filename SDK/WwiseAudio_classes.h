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

// Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimNotifyWwiseEmitterComponentRetrievalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseEvent
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UWwiseEvent : public UObject
{
public:
	class UWwiseBank*                                  RequiredBank;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	bool                                               WaitForBankToLoad;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JX8I[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           WwiseId;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	float                                              DurationMin;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	float                                              DurationMax;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	float                                              MaxAttenuation;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	TEnumAsByte<WwiseAudio_EWwiseEventDurationType>    DurationType;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	bool                                               CookedIsStopEvent;                                         // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0T10[0xA];                                     // 0x0046(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseEvent");
		return ptr;
	}



	bool IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos, float AttenuationScaler);
	float GetMaxAttenuation();
	TEnumAsByte<WwiseAudio_EWwiseEventDurationType> GetDurationType();
	float GetDurationMin();
	float GetDurationMax();
	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.MovieSceneAkAudioEventSection
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	class UWwiseEvent*                                 Event;                                                     // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_T3J0[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x00A0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash)
	struct FRichCurve                                  FloatCurve;                                                // 0x00B0(0x0078) (Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.MovieSceneAkTrack
// 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)
	unsigned char                                      bIsAMasterTrack : 1;                                       // 0x0098(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      UnknownData_BSJA[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.MovieSceneAkAudioEventTrack
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseAudioSettings
// 0x03E0 (FullSize[0x0408] - InheritedSize[0x0028])
class UWwiseAudioSettings : public UObject
{
public:
	unsigned char                                      UnknownData_76VR[0xC0];                                    // 0x0028(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWwiseAudioReverbPresets                    ReverbPresetSettings;                                      // 0x00E8(0x0064) (Edit, Config)
	unsigned char                                      UnknownData_YGIP[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWwiseBinkSettings                          BinkSettings;                                              // 0x0150(0x0038) (Edit, Config)
	TArray<struct FStringAssetReference>               PersistentSoundBanks;                                      // 0x0188(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       InitBank;                                                  // 0x0198(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WwiseSoundbanksRoot;                                       // 0x01A8(0x0010) (Edit, Config)
	struct FStringAssetReference                       WwiseIDsDatabase;                                          // 0x01B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WwiseStreamedFilesDirectory;                               // 0x01C8(0x0010) (Edit, Config)
	struct FDirectoryPath                              NonShippingWwiseStreamedFilesDirectory;                    // 0x01D8(0x0010) (Edit, Config)
	TArray<struct FWwiseIOPriorityMappingConfig>       AsyncIOPriorityMappings;                                   // 0x01E8(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              TritonAcousticMapsDirectory;                               // 0x01F8(0x0010) (Edit, Config)
	struct FString                                     DefaultLanguage;                                           // 0x0208(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     SinkSharesetName;                                          // 0x0218(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FStringAssetReference                       PauseEventStart;                                           // 0x0228(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       PauseEventRelease;                                         // 0x0238(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       StopAllEvent;                                              // 0x0248(0x0010) (Edit, ZeroConstructor, Config)
	struct FWwiseNetworkRelationship                   NetworkRelationship;                                       // 0x0258(0x0018) (Edit, Config)
	struct FWwiseAudioGameStateSettings                AudioStateSettings;                                        // 0x0270(0x00A0) (Edit, Config)
	uint32_t                                           WaapiInterpreterPort;                                      // 0x0310(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RY9Z[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 PauseEventStartInstance;                                   // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PauseEventReleaseInstance;                                 // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopAllEventInstance;                                      // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     AnimNotifyPoolInstance;                                    // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0B5W[0x50];                                    // 0x0338(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendStartInstance;                       // 0x0388(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendEndInstance;                         // 0x0398(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnStartEngagementInstance;                     // 0x03A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnEndEngagementInstance;                       // 0x03B8(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingStartInstance;                        // 0x03C8(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingEndInstance;                          // 0x03D8(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingStartInstance;              // 0x03E8(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingEndInstance;                // 0x03F8(0x0010) (ZeroConstructor, Transient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseBank
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UWwiseBank : public UObject
{
public:
	struct FString                                     path;                                                      // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash)
	uint32_t                                           WwiseId;                                                   // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LXNZ[0x2C];                                    // 0x003C(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseBank");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseSubSystemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWwiseSubSystemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseSubSystemInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseDebugManager
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UWwiseDebugManager : public UObject
{
public:
	unsigned char                                      UnknownData_SECQ[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseDebugManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseEmitterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWwiseEmitterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseEmitterInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseEmitterManager
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UWwiseEmitterManager : public UObject
{
public:
	unsigned char                                      UnknownData_G5XV[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseEmitterManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseDDSEvent
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UWwiseDDSEvent : public UWwiseEvent
{
public:
	TArray<uint32_t>                                   DDSArgumentsGroupsIDs;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseDDSEvent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseIDsDatabase
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UWwiseIDsDatabase : public UDataAsset
{
public:
	TArray<uint32_t>                                   StateGroupIDs;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               StateGroupNames;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   StateValueIDs;                                             // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               StateValueNames;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   SwitchGroupIDs;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               SwitchGroupNames;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   SwitchStateIDs;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               SwitchStateNames;                                          // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseIDsDatabase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseInputManagerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWwiseInputManagerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseInputManagerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseInputManager
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData_A6YY[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseInputManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseMediaManager
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UWwiseMediaManager : public UObject
{
public:
	unsigned char                                      UnknownData_EAL7[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseMediaManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwisePersistentContentStore
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UWwisePersistentContentStore : public UObject
{
public:
	TArray<class UWwiseBank*>                          PersistentlyLoadedBanks;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwisePersistentContentStore");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwisePoolManager
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UWwisePoolManager : public UObject
{
public:
	unsigned char                                      UnknownData_N19V[0xD0];                                    // 0x0028(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwisePoolManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WwiseAudio.WwiseSoundFrameManager
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UWwiseSoundFrameManager : public UObject
{
public:
	unsigned char                                      UnknownData_EYAO[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WwiseAudio.WwiseSoundFrameManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
