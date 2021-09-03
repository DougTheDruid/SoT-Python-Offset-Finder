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

void FSerialisedRpc::AfterRead()
{
	READ_PTR_FULL(ContentsType, UScriptStruct);
}

void FSerialisedRpc::BeforeDelete()
{
	DELE_PTR_FULL(ContentsType);
}

void FStringAssetClassPairFeatureOverride::AfterRead()
{
}

void FStringAssetClassPairFeatureOverride::BeforeDelete()
{
}

void FStringAssetClassPair::AfterRead()
{
}

void FStringAssetClassPair::BeforeDelete()
{
}

void FBoxedRpc::AfterRead()
{
	READ_PTR_FULL(Type, UScriptStruct);
}

void FBoxedRpc::BeforeDelete()
{
	DELE_PTR_FULL(Type);
}

void FPlayModeDefiniton::AfterRead()
{
}

void FPlayModeDefiniton::BeforeDelete()
{
}

void FServicesStampId::AfterRead()
{
}

void FServicesStampId::BeforeDelete()
{
}

void FActorComponentSelector::AfterRead()
{
	READ_PTR_FULL(CachedComponent, UActorComponent);
}

void FActorComponentSelector::BeforeDelete()
{
	DELE_PTR_FULL(CachedComponent);
}

void FPlaySoundRpc::AfterRead()
{
	FBoxedRpc::AfterRead();

	READ_PTR_FULL(WwiseEvent, UWwiseEvent);
}

void FPlaySoundRpc::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

	DELE_PTR_FULL(WwiseEvent);
}

void FEventCancelForceFeedback::AfterRead()
{
	READ_PTR_FULL(ForceFeedbackEffect, UForceFeedbackEffect);
}

void FEventCancelForceFeedback::BeforeDelete()
{
	DELE_PTR_FULL(ForceFeedbackEffect);
}

void FEventTriggerForceFeedback::AfterRead()
{
	READ_PTR_FULL(ForceFeedbackEffect, UForceFeedbackEffect);
}

void FEventTriggerForceFeedback::BeforeDelete()
{
	DELE_PTR_FULL(ForceFeedbackEffect);
}

void FAthenaAsyncAssetLoaderWrapper::AfterRead()
{
}

void FAthenaAsyncAssetLoaderWrapper::BeforeDelete()
{
}

void FEventMeshAssigned::AfterRead()
{
}

void FEventMeshAssigned::BeforeDelete()
{
}

void UAthenaEngineInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaEngineInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBoxedRpcDispatcherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UBoxedRpcDispatcherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)
void UBoxedRpcDispatcherComponent::Server_SendRpc(const struct FSerialisedRpc& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc");

	UBoxedRpcDispatcherComponent_Server_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)
void UBoxedRpcDispatcherComponent::NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc");

	UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)
