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
// Parameters
//---------------------------------------------------------------------------

// Function RareAudio.AudioEventToComponentMap.ClearMappings
struct AAudioEventToComponentMap_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
struct AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioEventToComponentMap.AddMapping
struct AAudioEventToComponentMap_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
struct UAudioEventToComponentMapComponent_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
struct UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
struct UAudioEventToComponentMapComponent_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
struct UWwiseEmitterBlueprintLibrary_WwiseSetState_Params
{
	struct FName                                       StateGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StateValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params
{
	struct FName                                       RTPCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
struct UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params
{
	class UObject*                                     Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwiseEmitterCreationParams                 CreationParams;                                            // (Parm)
	struct FVector                                     Offset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
struct UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (Parm, OutParm)
	class UWwiseEvent*                                 Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Front;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params
{
	struct FWwiseListenerInfo                          InfoOut;                                                   // (Parm, OutParm)
	int                                                Viewport;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ListenerIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFollowOrientaion;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params
{
	struct FName                                       RTPCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SwitchGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                  // (ConstParm, Parm, ZeroConstructor)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FWwiseEmitterParams                         Params;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                  // (ConstParm, Parm, ZeroConstructor)
	class UWwiseEvent*                                 WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<int>                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 Event;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                         // (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                         // (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
	class UWwiseEvent*                                 WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<int>                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (Parm, OutParm)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // (Parm, OutParm)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWwiseEmitterCreationParams                 CreationParams;                                            // (Parm)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
struct UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 in_eventID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                in_iPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               in_bSeekToNearestMarker;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                in_PlayingID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
struct UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                in_PlayingID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlaybackPositionInMs;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                                // (Parm, OutParm)
	struct FName                                       InNameOfEmitterToRetrieve;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InActorToFindEmitterOn;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params
{
	TArray<struct FWwiseEmitter>                       OutEmitters;                                               // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     InFromPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                InNumEmittersToFind;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class AActor*                                      InActorToFindClosestEmitterOn;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                                // (Parm, OutParm)
	struct FVector                                     InFromPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      InActorToFindClosestEmitterOn;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.AudioPortalComponent.SetParentShip
struct UAudioPortalComponent_SetParentShip_Params
{
	class AActor*                                      ParentShip;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioPortalInterface.UnregisterPortal
struct UAudioPortalInterface_UnregisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioPortalInterface.RegisterPortal
struct UAudioPortalInterface_RegisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwningActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
struct UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params
{
	class UAudioSpaceDataAsset*                        AudioSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwningActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                               // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
struct UAudioPortalInterface_GetAllRegisteredPortals_Params
{
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                               // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
struct UAudioSpaceComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
struct UAudioSpaceComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromSweep;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
struct UAudioSpaceDataAsset_GetRtpcName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
struct UAudioSpaceTrackerComponent_GetCurrentSpace_Params
{
	class UAudioSpaceDataAsset*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
struct UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
