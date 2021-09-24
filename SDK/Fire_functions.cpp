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

void FFireGridCellSelection::AfterRead()
{
}

void FFireGridCellSelection::BeforeDelete()
{
}

void FFireGridCellSelectionParams::AfterRead()
{
	READ_PTR_FULL(ActorClassFilter, UClass);
}

void FFireGridCellSelectionParams::BeforeDelete()
{
	DELE_PTR_FULL(ActorClassFilter);
}

void FCookerIgnitionParams::AfterRead()
{
}

void FCookerIgnitionParams::BeforeDelete()
{
}

void FFireCellStateTimingParams::AfterRead()
{
}

void FFireCellStateTimingParams::BeforeDelete()
{
}

void FFireCellAudioParams::AfterRead()
{
	READ_PTR_FULL(EmitterPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(DousePool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(FirePlay, UWwiseEvent);
	READ_PTR_FULL(FireStop, UWwiseEvent);
	READ_PTR_FULL(FireDouse, UWwiseEvent);
}

void FFireCellAudioParams::BeforeDelete()
{
	DELE_PTR_FULL(EmitterPool);
	DELE_PTR_FULL(DousePool);
	DELE_PTR_FULL(FirePlay);
	DELE_PTR_FULL(FireStop);
	DELE_PTR_FULL(FireDouse);
}

void FFireCellStateParticleTemplate::AfterRead()
{
	READ_PTR_FULL(Template, UParticleSystem);
	READ_PTR_FULL(Mesh, UStaticMesh);
}

void FFireCellStateParticleTemplate::BeforeDelete()
{
	DELE_PTR_FULL(Template);
	DELE_PTR_FULL(Mesh);
}

void FFireGridVFXParams::AfterRead()
{
	READ_PTR_FULL(ExteriorLowDetailParticleSystem, UParticleSystem);
	READ_PTR_FULL(ExteriorSmokeParticleSystem, UParticleSystem);
	READ_PTR_FULL(InteriorSmokeParticleSystem, UParticleSystem);
}

void FFireGridVFXParams::BeforeDelete()
{
	DELE_PTR_FULL(ExteriorLowDetailParticleSystem);
	DELE_PTR_FULL(ExteriorSmokeParticleSystem);
	DELE_PTR_FULL(InteriorSmokeParticleSystem);
}

void FFireMesh::AfterRead()
{
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
}

void FFireMesh::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
}

void FFireGridRelativeSpawnDesc::AfterRead()
{
}

void FFireGridRelativeSpawnDesc::BeforeDelete()
{
}

void FFireGridLowDetailRelativeSpawnDesc::AfterRead()
{
	FFireGridRelativeSpawnDesc::AfterRead();

}

void FFireGridLowDetailRelativeSpawnDesc::BeforeDelete()
{
	FFireGridRelativeSpawnDesc::BeforeDelete();

}

void FFireParticleSpawnData::AfterRead()
{
}

void FFireParticleSpawnData::BeforeDelete()
{
}

void FFireParticleSpawnList::AfterRead()
{
}

void FFireParticleSpawnList::BeforeDelete()
{
}

void FFireCellDesc::AfterRead()
{
}

void FFireCellDesc::BeforeDelete()
{
}

void FFireDefaultVFXSpawnData::AfterRead()
{
}

void FFireDefaultVFXSpawnData::BeforeDelete()
{
}

void FFireParticleSystem::AfterRead()
{
	READ_PTR_FULL(SpawnedParticleSystem, UParticleSystemComponent);
}

void FFireParticleSystem::BeforeDelete()
{
	DELE_PTR_FULL(SpawnedParticleSystem);
}

void FActorFireDamageParams::AfterRead()
{
}

void FActorFireDamageParams::BeforeDelete()
{
}

void FShipFireDamageParams::AfterRead()
{
	READ_PTR_FULL(DamagerType, UClass);
}

void FShipFireDamageParams::BeforeDelete()
{
	DELE_PTR_FULL(DamagerType);
}

void FShipFireLightParams::AfterRead()
{
}

void FShipFireLightParams::BeforeDelete()
{
}

void FReplicatedFireCellData::AfterRead()
{
}

void FReplicatedFireCellData::BeforeDelete()
{
}

void FReplicatedFireCellCharringData::AfterRead()
{
}

void FReplicatedFireCellCharringData::BeforeDelete()
{
}

void FFireGridCharringManager::AfterRead()
{
	READ_PTR_FULL(FireGridTexture, UTexture2DDynamic);
}

void FFireGridCharringManager::BeforeDelete()
{
	DELE_PTR_FULL(FireGridTexture);
}

void FShipFireLightRelativeSpawnDesc::AfterRead()
{
	FFireGridRelativeSpawnDesc::AfterRead();

}

void FShipFireLightRelativeSpawnDesc::BeforeDelete()
{
	FFireGridRelativeSpawnDesc::BeforeDelete();

}

void FShipFireLight::AfterRead()
{
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(AreaLight, UStaticMeshComponent);
	READ_PTR_FULL(AreaLightMaterial, UMaterialInstanceDynamic);
}

void FShipFireLight::BeforeDelete()
{
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(AreaLight);
	DELE_PTR_FULL(AreaLightMaterial);
}

void FShipFireLightManager::AfterRead()
{
	READ_PTR_FULL(Propagator, UFirePropagator);
	READ_PTR_FULL(AreaLightMesh, UStaticMesh);
	READ_PTR_FULL(LightParams, UShipFireLightParamsDataAsset);
	READ_PTR_FULL(ShipPostProcessComponent, UPostProcessComponent);
}

void FShipFireLightManager::BeforeDelete()
{
	DELE_PTR_FULL(Propagator);
	DELE_PTR_FULL(AreaLightMesh);
	DELE_PTR_FULL(LightParams);
	DELE_PTR_FULL(ShipPostProcessComponent);
}

void FFireGridVfxSpawnSettings::AfterRead()
{
	READ_PTR_FULL(VFXParams, UFireGridVFXParamsDataAsset);
}

void FFireGridVfxSpawnSettings::BeforeDelete()
{
	DELE_PTR_FULL(VFXParams);
}

void FPlayerNearBurningFireGridUpdatedEvent::AfterRead()
{
}

void FPlayerNearBurningFireGridUpdatedEvent::BeforeDelete()
{
}

void FShipOnFireEndEvent::AfterRead()
{
}

void FShipOnFireEndEvent::BeforeDelete()
{
}

void FShipOnFireBeginEvent::AfterRead()
{
}

void FShipOnFireBeginEvent::BeforeDelete()
{
}

void FFireExtinguishedEvent::AfterRead()
{
}

void FFireExtinguishedEvent::BeforeDelete()
{
}

void FOnFireChangedEvent::AfterRead()
{
}

void FOnFireChangedEvent::BeforeDelete()
{
}

void FFireCellStateData::AfterRead()
{
}

void FFireCellStateData::BeforeDelete()
{
}

void FPlayerFireGridTickParams::AfterRead()
{
	READ_PTR_FULL(FireGridActorPlayerIsInsideOf, AActor);
	READ_PTR_FULL(PlayerShipSize, UClass);
}

void FPlayerFireGridTickParams::BeforeDelete()
{
	DELE_PTR_FULL(FireGridActorPlayerIsInsideOf);
	DELE_PTR_FULL(PlayerShipSize);
}

// Function:
//		Offset -> 0x03345900
//		Name   -> Function Fire.FlammableComponent.OnRep_OnFire
//		Flags  -> (Final, Native, Protected)
void UFlammableComponent::OnRep_OnFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.OnRep_OnFire");

	UFlammableComponent_OnRep_OnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03345880
//		Name   -> Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
//		Flags  -> (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
//		struct FVector                                     InExtinguishLocationWS                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UFlammableComponent::Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC");

	UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params params;
	params.InExtinguishLocationWS = InExtinguishLocationWS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03345840
//		Name   -> Function Fire.FlammableComponent.IsOnFire
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UFlammableComponent::IsOnFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IsOnFire");

	UFlammableComponent_IsOnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03345810
//		Name   -> Function Fire.FlammableComponent.IncrementFireSource
//		Flags  -> (Native, Public, BlueprintCallable)
void UFlammableComponent::IncrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IncrementFireSource");

	UFlammableComponent_IncrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x033457C0
//		Name   -> Function Fire.FlammableComponent.DecrementFireSource
//		Flags  -> (Native, Public, BlueprintCallable)
void UFlammableComponent::DecrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.DecrementFireSource");

	UFlammableComponent_DecrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UFlammableComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UFlammableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UActorFlammableComponent::AfterRead()
{
	UFlammableComponent::AfterRead();

	READ_PTR_FULL(FireVFX, UParticleSystem);
	READ_PTR_FULL(SteamVFX, UParticleSystem);
}

void UActorFlammableComponent::BeforeDelete()
{
	UFlammableComponent::BeforeDelete();

	DELE_PTR_FULL(FireVFX);
	DELE_PTR_FULL(SteamVFX);
}

void UExtinguishableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UExtinguishableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UFireDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void UFireDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

void UFireExplosionDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void UFireExplosionDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

void UFireStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UFireStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

// Function:
//		Offset -> 0x033457F0
//		Name   -> Function Fire.FlammableInterface.IncrementFireSource
//		Flags  -> (Native, Public, BlueprintCallable)
void UFlammableInterface::IncrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.IncrementFireSource");

	UFlammableInterface_IncrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x033457A0
//		Name   -> Function Fire.FlammableInterface.DecrementFireSource
//		Flags  -> (Native, Public, BlueprintCallable)
void UFlammableInterface::DecrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.DecrementFireSource");

	UFlammableInterface_DecrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UFlammableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFlammableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UFlammableWieldableComponent::AfterRead()
{
	UFlammableComponent::AfterRead();

}

void UFlammableWieldableComponent::BeforeDelete()
{
	UFlammableComponent::BeforeDelete();

}

void UTimedFlammableComponent::AfterRead()
{
	UFlammableComponent::AfterRead();

}

void UTimedFlammableComponent::BeforeDelete()
{
	UFlammableComponent::BeforeDelete();

}

void UIgniteStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UIgniteStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UStatusResponseExtinguish::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseExtinguish::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseIgnite::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseIgnite::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UFireGridCellSelectionParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UFireGridCellSelectionParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x037D01A0
//		Name   -> Function Fire.FirePropagationInterface.SetAllCellsState
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Fire_EFireCellState>                   State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirePropagationInterface::SetAllCellsState(TEnumAsByte<Fire_EFireCellState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FirePropagationInterface.SetAllCellsState");

	UFirePropagationInterface_SetAllCellsState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UFirePropagationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFirePropagationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCookerIgnitionComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCookerIgnitionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UFireCellStateTimingParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UFireCellStateTimingParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UFireGridAudioManager::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(OwningActor, AActor);
	READ_PTR_FULL(FirePropagator, UFirePropagator);
}

void UFireGridAudioManager::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(OwningActor);
	DELE_PTR_FULL(FirePropagator);
}

void UFireGridLocationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFireGridLocationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UFireGridProxyInterface::AfterRead()
{
	UFireGridLocationInterface::AfterRead();

}

void UFireGridProxyInterface::BeforeDelete()
{
	UFireGridLocationInterface::BeforeDelete();

}

void UFireGridVFXParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UFireGridVFXParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UFireGridVFXManager::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(VFXParams, UFireGridVFXParamsDataAsset);
	READ_PTR_FULL(SpawnedExteriorSmokeParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(SpawnedLowDetailParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(Propagator, UFirePropagator);
}

void UFireGridVFXManager::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(VFXParams);
	DELE_PTR_FULL(SpawnedExteriorSmokeParticleSystem);
	DELE_PTR_FULL(SpawnedLowDetailParticleSystem);
	DELE_PTR_FULL(Propagator);
}

void UFirePropagator::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CellStateTimingParams, UFireCellStateTimingParamsDataAsset);
}

void UFirePropagator::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CellStateTimingParams);
}

void UMastFlammableComponent::AfterRead()
{
	UActorFlammableComponent::AfterRead();

}

void UMastFlammableComponent::BeforeDelete()
{
	UActorFlammableComponent::BeforeDelete();

}

void UShipFireDamageParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UShipFireDamageParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UShipFireLightParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UShipFireLightParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x037D0180
//		Name   -> Function Fire.ShipFirePropagationComponent.OnRep_CellData
//		Flags  -> (Final, Native, Private)
void UShipFirePropagationComponent::OnRep_CellData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellData");

	UShipFirePropagationComponent_OnRep_CellData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x037D0160
//		Name   -> Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
//		Flags  -> (Final, Native, Private)
void UShipFirePropagationComponent::OnRep_CellCharringData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData");

	UShipFirePropagationComponent_OnRep_CellCharringData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UShipFirePropagationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ShipSize, UClass);
	READ_PTR_FULL(Propagator, UFirePropagator);
	READ_PTR_FULL(FireDamageDataAsset, UShipFireDamageParamsDataAsset);
	READ_PTR_FULL(VFXManager, UFireGridVFXManager);
	READ_PTR_FULL(FireAudioManager, UFireGridAudioManager);
}

void UShipFirePropagationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ShipSize);
	DELE_PTR_FULL(Propagator);
	DELE_PTR_FULL(FireDamageDataAsset);
	DELE_PTR_FULL(VFXManager);
	DELE_PTR_FULL(FireAudioManager);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
