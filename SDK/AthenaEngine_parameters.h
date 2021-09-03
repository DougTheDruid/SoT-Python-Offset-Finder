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

// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
struct UBoxedRpcDispatcherComponent_Server_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
struct UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
struct UBoxedRpcDispatcherComponent_Client_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
struct UDynamicColourPointLightComponent_DeactivateLight_Params
{
	bool                                               Blend;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
struct UDynamicColourPointLightComponent_ActivateLight_Params
{
	bool                                               Blend;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
struct UForceFeedbackCondition_CanPlayForceFeedback_Params
{
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
struct UPlayModeHelpers_SetPlayModeVariantOverride_Params
{
	TEnumAsByte<AthenaEngine_EPlayModeVariant>         NewPlayModeVariantOverride;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
struct UPlayModeHelpers_SetPlayModeOverride_Params
{
	TEnumAsByte<AthenaEngine_EPlayMode>                NewPlayModeOverride;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
struct UPlayModeHelpers_GetPlayModeVariant_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaEngine_EPlayModeVariant>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEngine.PlayModeHelpers.GetPlayMode
struct UPlayModeHelpers_GetPlayMode_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaEngine_EPlayMode>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride
struct UPlayModeHelpers_ClearPlayModeVariantOverride_Params
{
};

// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
struct UPlayModeHelpers_ClearPlayModeOverride_Params
{
};

// Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
struct URotateMeshToActorComponent_SnapMeshToLookAtActor_Params
{
};

// Function AthenaEngine.RotateMeshToActorComponent.Initialise
struct URotateMeshToActorComponent_Initialise_Params
{
	class UMeshComponent*                              InMeshToRotate;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InActorToRotateTo;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
