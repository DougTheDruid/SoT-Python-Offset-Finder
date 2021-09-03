// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FOceanCrawlerAudioKeyPair::AfterRead()
{
	READ_PTR_FULL(AudioEvent, UWwiseEvent);
}

void FOceanCrawlerAudioKeyPair::BeforeDelete()
{
	DELE_PTR_FULL(AudioEvent);
}

void FOceanCrawlerBuffAudioSettings::AfterRead()
{
	READ_PTR_FULL(GiveBuffAudioEvent, UWwiseEvent);
	READ_PTR_FULL(ReceiveBuffAudioEvent, UWwiseEvent);
}

void FOceanCrawlerBuffAudioSettings::BeforeDelete()
{
	DELE_PTR_FULL(GiveBuffAudioEvent);
	DELE_PTR_FULL(ReceiveBuffAudioEvent);
}

void UBTTask_BroadcastOceanCrawlerAbilityAudioEvent::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_BroadcastOceanCrawlerAbilityAudioEvent::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UOceanCrawlerAudioParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(WwiseObjectPoolWrapper, UWwiseObjectPoolWrapper);
}

void UOceanCrawlerAudioParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(WwiseObjectPoolWrapper);
}

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FEventOceanCrawlerAIBuffAudioRequest InRequest                      (ConstParm, Parm, ReferenceParm)
void UOceanCrawlerAudioBroadcaster::Multicast_PlayBuffAudio(const struct FEventOceanCrawlerAIBuffAudioRequest& InRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio");

	UOceanCrawlerAudioBroadcaster_Multicast_PlayBuffAudio_Params params;
	params.InRequest = InRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InAudioDelay                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOceanCrawlerAudioBroadcaster::Multicast_PlayAudio(TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey, float InAudioDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio");

	UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params params;
	params.InAudioKey = InAudioKey;
	params.InAudioDelay = InAudioDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UOceanCrawlerAudioBroadcaster::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(AudioDataAsset, UOceanCrawlerAudioParamsDataAsset);
	READ_PTR_FULL(CachedOwner, AActor);
}

void UOceanCrawlerAudioBroadcaster::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(AudioDataAsset);
	DELE_PTR_FULL(CachedOwner);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
