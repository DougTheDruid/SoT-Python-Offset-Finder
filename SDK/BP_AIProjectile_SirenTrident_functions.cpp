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
//		Name   -> Function BP_AIProjectile_SirenTrident.BP_AIProjectile_SirenTrident_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AIProjectile_SirenTrident_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AIProjectile_SirenTrident.BP_AIProjectile_SirenTrident_C.UserConstructionScript");

	ABP_AIProjectile_SirenTrident_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AIProjectile_SirenTrident_C::AfterRead()
{
	ASirenTridentProjectile::AfterRead();

	READ_PTR_FULL(SphereCollisionExtentAdjustOverTime, USphereCollisionExtentAdjustOverTimeComponent);
	READ_PTR_FULL(Sphere, UStaticMeshComponent);
	READ_PTR_FULL(Collision, USphereComponent);
}

void ABP_AIProjectile_SirenTrident_C::BeforeDelete()
{
	ASirenTridentProjectile::BeforeDelete();

	DELE_PTR_FULL(SphereCollisionExtentAdjustOverTime);
	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
