#pragma once

// Name: SoT, Version: 2.4.0


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

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
struct UOceanCrawlerAudioBroadcaster_Multicast_PlayBuffAudio_Params
{
	struct FEventOceanCrawlerAIBuffAudioRequest        InRequest;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ReferenceParm)
};

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
struct UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params
{
	TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InAudioDelay;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
