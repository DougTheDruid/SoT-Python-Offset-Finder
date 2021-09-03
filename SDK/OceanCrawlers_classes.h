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

// Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_BroadcastOceanCrawlerAbilityAudioEvent : public UBTTaskNode
{
public:
	TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> OceanCrawlerAudioKeyToBroadcast;                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1831[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UOceanCrawlerAudioParamsDataAsset : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     WwiseObjectPoolWrapper;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOceanCrawlerAudioKeyPair>           AudioKeyPairs;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRangeOfRanges           BuffThankDelay;                                            // 0x0040(0x0030) (Edit)
	struct FOceanCrawlerBuffAudioSettings              CrabBuffAudioSettings;                                     // 0x0070(0x0010) (Edit)
	struct FOceanCrawlerBuffAudioSettings              EelBuffAudioSettings;                                      // 0x0080(0x0010) (Edit)
	struct FOceanCrawlerBuffAudioSettings              HermitBuffAudioSettings;                                   // 0x0090(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OceanCrawlers.OceanCrawlerAudioBroadcaster
// 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
class UOceanCrawlerAudioBroadcaster : public UActorComponent
{
public:
	class UOceanCrawlerAudioParamsDataAsset*           AudioDataAsset;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CachedOwner;                                               // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2ABC[0xC8];                                    // 0x00D8(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OceanCrawlers.OceanCrawlerAudioBroadcaster");
		return ptr;
	}



	void Multicast_PlayBuffAudio(const struct FEventOceanCrawlerAIBuffAudioRequest& InRequest);
	void Multicast_PlayAudio(TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey, float InAudioDelay);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
