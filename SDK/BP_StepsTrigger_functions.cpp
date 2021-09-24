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
//		Name   -> Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_StepsTrigger_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript");

	ABP_StepsTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_StepsTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay");

	ABP_StepsTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_StepsTrigger_C::ExecuteUbergraph_BP_StepsTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger");

	ABP_StepsTrigger_C_ExecuteUbergraph_BP_StepsTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_StepsTrigger_C::AfterRead()
{
	ATavernStepsTrigger::AfterRead();

	READ_PTR_FULL(bld_tavern_entrance_steps_lightshafts_01_a, UStaticMeshComponent);
	READ_PTR_FULL(vfx_tavern_stairs_symbol_glow, UParticleSystemComponent);
	READ_PTR_FULL(Decal, UDecalComponent);
	READ_PTR_FULL(vfx_tavern_stairs_glow, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_falling_dust_under_ground, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_falling_dust2, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_falling_dust1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_impact3, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_impact2, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_impact1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_impact, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_stairs_falling_dust, UParticleSystemComponent);
	READ_PTR_FULL(AnimatedStepsComponent, UBP_AnimatedStepsComponent_C);
	READ_PTR_FULL(Box1, UBoxComponent);
	READ_PTR_FULL(Box3, UBoxComponent);
	READ_PTR_FULL(Box2, UBoxComponent);
	READ_PTR_FULL(Box0, UBoxComponent);
	READ_PTR_FULL(StepsMesh, UPoseableSkeletalMeshComponent);
}

void ABP_StepsTrigger_C::BeforeDelete()
{
	ATavernStepsTrigger::BeforeDelete();

	DELE_PTR_FULL(bld_tavern_entrance_steps_lightshafts_01_a);
	DELE_PTR_FULL(vfx_tavern_stairs_symbol_glow);
	DELE_PTR_FULL(Decal);
	DELE_PTR_FULL(vfx_tavern_stairs_glow);
	DELE_PTR_FULL(vfx_tavern_stairs_falling_dust_under_ground);
	DELE_PTR_FULL(vfx_tavern_stairs_falling_dust2);
	DELE_PTR_FULL(vfx_tavern_stairs_falling_dust1);
	DELE_PTR_FULL(vfx_tavern_stairs_impact3);
	DELE_PTR_FULL(vfx_tavern_stairs_impact2);
	DELE_PTR_FULL(vfx_tavern_stairs_impact1);
	DELE_PTR_FULL(vfx_tavern_stairs_impact);
	DELE_PTR_FULL(vfx_tavern_stairs_falling_dust);
	DELE_PTR_FULL(AnimatedStepsComponent);
	DELE_PTR_FULL(Box1);
	DELE_PTR_FULL(Box3);
	DELE_PTR_FULL(Box2);
	DELE_PTR_FULL(Box0);
	DELE_PTR_FULL(StepsMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
