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

void FScrapeableDamageSpeedEntry::AfterRead()
{
	READ_PTR_FULL(SpeedBand, UClass);
	READ_PTR_FULL(ForceFeedbackEffect, UForceFeedbackEffect);
}

void FScrapeableDamageSpeedEntry::BeforeDelete()
{
	DELE_PTR_FULL(SpeedBand);
	DELE_PTR_FULL(ForceFeedbackEffect);
}

void FWatercraftRolloverCorrector::AfterRead()
{
}

void FWatercraftRolloverCorrector::BeforeDelete()
{
}

void FRowboatDamageEffectData::AfterRead()
{
	READ_PTR_FULL(DynamicMaterialInstance, UMaterialInstanceDynamic);
}

void FRowboatDamageEffectData::BeforeDelete()
{
	DELE_PTR_FULL(DynamicMaterialInstance);
}

void FRowboatStrainDamageData::AfterRead()
{
}

void FRowboatStrainDamageData::BeforeDelete()
{
}

void FOarParams::AfterRead()
{
	READ_PTR_FULL(RowingPowerCurve, UCurveFloat);
}

void FOarParams::BeforeDelete()
{
	DELE_PTR_FULL(RowingPowerCurve);
}

void FOar::AfterRead()
{
}

void FOar::BeforeDelete()
{
}

void FEventOarStrokeEnded::AfterRead()
{
}

void FEventOarStrokeEnded::BeforeDelete()
{
}

void FEventRowboatExitedWater::AfterRead()
{
}

void FEventRowboatExitedWater::BeforeDelete()
{
}

void FEventRowboatEnteredWater::AfterRead()
{
}

void FEventRowboatEnteredWater::BeforeDelete()
{
}

void FRowboatMountStateTelemetryEvent::AfterRead()
{
}

void FRowboatMountStateTelemetryEvent::BeforeDelete()
{
}

void FWatercraftDespawnTelemetryEvent::AfterRead()
{
}

void FWatercraftDespawnTelemetryEvent::BeforeDelete()
{
}

void FWatercraftSpawnTelemetryEvent::AfterRead()
{
}

void FWatercraftSpawnTelemetryEvent::BeforeDelete()
{
}

void FEventExitedWatercraft::AfterRead()
{
	READ_PTR_FULL(Watercraft, AActor);
	READ_PTR_FULL(Actor, AActor);
}

void FEventExitedWatercraft::BeforeDelete()
{
	DELE_PTR_FULL(Watercraft);
	DELE_PTR_FULL(Actor);
}

void FEventEnteredWatercraft::AfterRead()
{
	READ_PTR_FULL(Watercraft, AActor);
	READ_PTR_FULL(Actor, AActor);
}

void FEventEnteredWatercraft::BeforeDelete()
{
	DELE_PTR_FULL(Watercraft);
	DELE_PTR_FULL(Actor);
}

void UControllableOarsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UControllableOarsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03800D00
//		Name   -> Function Watercrafts.FakeShip.OnAttachedItemEndPlay
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFakeShip::OnAttachedItemEndPlay(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.FakeShip.OnAttachedItemEndPlay");

	AFakeShip_OnAttachedItemEndPlay_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AFakeShip::AfterRead()
{
	AActor::AfterRead();

}

void AFakeShip::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UWatercraftTrackerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWatercraftTrackerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03800E00
//		Name   -> Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      PreviousWatercraft                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemProxyWatercraftTrackerComponent::OnRep_CurrentWatercraft(class AActor* PreviousWatercraft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft");

	UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params params;
	params.PreviousWatercraft = PreviousWatercraft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03800D80
//		Name   -> Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedWatercraft                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemProxyWatercraftTrackerComponent::OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed");

	UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params params;
	params.DestroyedWatercraft = DestroyedWatercraft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UItemProxyWatercraftTrackerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(WatercraftTrackingData, UItemProxyWatercraftTrackerComponentDataAsset);
	READ_PTR_FULL(CurrentWatercraft, AActor);
}

void UItemProxyWatercraftTrackerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(WatercraftTrackingData);
	DELE_PTR_FULL(CurrentWatercraft);
}

void UItemProxyWatercraftTrackerComponentDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UItemProxyWatercraftTrackerComponentDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void URowboatAudioComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(Params, URowboatAudioComponentParams);
	READ_PTR_FULL(ParentRowboat, ARowboat);
}

void URowboatAudioComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(Params);
	DELE_PTR_FULL(ParentRowboat);
}

void URowboatAudioComponentParams::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(RowboatObjectPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(RowboatWakeStart, UWwiseEvent);
	READ_PTR_FULL(RowboatWakeStop, UWwiseEvent);
	READ_PTR_FULL(RowboatLaunch, UWwiseEvent);
	READ_PTR_FULL(RowboatImpactAndScrapeStart, UWwiseEvent);
	READ_PTR_FULL(RowboatImpactAndScrapeStop, UWwiseEvent);
	READ_PTR_FULL(RowboatStrainStart, UWwiseEvent);
	READ_PTR_FULL(RowboatStrainStop, UWwiseEvent);
	READ_PTR_FULL(RowboatTakenDamage, UWwiseEvent);
	READ_PTR_FULL(RowboatAttach, UWwiseEvent);
	READ_PTR_FULL(RowboatDetach, UWwiseEvent);
	READ_PTR_FULL(WwiseOarEmitterPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(PlayOarInOarLayer, UWwiseEvent);
	READ_PTR_FULL(PlayOarInWaterLayer, UWwiseEvent);
	READ_PTR_FULL(PlayOarOutOarLayer, UWwiseEvent);
	READ_PTR_FULL(PlayOarOutWaterLayer, UWwiseEvent);
	READ_PTR_FULL(PlayOarBrakingLoop, UWwiseEvent);
	READ_PTR_FULL(StopOarBrakingLoop, UWwiseEvent);
	READ_PTR_FULL(PlayOarPullFinished, UWwiseEvent);
}

void URowboatAudioComponentParams::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(RowboatObjectPool);
	DELE_PTR_FULL(RowboatWakeStart);
	DELE_PTR_FULL(RowboatWakeStop);
	DELE_PTR_FULL(RowboatLaunch);
	DELE_PTR_FULL(RowboatImpactAndScrapeStart);
	DELE_PTR_FULL(RowboatImpactAndScrapeStop);
	DELE_PTR_FULL(RowboatStrainStart);
	DELE_PTR_FULL(RowboatStrainStop);
	DELE_PTR_FULL(RowboatTakenDamage);
	DELE_PTR_FULL(RowboatAttach);
	DELE_PTR_FULL(RowboatDetach);
	DELE_PTR_FULL(WwiseOarEmitterPool);
	DELE_PTR_FULL(PlayOarInOarLayer);
	DELE_PTR_FULL(PlayOarInWaterLayer);
	DELE_PTR_FULL(PlayOarOutOarLayer);
	DELE_PTR_FULL(PlayOarOutWaterLayer);
	DELE_PTR_FULL(PlayOarBrakingLoop);
	DELE_PTR_FULL(StopOarBrakingLoop);
	DELE_PTR_FULL(PlayOarPullFinished);
}

void URowboatDescDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void URowboatDescDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void URowboatOarsLeftForwardNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsLeftForwardNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsLeftForwardDeactivatedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsLeftForwardDeactivatedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsRightForwardNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsRightForwardNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsRightForwardDeactivatedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsRightForwardDeactivatedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsLeftBrakingActivatedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsLeftBrakingActivatedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsLeftBrakingDeactivatedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsLeftBrakingDeactivatedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsRightBrakingActivatedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsRightBrakingActivatedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void URowboatOarsRightBrakingDeactivatedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void URowboatOarsRightBrakingDeactivatedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UScrapeableDamageDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UScrapeableDamageDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UScrapeableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UScrapeableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UScrapeableComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ScrapeDamageSettings, UScrapeableDamageDataAsset);
	READ_PTR_FULL(ScrapeDamagerType, UClass);
}

void UScrapeableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ScrapeDamageSettings);
	DELE_PTR_FULL(ScrapeDamagerType);
}

// Function:
//		Offset -> 0x03801020
//		Name   -> Function Watercrafts.Watercraft.OnRigidBodyWake
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		struct FName                                       InBoneName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWatercraft::OnRigidBodyWake(const struct FName& InBoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodyWake");

	AWatercraft_OnRigidBodyWake_Params params;
	params.InBoneName = InBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03800FA0
//		Name   -> Function Watercrafts.Watercraft.OnRigidBodySleep
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		struct FName                                       InBoneName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWatercraft::OnRigidBodySleep(const struct FName& InBoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodySleep");

	AWatercraft_OnRigidBodySleep_Params params;
	params.InBoneName = InBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWatercraft::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BuoyancyComponent, UBuoyancyComponent);
	READ_PTR_FULL(NosediveBrake, UShipNosediveBrake);
	READ_PTR_FULL(BowSplashContainer, UBowSplashContainer);
	READ_PTR_FULL(CollisionMesh, UStaticMeshComponent);
	READ_PTR_FULL(CraftMesh, UStaticMeshComponent);
	READ_PTR_FULL(OverlapHits, UBoxComponent);
	READ_PTR_FULL(WaterOcclusionVolume, UStaticMeshComponent);
	READ_PTR_FULL(WaterInteractionComponent, UWaterInteractionComponent);
	READ_PTR_FULL(SpeedToChoppinessScalarCurve, UCurveFloat);
}

void AWatercraft::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BuoyancyComponent);
	DELE_PTR_FULL(NosediveBrake);
	DELE_PTR_FULL(BowSplashContainer);
	DELE_PTR_FULL(CollisionMesh);
	DELE_PTR_FULL(CraftMesh);
	DELE_PTR_FULL(OverlapHits);
	DELE_PTR_FULL(WaterOcclusionVolume);
	DELE_PTR_FULL(WaterInteractionComponent);
	DELE_PTR_FULL(SpeedToChoppinessScalarCurve);
}

// Function:
//		Offset -> 0x03801220
//		Name   -> Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UChildActorComponent*>                InAlwaysEnabledInteractables                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void ARowboat::SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables");

	ARowboat_SetAlwaysEnabledInteractables_Params params;
	params.InAlwaysEnabledInteractables = InAlwaysEnabledInteractables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03800E80
//		Name   -> Function Watercrafts.Rowboat.OnRep_IsSinking
//		Flags  -> (Final, Native, Private)
void ARowboat::OnRep_IsSinking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.OnRep_IsSinking");

	ARowboat_OnRep_IsSinking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ARowboat::AfterRead()
{
	AWatercraft::AfterRead();

	READ_PTR_FULL(LeftSideClamberSpot, UChildActorComponent);
	READ_PTR_FULL(RightSideClamberSpot, UChildActorComponent);
	READ_PTR_FULL(ForceSpot, UChildActorComponent);
	READ_PTR_FULL(Lantern, UChildActorComponent);
	READ_PTR_FULL(RowingSeat, UChildActorComponent);
	READ_PTR_FULL(StorageSeat, UChildActorComponent);
	READ_PTR_FULL(LiveryComponent, UShipLiveryComponent);
	READ_PTR_FULL(CustomizationComponent, UReplicatedShipPartCustomizationComponent);
	READ_PTR_FULL(TetherCustomisationComponent, UTetherCustomisationComponent);
	READ_PTR_FULL(HealthComponent, UHealthComponent);
	READ_PTR_FULL(ActorDamageableComponent, UActorDamageableComponent);
	READ_PTR_FULL(RammableComponent, URammableComponent);
	READ_PTR_FULL(ScrapeableComponent, UScrapeableComponent);
	READ_PTR_FULL(RowboatAudio, URowboatAudioComponent);
	READ_PTR_FULL(HullDragDynamicsDesc, UBaseHullDragDynamicsDesc);
	READ_PTR_FULL(OarSplashContainer, UBowSplashContainer);
	READ_PTR_FULL(MountableComponent, UMountableComponent);
	READ_PTR_FULL(LinearDampingOverTimeWhileBeachedScalarCurve, UCurveFloat);
	READ_PTR_FULL(AngularDampingOverTimeWhileBeachedScalarCurve, UCurveFloat);
	READ_PTR_FULL(ShroudBreakerTrackerComponent, UShroudBreakerTrackerComponent);
}

