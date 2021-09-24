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
// Parameters
//---------------------------------------------------------------------------

// Function RareAudio.AudioEventToComponentMap.ClearMappings
struct AAudioEventToComponentMap_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
struct AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioEventToComponentMap.AddMapping
struct AAudioEventToComponentMap_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
struct UAudioEventToComponentMapComponent_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
struct UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
struct UAudioEventToComponentMapComponent_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
struct UWwiseEmitterBlueprintLibrary_WwiseSetState_Params
{
	struct FName                                       StateGroup;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StateValue;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params
{
	struct FName                                       RTPCName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
struct UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params
{
	class UObject*                                     Owner;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwiseEmitterCreationParams                 CreationParams;                                            // 0x0010(0x0028)  (Parm)
	struct FVector                                     Offset;                                                    // 0x0038(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
struct UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (Parm, OutParm)
	class UWwiseEvent*                                 Event;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Front;                                                     // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params
{
	struct FWwiseListenerInfo                          InfoOut;                                                   // 0x0000(0x003C)  (Parm, OutParm)
	int                                                Viewport;                                                  // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ListenerIndex;                                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // 0x002C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFollowOrientaion;                                         // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params
{
	struct FName                                       RTPCName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCValue;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     WorldContextObject;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0030(0x0018)  (Parm)
	bool                                               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SwitchGroup;                                               // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Value;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor)
	struct FName                                       Name;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FWwiseEmitterParams                         Params;                                                    // 0x0020(0x0002)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                  // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor)
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<int>                                        ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // 0x002C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 Event;                                                     // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
	struct FName                                       Name;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<int>                                        ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourcePath;                                                // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (Parm, OutParm)
	struct FName                                       Name;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Owner;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // 0x0038(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ReturnValue;                                               // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                   // 0x0000(0x0020)  (Parm, OutParm)
	struct FName                                       Name;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWwiseEmitterCreationParams                 CreationParams;                                            // 0x0040(0x0028)  (Parm)
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // 0x006C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	int                                                ReturnValue;                                               // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
struct UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 in_eventID;                                                // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                in_iPosition;                                              // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               in_bSeekToNearestMarker;                                   // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                in_PlayingID;                                              // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
struct UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                in_PlayingID;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlaybackPositionInMs;                                      // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                                // 0x0000(0x0020)  (Parm, OutParm)
	struct FName                                       InNameOfEmitterToRetrieve;                                 // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InActorToFindEmitterOn;                                    // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params
{
	TArray<struct FWwiseEmitter>                       OutEmitters;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	struct FVector                                     InFromPosition;                                            // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                InNumEmittersToFind;                                       // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class AActor*                                      InActorToFindClosestEmitterOn;                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                                // 0x0000(0x0020)  (Parm, OutParm)
	struct FVector                                     InFromPosition;                                            // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      InActorToFindClosestEmitterOn;                             // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareAudio.AudioPortalComponent.SetParentShip
struct UAudioPortalComponent_SetParentShip_Params
{
	class AActor*                                      ParentShip;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioPortalInterface.UnregisterPortal
struct UAudioPortalInterface_UnregisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioPortalInterface.RegisterPortal
struct UAudioPortalInterface_RegisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwningActor;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
struct UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params
{
	class UAudioSpaceDataAsset*                        AudioSpace;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwningActor;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                               // 0x0010(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
struct UAudioPortalInterface_GetAllRegisteredPortals_Params
{
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
struct UAudioSpaceComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
struct UAudioSpaceComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromSweep;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
struct UAudioSpaceDataAsset_GetRtpcName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
struct UAudioSpaceTrackerComponent_GetCurrentSpace_Params
{
	class UAudioSpaceDataAsset*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
struct UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
