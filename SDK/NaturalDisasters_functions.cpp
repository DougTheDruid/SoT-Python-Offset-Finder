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

void FVolcanoSetupDataEmbersEntry::AfterRead()
{
	READ_PTR_FULL(Effect, UObject);
}

void FVolcanoSetupDataEmbersEntry::BeforeDelete()
{
	DELE_PTR_FULL(Effect);
}

void FWeightedVolcanoProjectile::AfterRead()
{
	READ_PTR_FULL(ProjectileClass, UClass);
	READ_PTR_FULL(LaunchAudioPlayEvent, UWwiseEvent);
}

void FWeightedVolcanoProjectile::BeforeDelete()
{
	DELE_PTR_FULL(ProjectileClass);
	DELE_PTR_FULL(LaunchAudioPlayEvent);
}

void FVolcanoTargetChances::AfterRead()
{
}

void FVolcanoTargetChances::BeforeDelete()
{
}

void FWeightedAshenLordVolcanoProjectile::AfterRead()
{
	READ_PTR_FULL(ProjectileClass, UClass);
}

void FWeightedAshenLordVolcanoProjectile::BeforeDelete()
{
	DELE_PTR_FULL(ProjectileClass);
}

void FAshenLordWorldEndCloudAnimation::AfterRead()
{
}

void FAshenLordWorldEndCloudAnimation::BeforeDelete()
{
}

void FGeyserSpawnAngleOption::AfterRead()
{
}

void FGeyserSpawnAngleOption::BeforeDelete()
{
}

void FVolcanoStateData::AfterRead()
{
}

void FVolcanoStateData::BeforeDelete()
{
}

void FVolcanoProjectileData::AfterRead()
{
}

void FVolcanoProjectileData::BeforeDelete()
{
}

void FVolcanoTarget::AfterRead()
{
	READ_PTR_FULL(Target, AActor);
}

void FVolcanoTarget::BeforeDelete()
{
	DELE_PTR_FULL(Target);
}

void FVolcanoTargetCoolDown::AfterRead()
{
	READ_PTR_FULL(Target, AActor);
}

void FVolcanoTargetCoolDown::BeforeDelete()
{
	DELE_PTR_FULL(Target);
}

void FEarthquakeForceFeedbackOption::AfterRead()
{
}

void FEarthquakeForceFeedbackOption::BeforeDelete()
{
}

void FEarthquakeForceFeedback::AfterRead()
{
}

void FEarthquakeForceFeedback::BeforeDelete()
{
}

void FPlayerFeedback::AfterRead()
{
}

void FPlayerFeedback::BeforeDelete()
{
}

void UAshenLordAshCloudSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ScaleUpSpeedCurve, UCurveFloat);
	READ_PTR_FULL(DissipationCurve, UCurveFloat);
}

void UAshenLordAshCloudSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ScaleUpSpeedCurve);
	DELE_PTR_FULL(DissipationCurve);
}

// Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAshenLordAshCloud::UpdatePostSettingsBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP");

	AAshenLordAshCloud_UpdatePostSettingsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CloudDensity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAshenLordAshCloud::SetDissipationDensityBP(float CloudDensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP");

	AAshenLordAshCloud_SetDissipationDensityBP_Params params;
	params.CloudDensity = CloudDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
// (Final, Native, Private)
void AAshenLordAshCloud::OnRep_StateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged");

	AAshenLordAshCloud_OnRep_StateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAshenLordAshCloud::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(CloudMesh, UStaticMeshComponent);
	READ_PTR_FULL(SetupData, UAshenLordAshCloudSetupDataAsset);
}

void AAshenLordAshCloud::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(CloudMesh);
	DELE_PTR_FULL(SetupData);
}

// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AAshenLordVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile");

	AAshenLordVolcano_Multicast_FireProjectile_Params params;
	params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAshenLordVolcano::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(VolcanoSetupData, UAshenLordVolcanoSetupDataAsset);
}

void AAshenLordVolcano::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(VolcanoSetupData);
}

void UVolcanoSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(LocalMiniProjectilesClass, UClass);
}

void UVolcanoSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(LocalMiniProjectilesClass);
}

void UAshenLordVolcanoSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAshenLordVolcanoSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
// (Final, Native, Public)
void AAshenLordWorldEndCloud::OnRep_CloudStateChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange");

	AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          AdjustedLifetime               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAshenLordWorldEndCloud::AnimateCloud(float AdjustedLifetime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud");

	AAshenLordWorldEndCloud_AnimateCloud_Params params;
	params.AdjustedLifetime = AdjustedLifetime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAshenLordWorldEndCloud::AfterRead()
{
	AActor::AfterRead();

}

void AAshenLordWorldEndCloud::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UEarthquakeSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEarthquakeSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<NaturalDisasters_EEarthquakeState> OldEarthquakeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEarthquake::OnRep_EarthquakeState(TEnumAsByte<NaturalDisasters_EEarthquakeState> OldEarthquakeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState");

	AEarthquake_OnRep_EarthquakeState_Params params;
	params.OldEarthquakeState = OldEarthquakeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AEarthquake::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(EarthquakeSetupData, UEarthquakeSetupDataAsset);
	READ_PTR_FULL(AssociatedVolcano, AVolcano);
	READ_PTR_FULL(AssociatedGeyserManager, AGeyserManager);
	READ_PTR_FULL(AudioPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(PlayEarthquakeLarge, UWwiseEvent);
	READ_PTR_FULL(StopEarthquakeLarge, UWwiseEvent);
	READ_PTR_FULL(PlayEarthquakeSmall, UWwiseEvent);
	READ_PTR_FULL(StopEarthquakeSmall, UWwiseEvent);
	READ_PTR_FULL(HitDetectionVolume, UCapsuleComponent);
	READ_PTR_FULL(WindZone, UWindZoneComponent);
}

void AEarthquake::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(EarthquakeSetupData);
	DELE_PTR_FULL(AssociatedVolcano);
	DELE_PTR_FULL(AssociatedGeyserManager);
	DELE_PTR_FULL(AudioPool);
	DELE_PTR_FULL(PlayEarthquakeLarge);
	DELE_PTR_FULL(StopEarthquakeLarge);
	DELE_PTR_FULL(PlayEarthquakeSmall);
	DELE_PTR_FULL(StopEarthquakeSmall);
	DELE_PTR_FULL(HitDetectionVolume);
	DELE_PTR_FULL(WindZone);
}

// Function NaturalDisasters.Geyser.OnRep_GeyserState
// (Final, Native, Private)
void AGeyser::OnRep_GeyserState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.OnRep_GeyserState");

	AGeyser_OnRep_GeyserState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void AGeyser::Multicast_TriggerExplosion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion");

	AGeyser_Multicast_TriggerExplosion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGeyser::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SetupData, UGeyserSetupDataAsset);
	READ_PTR_FULL(StartActiveAudioLoopEvent, UWwiseEvent);
	READ_PTR_FULL(StopActiveAudioLoopEvent, UWwiseEvent);
	READ_PTR_FULL(PlayEruptingAudioEvent, UWwiseEvent);
	READ_PTR_FULL(AudioEmitterComponent, UWwiseEmitterComponent);
	READ_PTR_FULL(ExplosionComponent, UExplosionComponent);
	READ_PTR_FULL(ActiveParticlesComponent, UParticleSystemComponent);
	READ_PTR_FULL(EruptingParticlesComponent, UParticleSystemComponent);
	READ_PTR_FULL(GeyserHoleClass, UClass);
	READ_PTR_FULL(GeyserHole, AHole);
}

void AGeyser::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SetupData);
	DELE_PTR_FULL(StartActiveAudioLoopEvent);
	DELE_PTR_FULL(StopActiveAudioLoopEvent);
	DELE_PTR_FULL(PlayEruptingAudioEvent);
	DELE_PTR_FULL(AudioEmitterComponent);
	DELE_PTR_FULL(ExplosionComponent);
	DELE_PTR_FULL(ActiveParticlesComponent);
	DELE_PTR_FULL(EruptingParticlesComponent);
	DELE_PTR_FULL(GeyserHoleClass);
	DELE_PTR_FULL(GeyserHole);
}

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<Athena_EMechanismActionState> PreviousState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Athena_EMechanismActionState> NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMechanismGeyser::OnMechanismActionStateChanged(TEnumAsByte<Athena_EMechanismActionState> PreviousState, TEnumAsByte<Athena_EMechanismActionState> NewState, class AActor* InInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged");

	AMechanismGeyser_OnMechanismActionStateChanged_Params params;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
// (Final, Native, Private)
void AMechanismGeyser::OnMechanismActionReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset");

	AMechanismGeyser_OnMechanismActionReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AMechanismGeyser::AfterRead()
{
	AGeyser::AfterRead();

	READ_PTR_FULL(MechanismActionComponent, UMechanismActionComponent);
}

void AMechanismGeyser::BeforeDelete()
{
	AGeyser::BeforeDelete();

	DELE_PTR_FULL(MechanismActionComponent);
}

void UGeyserManagerSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(GeyserToSpawn, UClass);
}

void UGeyserManagerSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(GeyserToSpawn);
}

void UNaturalDisasterRegistryInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNaturalDisasterRegistryInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AGeyserManager::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(GeyserManagerSetupData, UGeyserManagerSetupDataAsset);
	READ_PTR_FULL(Root, USceneComponent);
}

void AGeyserManager::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(GeyserManagerSetupData);
	DELE_PTR_FULL(Root);
}

// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 GeyserSpawnLocation            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UGeyserItemSpawnComponent::OnGeyserSpawned(const struct FVector& GeyserSpawnLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned");

	UGeyserItemSpawnComponent_OnGeyserSpawned_Params params;
	params.GeyserSpawnLocation = GeyserSpawnLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGeyserItemSpawnComponent::AfterRead()
{
	UItemSpawnComponent::AfterRead();

}

void UGeyserItemSpawnComponent::BeforeDelete()
{
	UItemSpawnComponent::BeforeDelete();

}

void UGeyserSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UGeyserSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void ULavaStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void ULavaStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class AActor*>          PreviousActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALavaZone::OnRep_ActorsInZone(TArray<class AActor*> PreviousActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone");

	ALavaZone_OnRep_ActorsInZone_Params params;
	params.PreviousActors = PreviousActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.LavaZone.OnRep_Active
// (Final, Native, Private)
void ALavaZone::OnRep_Active()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_Active");

	ALavaZone_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALavaZone::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(LavaMaterial, UPhysicalMaterial);
}

void ALavaZone::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(LavaMaterial);
}

void USuperheatedWaterSetupDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void USuperheatedWaterSetupDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
// (Final, Native, Private)
void ASuperheatedWater::OnRep_PlayersInZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone");

	ASuperheatedWater_OnRep_PlayersInZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ASuperheatedWater::AfterRead()
{
	AMurk::AfterRead();

	READ_PTR_FULL(SetupData, USuperheatedWaterSetupDataAsset);
	READ_PTR_FULL(HitDetectionVolume, UCapsuleComponent);
}

void ASuperheatedWater::BeforeDelete()
{
	AMurk::BeforeDelete();

	DELE_PTR_FULL(SetupData);
	DELE_PTR_FULL(HitDetectionVolume);
}

// Function NaturalDisasters.Volcano.OnRep_VolcanoState
// (Final, Native, Private)
// Parameters:
// struct FVolcanoStateData       OldVolcanoState                (ConstParm, Parm)
void AVolcano::OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.OnRep_VolcanoState");

	AVolcano_OnRep_VolcanoState_Params params;
	params.OldVolcanoState = OldVolcanoState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Volcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray     (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void AVolcano::Multicast_FireProjectile(const struct FVector& AuthoritySpawnLocation, TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.Multicast_FireProjectile");

	AVolcano_Multicast_FireProjectile_Params params;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.VolcanoProjectileDataArray = VolcanoProjectileDataArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVolcano::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(HitDetectionVolume, UCapsuleComponent);
	READ_PTR_FULL(VolcanoSetupData, UVolcanoSetupDataAsset);
	READ_PTR_FULL(AssociatedSuperheatedWater, AMurk);
	READ_PTR_FULL(AssociatedLavaZone, ALavaZone);
	READ_PTR_FULL(WarmingUpEmitter, UParticleSystemComponent);
	READ_PTR_FULL(EruptingEmitter, UParticleSystemComponent);
	READ_PTR_FULL(BlendedLightingZoneComponent, UBlendedLightingZoneComponent);
	READ_PTR_FULL(BlendedAtmosphericPressureZoneComponent, UBlendedAtmosphericPressureZoneComponent);
	READ_PTR_FULL(BlendedPostProcessingRainZoneComponent, UBlendedPostProcessingRainZoneComponent);
	READ_PTR_FULL(AudioPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(WarmupAudioPlayEvent, UWwiseEvent);
	READ_PTR_FULL(WarmupAudioStopEvent, UWwiseEvent);
	READ_PTR_FULL(EruptingAudioPlayEvent, UWwiseEvent);
	READ_PTR_FULL(EruptingAudioStopEvent, UWwiseEvent);
	READ_PTR_FULL(InstantKillZone, UCapsuleComponent);
}

void AVolcano::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(HitDetectionVolume);
	DELE_PTR_FULL(VolcanoSetupData);
	DELE_PTR_FULL(AssociatedSuperheatedWater);
	DELE_PTR_FULL(AssociatedLavaZone);
	DELE_PTR_FULL(WarmingUpEmitter);
	DELE_PTR_FULL(EruptingEmitter);
	DELE_PTR_FULL(BlendedLightingZoneComponent);
	DELE_PTR_FULL(BlendedAtmosphericPressureZoneComponent);
	DELE_PTR_FULL(BlendedPostProcessingRainZoneComponent);
	DELE_PTR_FULL(AudioPool);
	DELE_PTR_FULL(WarmupAudioPlayEvent);
	DELE_PTR_FULL(WarmupAudioStopEvent);
	DELE_PTR_FULL(EruptingAudioPlayEvent);
	DELE_PTR_FULL(EruptingAudioStopEvent);
	DELE_PTR_FULL(InstantKillZone);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
