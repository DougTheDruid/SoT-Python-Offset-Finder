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

void FWwiseEmitter::AfterRead()
{
}

void FWwiseEmitter::BeforeDelete()
{
}

void FEventToComponentMapping::AfterRead()
{
	READ_PTR_FULL(PlayEvent, UWwiseEvent);
	READ_PTR_FULL(StopEvent, UWwiseEvent);
}

void FEventToComponentMapping::BeforeDelete()
{
	DELE_PTR_FULL(PlayEvent);
	DELE_PTR_FULL(StopEvent);
}

void FWwiseEmitterCreationParams::AfterRead()
{
	READ_PTR_FULL(Event, UWwiseEvent);
}

void FWwiseEmitterCreationParams::BeforeDelete()
{
	DELE_PTR_FULL(Event);
}

void FStaticMeshWwiseEmitterData::AfterRead()
{
	READ_PTR_FULL(Pool, UWwiseObjectPoolWrapper);
}

void FStaticMeshWwiseEmitterData::BeforeDelete()
{
	DELE_PTR_FULL(Pool);
}

void FStaticMeshAudioAssociation::AfterRead()
{
}

void FStaticMeshAudioAssociation::BeforeDelete()
{
}

void FStaticMeshComponentAudioAssociation::AfterRead()
{
}

void FStaticMeshComponentAudioAssociation::BeforeDelete()
{
}

void UWwiseEmitterComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(WwiseObjectPoolWrapper, UWwiseObjectPoolWrapper);
}

void UWwiseEmitterComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(WwiseObjectPoolWrapper);
}

void UAnimNotifyWwiseEmitterComponent::AfterRead()
{
	UWwiseEmitterComponent::AfterRead();

}

void UAnimNotifyWwiseEmitterComponent::BeforeDelete()
{
	UWwiseEmitterComponent::BeforeDelete();

}

void UAnimNotify_WwiseSound::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(WwiseEvent, UWwiseEvent);
	READ_PTR_FULL(OwnedByWorldWisePoolToUse, UWwiseObjectPoolWrapper);
}

void UAnimNotify_WwiseSound::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(WwiseEvent);
	DELE_PTR_FULL(OwnedByWorldWisePoolToUse);
}

void UAnimNotify_WwiseSoundMeshSwitch::AfterRead()
{
	UAnimNotify_WwiseSound::AfterRead();

}

void UAnimNotify_WwiseSoundMeshSwitch::BeforeDelete()
{
	UAnimNotify_WwiseSound::BeforeDelete();

}

void UAnimNotifyState_WwiseSound::AfterRead()
{
	UAnimNotifyState::AfterRead();

	READ_PTR_FULL(WwiseEvent, UWwiseEvent);
	READ_PTR_FULL(WwiseEventEnd, UWwiseEvent);
}

void UAnimNotifyState_WwiseSound::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

	DELE_PTR_FULL(WwiseEvent);
	DELE_PTR_FULL(WwiseEventEnd);
}

// Function RareAudio.AudioEventToComponentMap.ClearMappings
// (Final, Native, Public, BlueprintCallable)
void AAudioEventToComponentMap::ClearMappings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.ClearMappings");

	AAudioEventToComponentMap_ClearMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEmitterComponent*  WwiseEmitterComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAudioEventToComponentMap::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent");

	AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;

}


// Function RareAudio.AudioEventToComponentMap.AddMapping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAudioEventToComponentMap::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.AddMapping");

	AAudioEventToComponentMap_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;

}


void AAudioEventToComponentMap::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AudioEventToComponentMapComponent, UAudioEventToComponentMapComponent);
}

void AAudioEventToComponentMap::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AudioEventToComponentMapComponent);
}

// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
// (Final, Native, Public, BlueprintCallable)
void UAudioEventToComponentMapComponent::ClearMappings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.ClearMappings");

	UAudioEventToComponentMapComponent_ClearMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEmitterComponent*  WwiseEmitterComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioEventToComponentMapComponent::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent");

	UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;

}


// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioEventToComponentMapComponent::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.AddMapping");

	UAudioEventToComponentMapComponent_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;

}


void UAudioEventToComponentMapComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UAudioEventToComponentMapComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWwiseEmitterBlueprintLibrary::STATIC_WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent");

	UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params params;
	params.Event = Event;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StateValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWwiseEmitterBlueprintLibrary::STATIC_WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState");

	UWwiseEmitterBlueprintLibrary_WwiseSetState_Params params;
	params.StateGroup = StateGroup;
	params.StateValue = StateValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPCName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RTPCValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWwiseEmitterBlueprintLibrary::STATIC_WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params params;
	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwiseEmitterCreationParams CreationParams                 (Parm)
