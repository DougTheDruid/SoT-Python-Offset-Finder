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
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsOn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlintlockPistol_C::SetScopeEffectOn(bool IsOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn");

	ABP_FlintlockPistol_C_SetScopeEffectOn_Params params {};
	params.IsOn = IsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlintlockPistol_C::determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship");

	ABP_FlintlockPistol_C_determine_sfx_relationship_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Relationship != nullptr)
		*Relationship = params.Relationship;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FlintlockPistol_C::DoFireEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect");

	ABP_FlintlockPistol_C_DoFireEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FlintlockPistol_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript");

	ABP_FlintlockPistol_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FlintlockPistol_C::OnWeaponFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired");

	ABP_FlintlockPistol_C_OnWeaponFired_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FlintlockPistol_C::RadialBlurOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn");

	ABP_FlintlockPistol_C_RadialBlurOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FlintlockPistol_C::RadialBlurOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff");

	ABP_FlintlockPistol_C_RadialBlurOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlintlockPistol_C::ExecuteUbergraph_BP_FlintlockPistol(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol");

	ABP_FlintlockPistol_C_ExecuteUbergraph_BP_FlintlockPistol_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FlintlockPistol_C::AfterRead()
{
	AProjectileWeapon::AfterRead();

	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(ThirdPerson_VFX_AI, UObject);
	READ_PTR_FULL(Flintlock3rdPersonSFX, UWwiseEvent);
	READ_PTR_FULL(FlintLockFirstPersonSFX, UWwiseEvent);
}

void ABP_FlintlockPistol_C::BeforeDelete()
{
	AProjectileWeapon::BeforeDelete();

	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(DynamicMaterial);
	DELE_PTR_FULL(ThirdPerson_VFX_AI);
	DELE_PTR_FULL(Flintlock3rdPersonSFX);
	DELE_PTR_FULL(FlintLockFirstPersonSFX);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
