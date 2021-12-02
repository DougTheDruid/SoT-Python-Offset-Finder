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

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Projectile_CannonBall.BP_Projectile_CannonBall_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_CannonBall_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Projectile_CannonBall.BP_Projectile_CannonBall_C.UserConstructionScript");

	ABP_Projectile_CannonBall_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Projectile_CannonBall_C::AfterRead()
{
	ACannonProjectile::AfterRead();

	READ_PTR_FULL(SphereCollisionExtentAdjustOverTime, USphereCollisionExtentAdjustOverTimeComponent);
	READ_PTR_FULL(CannonBall, UStaticMeshComponent);
	READ_PTR_FULL(Collision, USphereComponent);
}

void ABP_Projectile_CannonBall_C::BeforeDelete()
{
	ACannonProjectile::BeforeDelete();

	DELE_PTR_FULL(SphereCollisionExtentAdjustOverTime);
	DELE_PTR_FULL(CannonBall);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