// struct FVector                 Offset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWwiseEmitterBlueprintLibrary::STATIC_WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, const struct FVector& Offset, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner");

	UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params params;
	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.CreationParams = CreationParams;
	params.Offset = Offset;
	params.Relationship = Relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWwiseEmitterBlueprintLibrary::STATIC_WwisePostGlobalEvent(class UWwiseEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent");

	UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Front                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWwiseEmitterBlueprintLibrary::STATIC_WwisePostEventAtLocation(struct FWwiseEmitter* Emitter, class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation");

	UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params params;
	params.Event = Event;
	params.Location = Location;
	params.Front = Front;
	params.EmitterPool = EmitterPool;
	params.Relationship = Relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseIsGlobalEvent(class UWwiseEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent");

	UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseListenerInfo      InfoOut                        (Parm, OutParm)
// int                            Viewport                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetListenerInfo(struct FWwiseListenerInfo* InfoOut, int Viewport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo");

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params params;
	params.Viewport = Viewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InfoOut != nullptr)
		*InfoOut = params.InfoOut;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ListenerIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFollowOrientaion              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetListenerEmitter(struct FWwiseEmitter* Emitter, class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter");

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ListenerIndex = ListenerIndex;
	params.Name = Name;
	params.Offset = Offset;
	params.bFollowOrientaion = bFollowOrientaion;
	params.EmitterPool = EmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   RTPCName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RTPCValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetGlobalRTPC(const struct FName& RTPCName, float* RTPCValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params params;
	params.RTPCName = RTPCName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RTPCValue != nullptr)
		*RTPCValue = params.RTPCValue;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetSwitch(const struct FWwiseEmitter& Emitter, const struct FName& SwitchGroup, const struct FName& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params params;
	params.Emitter = Emitter;
	params.SwitchGroup = SwitchGroup;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (ConstParm, Parm, ZeroConstructor)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params params;
	params.Emitters = Emitters;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWwiseEmitterParams     Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params params;
	params.Emitter = Emitter;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params params;
	params.Emitter = Emitter;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (ConstParm, Parm, ZeroConstructor)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<int> UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params params;
	params.Emitters = Emitters;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params params;
	params.Emitter = Emitter;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params params;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             Event                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params params;
	params.Emitter = Emitter;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm, ReferenceParm)
void UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterDestroy(struct FWwiseEmitter* Emitter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEmitterComponent*  EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params params;
	params.EmitterComponent = EmitterComponent;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<int> UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEmitterComponent*  EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params params;
	params.EmitterComponent = EmitterComponent;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// struct FVector                 Offset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseCreateEmitter(struct FWwiseEmitter* Emitter, const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter");

	UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params params;
	params.Name = Name;
	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwiseEmitterCreationParams CreationParams                 (Parm)
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Forward                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWwiseEmitterBlueprintLibrary::STATIC_WwiseCreateDetachedEmitter(struct FWwiseEmitter* Emitter, const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FVector& Forward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter");

	UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params params;
	params.Name = Name;
	params.EmitterPool = EmitterPool;
	params.Location = Location;
	params.CreationParams = CreationParams;
	params.Relationship = Relationship;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             in_eventID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           in_bSeekToNearestMarker        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent");

	UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_eventID = in_eventID;
	params.in_iPosition = in_iPosition;
	params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;
	params.in_PlayingID = in_PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlaybackPositionInMs           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterBlueprintLibrary::STATIC_GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition");

	UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_PlayingID = in_PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlaybackPositionInMs != nullptr)
		*PlaybackPositionInMs = params.PlaybackPositionInMs;


	return params.ReturnValue;
}


void UWwiseEmitterBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWwiseEmitterBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (Parm, OutParm)
// struct FName                   InNameOfEmitterToRetrieve      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InActorToFindEmitterOn         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetNamedEmitter(struct FWwiseEmitter* OutEmitter, const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter");

	UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params params;
	params.InNameOfEmitterToRetrieve = InNameOfEmitterToRetrieve;
	params.InActorToFindEmitterOn = InActorToFindEmitterOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FWwiseEmitter>   OutEmitters                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// int                            InNumEmittersToFind            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// class AActor*                  InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetClosestNEmitters(TArray<struct FWwiseEmitter>* OutEmitters, const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters");

	UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params params;
	params.InFromPosition = InFromPosition;
	params.InNumEmittersToFind = InNumEmittersToFind;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEmitters != nullptr)
		*OutEmitters = params.OutEmitters;


	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (Parm, OutParm)
// struct FVector                 InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                  InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetClosestEmitter(struct FWwiseEmitter* OutEmitter, const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter");

	UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params params;
	params.InFromPosition = InFromPosition;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;


	return params.ReturnValue;
}


void UWwiseEmitterComponentBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWwiseEmitterComponentBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UWwiseObjectPoolWrapper::AfterRead()
{
	UObject::AfterRead();

}

void UWwiseObjectPoolWrapper::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AAudioIslandStaticMeshAssociatorBase::AfterRead()
{
	AActor::AfterRead();

}

void AAudioIslandStaticMeshAssociatorBase::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function RareAudio.AudioPortalComponent.SetParentShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentShip                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioPortalComponent::SetParentShip(class AActor* ParentShip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalComponent.SetParentShip");

	UAudioPortalComponent_SetParentShip_Params params;
	params.ParentShip = ParentShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAudioPortalComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(AudioInsideSpace, UAudioSpaceDataAsset);
	READ_PTR_FULL(AudioOutsideSpace, UAudioSpaceDataAsset);
}

void UAudioPortalComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(AudioInsideSpace);
	DELE_PTR_FULL(AudioOutsideSpace);
}

