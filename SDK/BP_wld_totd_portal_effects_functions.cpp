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
//		Name   -> Function BP_wld_totd_portal_effects.BP_wld_totd_portal_effects_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_wld_totd_portal_effects_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_wld_totd_portal_effects.BP_wld_totd_portal_effects_C.UserConstructionScript");

	ABP_wld_totd_portal_effects_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_wld_totd_portal_effects.BP_wld_totd_portal_effects_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_wld_totd_portal_effects_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_wld_totd_portal_effects.BP_wld_totd_portal_effects_C.ReceiveBeginPlay");

	ABP_wld_totd_portal_effects_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_wld_totd_portal_effects.BP_wld_totd_portal_effects_C.ExecuteUbergraph_BP_wld_totd_portal_effects
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_wld_totd_portal_effects_C::ExecuteUbergraph_BP_wld_totd_portal_effects(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_wld_totd_portal_effects.BP_wld_totd_portal_effects_C.ExecuteUbergraph_BP_wld_totd_portal_effects");

	ABP_wld_totd_portal_effects_C_ExecuteUbergraph_BP_wld_totd_portal_effects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_wld_totd_portal_effects_C::AfterRead()
{
	ABP_TotD_PortalController_C::AfterRead();

	READ_PTR_FULL(vfx_PortalAmbience_02, UParticleSystemComponent);
	READ_PTR_FULL(vfx_PortalAmbience_01, UParticleSystemComponent);
	READ_PTR_FULL(TipLight, UPointLightComponent);
	READ_PTR_FULL(vfx_cloud, UStaticMeshComponent);
	READ_PTR_FULL(Portal, UStaticMeshComponent);
	READ_PTR_FULL(vfx_cloud_depth, UStaticMeshComponent);
	READ_PTR_FULL(vfx_big_cloud, UStaticMeshComponent);
	READ_PTR_FULL(roundedcube_invertednormals, UStaticMeshComponent);
	READ_PTR_FULL(crack_decal2, UDecalComponent);
	READ_PTR_FULL(crack_decal, UDecalComponent);
	READ_PTR_FULL(volume_glow, UStaticMeshComponent);
	READ_PTR_FULL(LightComponent0, UPointLightComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void ABP_wld_totd_portal_effects_C::BeforeDelete()
{
	ABP_TotD_PortalController_C::BeforeDelete();

	DELE_PTR_FULL(vfx_PortalAmbience_02);
	DELE_PTR_FULL(vfx_PortalAmbience_01);
	DELE_PTR_FULL(TipLight);
	DELE_PTR_FULL(vfx_cloud);
	DELE_PTR_FULL(Portal);
	DELE_PTR_FULL(vfx_cloud_depth);
	DELE_PTR_FULL(vfx_big_cloud);
	DELE_PTR_FULL(roundedcube_invertednormals);
	DELE_PTR_FULL(crack_decal2);
	DELE_PTR_FULL(crack_decal);
	DELE_PTR_FULL(volume_glow);
	DELE_PTR_FULL(LightComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
