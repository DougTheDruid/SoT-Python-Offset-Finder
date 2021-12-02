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
//		Name   -> Function BP_LargeShip_StandardHull_Damage.BP_LargeShip_StandardHull_Damage_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_Damage_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Damage.BP_LargeShip_StandardHull_Damage_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_Damage_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_StandardHull_Damage_C::AfterRead()
{
	ABP_HullDamage_C::AfterRead();

	READ_PTR_FULL(projectile_collision, UStaticMeshComponent);
	READ_PTR_FULL(Damage_Zone_Middle_16, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_15, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_14, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_13, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_12, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_11, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_09, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_08, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_07, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_06, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_05, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_04, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_03, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_02, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Middle_01, UChildActorComponent);
	READ_PTR_FULL(largeship_standardhull_upper_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Damage_Zone_Lower_09, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_08, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_07, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_06, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_17, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_16, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_15, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_14, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_13, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_12, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_11, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_05, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_04, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_03, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_02, UChildActorComponent);
	READ_PTR_FULL(Damage_Zone_Lower_01, UChildActorComponent);
	READ_PTR_FULL(largeship_standardhull_lower_01_a, UStaticMeshComponent);
}

void ABP_LargeShip_StandardHull_Damage_C::BeforeDelete()
{
	ABP_HullDamage_C::BeforeDelete();

	DELE_PTR_FULL(projectile_collision);
	DELE_PTR_FULL(Damage_Zone_Middle_16);
	DELE_PTR_FULL(Damage_Zone_Middle_15);
	DELE_PTR_FULL(Damage_Zone_Middle_14);
	DELE_PTR_FULL(Damage_Zone_Middle_13);
	DELE_PTR_FULL(Damage_Zone_Middle_12);
	DELE_PTR_FULL(Damage_Zone_Middle_11);
	DELE_PTR_FULL(Damage_Zone_Middle_09);
	DELE_PTR_FULL(Damage_Zone_Middle_08);
	DELE_PTR_FULL(Damage_Zone_Middle_07);
	DELE_PTR_FULL(Damage_Zone_Middle_06);
	DELE_PTR_FULL(Damage_Zone_Middle_05);
	DELE_PTR_FULL(Damage_Zone_Middle_04);
	DELE_PTR_FULL(Damage_Zone_Middle_03);
	DELE_PTR_FULL(Damage_Zone_Middle_02);
	DELE_PTR_FULL(Damage_Zone_Middle_01);
	DELE_PTR_FULL(largeship_standardhull_upper_01_a);
	DELE_PTR_FULL(Damage_Zone_Lower_09);
	DELE_PTR_FULL(Damage_Zone_Lower_08);
	DELE_PTR_FULL(Damage_Zone_Lower_07);
	DELE_PTR_FULL(Damage_Zone_Lower_06);
	DELE_PTR_FULL(Damage_Zone_Lower_17);
	DELE_PTR_FULL(Damage_Zone_Lower_16);
	DELE_PTR_FULL(Damage_Zone_Lower_15);
	DELE_PTR_FULL(Damage_Zone_Lower_14);
	DELE_PTR_FULL(Damage_Zone_Lower_13);
	DELE_PTR_FULL(Damage_Zone_Lower_12);
	DELE_PTR_FULL(Damage_Zone_Lower_11);
	DELE_PTR_FULL(Damage_Zone_Lower_05);
	DELE_PTR_FULL(Damage_Zone_Lower_04);
	DELE_PTR_FULL(Damage_Zone_Lower_03);
	DELE_PTR_FULL(Damage_Zone_Lower_02);
	DELE_PTR_FULL(Damage_Zone_Lower_01);
	DELE_PTR_FULL(largeship_standardhull_lower_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
