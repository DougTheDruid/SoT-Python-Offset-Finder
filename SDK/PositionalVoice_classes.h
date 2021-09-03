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

// Class PositionalVoice.VoiceChatEmitterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoiceChatEmitterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PositionalVoice.VoiceChatEmitterInterface");
		return ptr;
	}



	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler();
	void AfterRead();
	void BeforeDelete();

};

// Class PositionalVoice.VoiceChatRendererInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoiceChatRendererInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PositionalVoice.VoiceChatRenderer
// 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
class UVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData_WC9B[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 AttenuatedVoiceEvent;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AttenuatedAndSpatialisedVoiceEvent;                        // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 UnattenuatedVoiceEvent;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PreBufferInMilliseconds;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ChatRoutingListenerIndex;                                  // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmitterHoldInSeconds;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_40ZM[0x124];                                   // 0x005C(0x0124) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRenderer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoiceChatRendererRetreivalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererRetreivalInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