// Function RareAudio.AudioPortalInterface.UnregisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioPortalInterface::UnregisterPortal(class UAudioPortalComponent* AudioPortal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.UnregisterPortal");

	UAudioPortalInterface_UnregisterPortal_Params params;
	params.AudioPortal = AudioPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.AudioPortalInterface.RegisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioPortalInterface::RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.RegisterPortal");

	UAudioPortalInterface_RegisterPortal_Params params;
	params.AudioPortal = AudioPortal;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
// (Native, Public)
// Parameters:
// class UAudioSpaceDataAsset*    AudioSpace                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace");

	UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params params;
	params.AudioSpace = AudioSpace;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
// (Native, Public, Const)
// Parameters:
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals");

	UAudioPortalInterface_GetAllRegisteredPortals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAudioPortalInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAudioPortalInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAudioPortalService::AfterRead()
{
	UObject::AfterRead();

}

void UAudioPortalService::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSpaceComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceComponent.OnOverlapEnd");

	UAudioSpaceComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UAudioSpaceComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceComponent.OnOverlapBegin");

	UAudioSpaceComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAudioSpaceComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

	READ_PTR_FULL(AudioSpace, UAudioSpaceDataAsset);
}

void UAudioSpaceComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

	DELE_PTR_FULL(AudioSpace);
}

// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName UAudioSpaceDataAsset::GetRtpcName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceDataAsset.GetRtpcName");

	UAudioSpaceDataAsset_GetRtpcName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAudioSpaceDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(AmbienceToStart, UWwiseEvent);
	READ_PTR_FULL(AmbienceToStop, UWwiseEvent);
}

void UAudioSpaceDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(AmbienceToStart);
	DELE_PTR_FULL(AmbienceToStop);
}

// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioSpaceDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace");

	UAudioSpaceTrackerComponent_GetCurrentSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAudioSpaceTrackerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UAudioSpaceTrackerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void URareAudioHardwareDeviceService::AfterRead()
{
	UAudioHardwareDeviceService::AfterRead();

}

void URareAudioHardwareDeviceService::BeforeDelete()
{
	UAudioHardwareDeviceService::BeforeDelete();

}

void UStaticMeshAudioDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UStaticMeshAudioDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
// (Final, Native, Public, BlueprintCallable)
void UStaticMeshAudioEmittersComponent::PopulateInstanceAssociations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations");

	UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UStaticMeshAudioEmittersComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UStaticMeshAudioEmittersComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UTritonAcousticMap::AfterRead()
{
	UObject::AfterRead();

}

void UTritonAcousticMap::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTritonComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(TritonMapAsset, UTritonAcousticMap);
}

void UTritonComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(TritonMapAsset);
}

void UTritonService::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CachedListenerInfo, UTritonComponent);
}

void UTritonService::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CachedListenerInfo);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