void ARowboat::BeforeDelete()
{
	AWatercraft::BeforeDelete();

	DELE_PTR_FULL(LeftSideClamberSpot);
	DELE_PTR_FULL(RightSideClamberSpot);
	DELE_PTR_FULL(ForceSpot);
	DELE_PTR_FULL(Lantern);
	DELE_PTR_FULL(RowingSeat);
	DELE_PTR_FULL(StorageSeat);
	DELE_PTR_FULL(LiveryComponent);
	DELE_PTR_FULL(CustomizationComponent);
	DELE_PTR_FULL(TetherCustomisationComponent);
	DELE_PTR_FULL(HealthComponent);
	DELE_PTR_FULL(ActorDamageableComponent);
	DELE_PTR_FULL(RammableComponent);
	DELE_PTR_FULL(ScrapeableComponent);
	DELE_PTR_FULL(RowboatAudio);
	DELE_PTR_FULL(HullDragDynamicsDesc);
	DELE_PTR_FULL(OarSplashContainer);
	DELE_PTR_FULL(MountableComponent);
	DELE_PTR_FULL(LinearDampingOverTimeWhileBeachedScalarCurve);
	DELE_PTR_FULL(AngularDampingOverTimeWhileBeachedScalarCurve);
	DELE_PTR_FULL(ShroudBreakerTrackerComponent);
}

void URowboatPartInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URowboatPartInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void URowboatSpawnParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void URowboatSpawnParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void URowingActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void URowingActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void URowingInputComponent::AfterRead()
{
	ULookAtOffsetInputComponent::AfterRead();

	READ_PTR_FULL(TargetOars, ARowingSeat);
}

void URowingInputComponent::BeforeDelete()
{
	ULookAtOffsetInputComponent::BeforeDelete();

	DELE_PTR_FULL(TargetOars);
}

void AStorageSeat::AfterRead()
{
	ASeat::AfterRead();

	READ_PTR_FULL(StorageInteractionInput, UClass);
	READ_PTR_FULL(StorageContainerComponent, UStorageContainerComponent);
}

void AStorageSeat::BeforeDelete()
{
	ASeat::BeforeDelete();

	DELE_PTR_FULL(StorageInteractionInput);
	DELE_PTR_FULL(StorageContainerComponent);
}

// Function:
//		Offset -> 0x038012D0
//		Name   -> Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      WatercraftClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AWatercraft*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AWatercraft* UWatercraftBlueprintFunctionLibrary::STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft");

	UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WatercraftClass = WatercraftClass;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWatercraftBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWatercraftBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UWatercraftServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWatercraftServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AWatercraftService::AfterRead()
{
	AActor::AfterRead();

}

void AWatercraftService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UWatercraftSpawnData::AfterRead()
{
	UItemSpawnData::AfterRead();

}

void UWatercraftSpawnData::BeforeDelete()
{
	UItemSpawnData::BeforeDelete();

}

// Function:
//		Offset -> 0x038010A0
//		Name   -> Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      WatercraftActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWatercraftTrackerComponent::OnWatercraftDestroyed(class AActor* WatercraftActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed");

	UWatercraftTrackerComponent_OnWatercraftDestroyed_Params params;
	params.WatercraftActor = WatercraftActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWatercraftTrackerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UWatercraftTrackerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
