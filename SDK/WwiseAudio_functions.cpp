// Name: SoT, Version: 2.3.0

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

void FReverbPresetControllerSettings::AfterRead()
{
}

void FReverbPresetControllerSettings::BeforeDelete()
{
}

void FWwiseBinkTrackMapping::AfterRead()
{
}

void FWwiseBinkTrackMapping::BeforeDelete()
{
}

void FWwiseIOPriorityMappingConfig::AfterRead()
{
}

void FWwiseIOPriorityMappingConfig::BeforeDelete()
{
}

void FWwiseNetworkRelationship::AfterRead()
{
}

void FWwiseNetworkRelationship::BeforeDelete()
{
}

void FWwiseAudioGameStateSettings::AfterRead()
{
}

void FWwiseAudioGameStateSettings::BeforeDelete()
{
}

void FWwiseBinkTrackMappings::AfterRead()
{
}

void FWwiseBinkTrackMappings::BeforeDelete()
{
}

void FWwiseBinkSettings::AfterRead()
{
}

void FWwiseBinkSettings::BeforeDelete()
{
}

void FWwiseAudioAcousticSurfaceParams::AfterRead()
{
}

void FWwiseAudioAcousticSurfaceParams::BeforeDelete()
{
}

void FAnimNotify_SoundSwitch::AfterRead()
{
}

void FAnimNotify_SoundSwitch::BeforeDelete()
{
}

void FWwiseEventParam::AfterRead()
{
}

void FWwiseEventParam::BeforeDelete()
{
}

void FWwiseEmitterParams::AfterRead()
{
}

void FWwiseEmitterParams::BeforeDelete()
{
}

void FWwiseListenerInfo::AfterRead()
{
}

void FWwiseListenerInfo::BeforeDelete()
{
}

void FWwiseNativeEmitterPoolDensityParams::AfterRead()
{
	READ_PTR_FULL(PoolDensityAudioPlayEvent, UWwiseEvent);
	READ_PTR_FULL(PoolDensityAudioStopEvent, UWwiseEvent);
}

void FWwiseNativeEmitterPoolDensityParams::BeforeDelete()
{
	DELE_PTR_FULL(PoolDensityAudioPlayEvent);
	DELE_PTR_FULL(PoolDensityAudioStopEvent);
}

void FWwiseExternalSource::AfterRead()
{
}

void FWwiseExternalSource::BeforeDelete()
{
}

void FWwiseSubtitle::AfterRead()
{
}

void FWwiseSubtitle::BeforeDelete()
{
}

void FMovieSceneAkAudioEventTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(Section, UMovieSceneAkAudioEventSection);
}

void FMovieSceneAkAudioEventTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(Section);
}

void FMovieSceneAkAudioRTPCTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(Section, UMovieSceneAkAudioRTPCSection);
}

void FMovieSceneAkAudioRTPCTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(Section);
}

void FMovieSceneAkAudioRTPCSectionData::AfterRead()
{
}

void FMovieSceneAkAudioRTPCSectionData::BeforeDelete()
{
}

void FWwiseAudioReverbPresets::AfterRead()
{
}

void FWwiseAudioReverbPresets::BeforeDelete()
{
}

void UAnimNotifyWwiseEmitterComponentRetrievalInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAnimNotifyWwiseEmitterComponentRetrievalInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x04464A20
//		Name   -> Function WwiseAudio.WwiseEvent.IsAudible
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SoundPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector                                     ListenerPos                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              AttenuationScaler                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEvent::IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos, float AttenuationScaler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.IsAudible");

	UWwiseEvent_IsAudible_Params params;
	params.SoundPosition = SoundPosition;
	params.ListenerPos = ListenerPos;
	params.AttenuationScaler = AttenuationScaler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04464720
//		Name   -> Function WwiseAudio.WwiseEvent.GetMaxAttenuation
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWwiseEvent::GetMaxAttenuation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetMaxAttenuation");

	UWwiseEvent_GetMaxAttenuation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x044646E0
//		Name   -> Function WwiseAudio.WwiseEvent.GetDurationType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<WwiseAudio_EWwiseEventDurationType>    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<WwiseAudio_EWwiseEventDurationType> UWwiseEvent::GetDurationType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationType");

	UWwiseEvent_GetDurationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x044646B0
//		Name   -> Function WwiseAudio.WwiseEvent.GetDurationMin
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWwiseEvent::GetDurationMin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMin");

	UWwiseEvent_GetDurationMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04464680
//		Name   -> Function WwiseAudio.WwiseEvent.GetDurationMax
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWwiseEvent::GetDurationMax()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMax");

	UWwiseEvent_GetDurationMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWwiseEvent::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RequiredBank, UWwiseBank);
}

void UWwiseEvent::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RequiredBank);
}

void UMovieSceneAkAudioEventSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(Event, UWwiseEvent);
}

void UMovieSceneAkAudioEventSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(Event);
}

void UMovieSceneAkAudioRTPCSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneAkAudioRTPCSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneAkTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneAkTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieSceneAkAudioEventTrack::AfterRead()
{
	UMovieSceneAkTrack::AfterRead();

}

void UMovieSceneAkAudioEventTrack::BeforeDelete()
{
	UMovieSceneAkTrack::BeforeDelete();

}

void UMovieSceneAkAudioRTPCTrack::AfterRead()
{
	UMovieSceneAkTrack::AfterRead();

}

void UMovieSceneAkAudioRTPCTrack::BeforeDelete()
{
	UMovieSceneAkTrack::BeforeDelete();

}

void UWwiseAudioSettings::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PauseEventStartInstance, UWwiseEvent);
	READ_PTR_FULL(PauseEventReleaseInstance, UWwiseEvent);
	READ_PTR_FULL(StopAllEventInstance, UWwiseEvent);
	READ_PTR_FULL(AnimNotifyPoolInstance, UWwiseObjectPoolWrapper);
}

void UWwiseAudioSettings::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PauseEventStartInstance);
	DELE_PTR_FULL(PauseEventReleaseInstance);
	DELE_PTR_FULL(StopAllEventInstance);
	DELE_PTR_FULL(AnimNotifyPoolInstance);
}

void UWwiseBank::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseBank::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwiseSubSystemInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWwiseSubSystemInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWwiseDebugManager::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseDebugManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwiseEmitterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWwiseEmitterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWwiseEmitterManager::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseEmitterManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwiseDDSEvent::AfterRead()
{
	UWwiseEvent::AfterRead();

}

void UWwiseDDSEvent::BeforeDelete()
{
	UWwiseEvent::BeforeDelete();

}

void UWwiseIDsDatabase::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWwiseIDsDatabase::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UWwiseInputManagerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWwiseInputManagerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWwiseInputManager::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseInputManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwiseMediaManager::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseMediaManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwisePersistentContentStore::AfterRead()
{
	UObject::AfterRead();

}

void UWwisePersistentContentStore::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwisePoolManager::AfterRead()
{
	UObject::AfterRead();

}

void UWwisePoolManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWwiseSoundFrameManager::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseSoundFrameManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
