// Name: SoT, Version: 2.4.0

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

void FFireworkAmbientLightData::AfterRead()
{
}

void FFireworkAmbientLightData::BeforeDelete()
{
}

void FWeightedFireworkVFXData::AfterRead()
{
	READ_PTR_FULL(VFX, UObject);
	READ_PTR_FULL(Sfx, UWwiseEvent);
	READ_PTR_FULL(SecondarySFX, UWwiseEvent);
}

void FWeightedFireworkVFXData::BeforeDelete()
{
	DELE_PTR_FULL(VFX);
	DELE_PTR_FULL(Sfx);
	DELE_PTR_FULL(SecondarySFX);
}

void FFireworkExplosionData::AfterRead()
{
	READ_PTR_FULL(VFX, UObject);
	READ_PTR_FULL(Sfx, UWwiseEvent);
	READ_PTR_FULL(SecondarySFX, UWwiseEvent);
}

void FFireworkExplosionData::BeforeDelete()
{
	DELE_PTR_FULL(VFX);
	DELE_PTR_FULL(Sfx);
	DELE_PTR_FULL(SecondarySFX);
}

void FGeneratedFireworkData::AfterRead()
{
	READ_PTR_FULL(SfxPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(LaunchSfx, UWwiseEvent);
	READ_PTR_FULL(CameraShake, UClass);
	READ_PTR_FULL(ExplosionRumble, UForceFeedbackEffect);
}

void FGeneratedFireworkData::BeforeDelete()
{
	DELE_PTR_FULL(SfxPool);
	DELE_PTR_FULL(LaunchSfx);
	DELE_PTR_FULL(CameraShake);
	DELE_PTR_FULL(ExplosionRumble);
}

void FWeightedProjectileMeshAnimationData::AfterRead()
{
}

void FWeightedProjectileMeshAnimationData::BeforeDelete()
{
}

void UFireworkAmbientLightComponent::AfterRead()
{
	UAmbientLightSourceComponent::AfterRead();

}

void UFireworkAmbientLightComponent::BeforeDelete()
{
	UAmbientLightSourceComponent::BeforeDelete();

}

void UFireworkDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void UFireworkDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

void UFireworkDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ExplosionSfxPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(LaunchSfx, UWwiseEvent);
	READ_PTR_FULL(CameraShake, UClass);
	READ_PTR_FULL(ExplosionRumble, UForceFeedbackEffect);
}

void UFireworkDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ExplosionSfxPool);
	DELE_PTR_FULL(LaunchSfx);
	DELE_PTR_FULL(CameraShake);
	DELE_PTR_FULL(ExplosionRumble);
}

void AFireworkExplosion::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(RootSceneComponent, USceneComponent);
	READ_PTR_FULL(FireworkAmbientLightComponent, UFireworkAmbientLightComponent);
	READ_PTR_FULL(SpawnedExplosionParticles, UParticleSystemComponent);
}

void AFireworkExplosion::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(RootSceneComponent);
	DELE_PTR_FULL(FireworkAmbientLightComponent);
	DELE_PTR_FULL(SpawnedExplosionParticles);
}

void AFireworkItemInfo::AfterRead()
{
	AItemInfo::AfterRead();

	READ_PTR_FULL(LoadableProjectileComponent, ULoadableFireworkComponent);
}

void AFireworkItemInfo::BeforeDelete()
{
	AItemInfo::BeforeDelete();

	DELE_PTR_FULL(LoadableProjectileComponent);
}

void UFireworkServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFireworkServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AFireworkProjectile::AfterRead()
{
	ALaunchableProjectile::AfterRead();

	READ_PTR_FULL(CollisionComponent, USphereComponent);
	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(ExplosionComponent, UExplosionComponent);
	READ_PTR_FULL(FireworkStatsComponent, UFireworkStatsComponent);
	READ_PTR_FULL(MeshDirectionComponent, USceneComponent);
	READ_PTR_FULL(AnimationComponent, UProjectileAnimationComponent);
}

void AFireworkProjectile::BeforeDelete()
{
	ALaunchableProjectile::BeforeDelete();

	DELE_PTR_FULL(CollisionComponent);
	DELE_PTR_FULL(MeshComponent);
	DELE_PTR_FULL(ExplosionComponent);
	DELE_PTR_FULL(FireworkStatsComponent);
	DELE_PTR_FULL(MeshDirectionComponent);
	DELE_PTR_FULL(AnimationComponent);
}

void AFireworkService::AfterRead()
{
	AActor::AfterRead();

}

void AFireworkService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UFireworksSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UFireworksSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UFireworksSettingsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(FuseSoundWisePool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(FuseActivateSoundPlayEvent, UWwiseEvent);
	READ_PTR_FULL(FuseSoundPlayEvent, UWwiseEvent);
	READ_PTR_FULL(FuseSoundStopEvent, UWwiseEvent);
	READ_PTR_FULL(FuseParticleSystem, UObject);
}

void UFireworksSettingsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(FuseSoundWisePool);
	DELE_PTR_FULL(FuseActivateSoundPlayEvent);
	DELE_PTR_FULL(FuseSoundPlayEvent);
	DELE_PTR_FULL(FuseSoundStopEvent);
	DELE_PTR_FULL(FuseParticleSystem);
}

void UFireworkStatsComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UFireworkStatsComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UImpactProjectileIdFirework::AfterRead()
{
	UImpactProjectileId::AfterRead();

}

void UImpactProjectileIdFirework::BeforeDelete()
{
	UImpactProjectileId::BeforeDelete();

}

void ULoadableFireworkComponent::AfterRead()
{
	ULoadableProjectileComponent::AfterRead();

	READ_PTR_FULL(FireworksSettingsDataAsset, UFireworksSettingsDataAsset);
}

void ULoadableFireworkComponent::BeforeDelete()
{
	ULoadableProjectileComponent::BeforeDelete();

	DELE_PTR_FULL(FireworksSettingsDataAsset);
}

void UProjectileAnimationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
}

void UProjectileAnimationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MeshComponent);
}

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function FireworkFramework.PrototypeFireworkProjectile.Explode
//		Flags  -> (Event, Protected, BlueprintEvent)
void APrototypeFireworkProjectile::Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FireworkFramework.PrototypeFireworkProjectile.Explode");

	APrototypeFireworkProjectile_Explode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void APrototypeFireworkProjectile::AfterRead()
{
	ALaunchableProjectile::AfterRead();

	READ_PTR_FULL(Root, USceneComponent);
	READ_PTR_FULL(FireworkCollision, UCapsuleComponent);
	READ_PTR_FULL(FireworkMesh, UStaticMeshComponent);
}

void APrototypeFireworkProjectile::BeforeDelete()
{
	ALaunchableProjectile::BeforeDelete();

	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(FireworkCollision);
	DELE_PTR_FULL(FireworkMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