void UBoxedRpcDispatcherComponent::Client_SendRpc(const struct FSerialisedRpc& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc");

	UBoxedRpcDispatcherComponent_Client_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBoxedRpcDispatcherComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UBoxedRpcDispatcherComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDynamicColourPointLightComponent::DeactivateLight(bool Blend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight");

	UDynamicColourPointLightComponent_DeactivateLight_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDynamicColourPointLightComponent::ActivateLight(bool Blend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight");

	UDynamicColourPointLightComponent_ActivateLight_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDynamicColourPointLightComponent::AfterRead()
{
	UPointLightComponent::AfterRead();

}

void UDynamicColourPointLightComponent::BeforeDelete()
{
	UPointLightComponent::BeforeDelete();

}

void UEmptyObject::AfterRead()
{
	UObject::AfterRead();

}

void UEmptyObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback");

	UForceFeedbackCondition_CanPlayForceFeedback_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UForceFeedbackCondition::AfterRead()
{
	UObject::AfterRead();

}

void UForceFeedbackCondition::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameInstanceSessionIdProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameInstanceSessionIdProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNestedWorldRootDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UNestedWorldRootDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UOnlinePlayerPermissionsRetrieverInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UOnlinePlayerPermissionsRetrieverInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<AthenaEngine_EPlayModeVariant> NewPlayModeVariantOverride     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayModeHelpers::STATIC_SetPlayModeVariantOverride(TEnumAsByte<AthenaEngine_EPlayModeVariant> NewPlayModeVariantOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride");

	UPlayModeHelpers_SetPlayModeVariantOverride_Params params;
	params.NewPlayModeVariantOverride = NewPlayModeVariantOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<AthenaEngine_EPlayMode> NewPlayModeOverride            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayModeHelpers::STATIC_SetPlayModeOverride(TEnumAsByte<AthenaEngine_EPlayMode> NewPlayModeOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride");

	UPlayModeHelpers_SetPlayModeOverride_Params params;
	params.NewPlayModeOverride = NewPlayModeOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaEngine_EPlayModeVariant> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaEngine_EPlayModeVariant> UPlayModeHelpers::STATIC_GetPlayModeVariant(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant");

	UPlayModeHelpers_GetPlayModeVariant_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.GetPlayMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaEngine_EPlayMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaEngine_EPlayMode> UPlayModeHelpers::STATIC_GetPlayMode(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayMode");

	UPlayModeHelpers_GetPlayMode_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)
void UPlayModeHelpers::STATIC_ClearPlayModeVariantOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride");

	UPlayModeHelpers_ClearPlayModeVariantOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)
void UPlayModeHelpers::STATIC_ClearPlayModeOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride");

	UPlayModeHelpers_ClearPlayModeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPlayModeHelpers::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UPlayModeHelpers::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UPlayModeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPlayModeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPrimitiveCollisionExtentAdjustOverTimeComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CachedWorld, UWorld);
}

void UPrimitiveCollisionExtentAdjustOverTimeComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CachedWorld);
}

void UBoxCollisionExtentAdjustOverTimeComponent::AfterRead()
{
	UPrimitiveCollisionExtentAdjustOverTimeComponent::AfterRead();

	READ_PTR_FULL(BoxCollisionToAdjust, UBoxComponent);
}

void UBoxCollisionExtentAdjustOverTimeComponent::BeforeDelete()
{
	UPrimitiveCollisionExtentAdjustOverTimeComponent::BeforeDelete();

	DELE_PTR_FULL(BoxCollisionToAdjust);
}

void USphereCollisionExtentAdjustOverTimeComponent::AfterRead()
{
	UPrimitiveCollisionExtentAdjustOverTimeComponent::AfterRead();

	READ_PTR_FULL(SphereCollisionToAdjust, USphereComponent);
}

void USphereCollisionExtentAdjustOverTimeComponent::BeforeDelete()
{
	UPrimitiveCollisionExtentAdjustOverTimeComponent::BeforeDelete();

	DELE_PTR_FULL(SphereCollisionToAdjust);
}

void UResourceProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UResourceProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
// (Final, Native, Public, BlueprintCallable)
void URotateMeshToActorComponent::SnapMeshToLookAtActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor");

	URotateMeshToActorComponent_SnapMeshToLookAtActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.RotateMeshToActorComponent.Initialise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          InMeshToRotate                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InActorToRotateTo              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotateMeshToActorComponent::Initialise(class UMeshComponent* InMeshToRotate, class AActor* InActorToRotateTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaEngine.RotateMeshToActorComponent.Initialise");

	URotateMeshToActorComponent_Initialise_Params params;
	params.InMeshToRotate = InMeshToRotate;
	params.InActorToRotateTo = InActorToRotateTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URotateMeshToActorComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MeshToRotate, UMeshComponent);
	READ_PTR_FULL(ActorToRotateTo, AActor);
}

void URotateMeshToActorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MeshToRotate);
	DELE_PTR_FULL(ActorToRotateTo);
}

void URotateMeshToLocalPlayerComponent::AfterRead()
{
	URotateMeshToActorComponent::AfterRead();

}

void URotateMeshToLocalPlayerComponent::BeforeDelete()
{
	URotateMeshToActorComponent::BeforeDelete();

}

void UServicesStampIdInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServicesStampIdInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USkeletalMeshAggregateTickComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Mesh, USkeletalMeshComponent);
}

void USkeletalMeshAggregateTickComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Mesh);
}

void UStringToAssetClassMap::AfterRead()
{
	UDataAsset::AfterRead();

}

void UStringToAssetClassMap::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void USyncedRandomRetrievalInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USyncedRandomRetrievalInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
