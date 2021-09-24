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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Projectile_VolcanoRockSmall.BP_Projectile_VolcanoRockSmall_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_VolcanoRockSmall_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Projectile_VolcanoRockSmall.BP_Projectile_VolcanoRockSmall_C.UserConstructionScript");

	ABP_Projectile_VolcanoRockSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Projectile_VolcanoRockSmall_C::AfterRead()
{
	AVolcanicRock::AfterRead();

	READ_PTR_FULL(RotatingAudioSource, URotatingAudioSourceComponent);
	READ_PTR_FULL(RockMesh, UStaticMeshComponent);
	READ_PTR_FULL(Collision, USphereComponent);
}

void ABP_Projectile_VolcanoRockSmall_C::BeforeDelete()
{
	AVolcanicRock::BeforeDelete();

	DELE_PTR_FULL(RotatingAudioSource);
	DELE_PTR_FULL(RockMesh);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
