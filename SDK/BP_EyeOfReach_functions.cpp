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
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EyeOfReach_C::determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship");

	ABP_EyeOfReach_C_determine_sfx_relationship_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Relationship != nullptr)
		*Relationship = params.Relationship;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_EyeOfReach_C::DoFireEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect");

	ABP_EyeOfReach_C_DoFireEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EyeOfReach_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript");

	ABP_EyeOfReach_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EyeOfReach_C::OnWeaponFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired");

	ABP_EyeOfReach_C_OnWeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EyeOfReach_C::ScopeOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn");

	ABP_EyeOfReach_C_ScopeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EyeOfReach_C::ScopeOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff");

	ABP_EyeOfReach_C_ScopeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EyeOfReach_C::ScopeTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick");

	ABP_EyeOfReach_C_ScopeTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EyeOfReach_C::ScopeOffImmediate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate");

	ABP_EyeOfReach_C_ScopeOffImmediate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EyeOfReach_C::GlintOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn");

	ABP_EyeOfReach_C_GlintOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EyeOfReach_C::GlintOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff");

	ABP_EyeOfReach_C_GlintOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EyeOfReach_C::ExecuteUbergraph_BP_EyeOfReach(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach");

	ABP_EyeOfReach_C_ExecuteUbergraph_BP_EyeOfReach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EyeOfReach_C::AfterRead()
{
	AProjectileWeapon::AfterRead();

	READ_PTR_FULL(Glint, UStaticMeshComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(BlurCurve, UCurveFloat);
	READ_PTR_FULL(LensNormal, UTexture2D);
	READ_PTR_FULL(LensMask, UTexture2D);
}

void ABP_EyeOfReach_C::BeforeDelete()
{
	AProjectileWeapon::BeforeDelete();

	DELE_PTR_FULL(Glint);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(DynamicMaterial);
	DELE_PTR_FULL(BlurCurve);
	DELE_PTR_FULL(LensNormal);
	DELE_PTR_FULL(LensMask);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
