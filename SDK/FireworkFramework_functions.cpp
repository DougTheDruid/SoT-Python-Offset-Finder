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

void FWeightedFireworkVFXData::AfterRead()
{
	READ_PTR_FULL(VFX, UObject);
}

void FWeightedFireworkVFXData::BeforeDelete()
{
	DELE_PTR_FULL(VFX);
}

void FFireworkExplosionData::AfterRead()
{
	READ_PTR_FULL(VFX, UObject);
}

void FFireworkExplosionData::BeforeDelete()
{
	DELE_PTR_FULL(VFX);
}

void FGeneratedFireworkData::AfterRead()
{
}

void FGeneratedFireworkData::BeforeDelete()
{
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

}

void UFireworkDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void AFireworkExplosion::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(RootSceneComponent, USceneComponent);
}

void AFireworkExplosion::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(RootSceneComponent);
}

void AFireworkItemInfo::AfterRead()
{
	AItemInfo::AfterRead();

	READ_PTR_FULL(FireworkDataAsset, UFireworkDataAsset);
}

void AFireworkItemInfo::BeforeDelete()
{
	AItemInfo::BeforeDelete();

	DELE_PTR_FULL(FireworkDataAsset);
}

void AFireworkProjectile::AfterRead()
{
	ALaunchableProjectile::AfterRead();

	READ_PTR_FULL(CollisionComponent, USphereComponent);
	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(ExplosionComponent, UExplosionComponent);
}

void AFireworkProjectile::BeforeDelete()
{
	ALaunchableProjectile::BeforeDelete();

	DELE_PTR_FULL(CollisionComponent);
	DELE_PTR_FULL(MeshComponent);
	DELE_PTR_FULL(ExplosionComponent);
}

void UImpactProjectileIdFirework::AfterRead()
{
	UImpactProjectileId::AfterRead();

}

void UImpactProjectileIdFirework::BeforeDelete()
{
	UImpactProjectileId::BeforeDelete();

}

// Function:
//		Offset -> 0x01637030
//		Name   -> Function FireworkFramework.PrototypeFireworkProjectile.Explode
//		Flags  -> (Event, Protected, BlueprintEvent)
void APrototypeFireworkProjectile::Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FireworkFramework.PrototypeFireworkProjectile.Explode");

	APrototypeFireworkProjectile_Explode_Params params;

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
