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

// Function BP_bld_pot_shop_boiler_01_a.BP_bld_pot_shop_boiler_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_bld_pot_shop_boiler_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_bld_pot_shop_boiler_01_a.BP_bld_pot_shop_boiler_01_a_C.UserConstructionScript");

	ABP_bld_pot_shop_boiler_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_bld_pot_shop_boiler_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(vfx_magic_fire_pot, UParticleSystemComponent);
	READ_PTR_FULL(bld_pot_shop_boiler_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_bld_pot_shop_boiler_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(vfx_magic_fire_pot);
	DELE_PTR_FULL(bld_pot_shop_boiler_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
