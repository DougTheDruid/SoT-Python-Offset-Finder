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

// Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumExternalHits                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::GetNumExternalHits(int* NumExternalHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits");

	ABP_DamageZone_C_GetNumExternalHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumExternalHits != nullptr)
		*NumExternalHits = params.NumExternalHits;

}


// Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList
// (BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::OnRep_Rep_ExternalHitList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList");

	ABP_DamageZone_C_OnRep_Rep_ExternalHitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DecalMID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::GetOrCreateDecalMID(class UMaterialInstanceDynamic** DecalMID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID");

	ABP_DamageZone_C_GetOrCreateDecalMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DecalMID != nullptr)
		*DecalMID = params.DecalMID;

}


// Function BP_DamageZone.BP_DamageZone_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::Initialise()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.Initialise");

	ABP_DamageZone_C_Initialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.Update External Hits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::Update_External_Hits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.Update External Hits");

	ABP_DamageZone_C_Update_External_Hits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::Clear_Decal_Flags()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags");

	ABP_DamageZone_C_Clear_Decal_Flags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*         Decal                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::Add_Deferred_Decal(class UDecalComponent* Decal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal");

	ABP_DamageZone_C_Add_Deferred_Decal_Params params;
	params.Decal = Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*         Decal                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::KillDeferredDecal(class UDecalComponent** Decal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal");

	ABP_DamageZone_C_KillDeferredDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;

}


// Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::RemoveDeferredDecals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals");

	ABP_DamageZone_C_RemoveDeferredDecals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::Set_Repair_Visibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility");

	ABP_DamageZone_C_Set_Repair_Visibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.Add External Hit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHullDamageHit          HitData                        (Parm)
void ABP_DamageZone_C::Add_External_Hit(const struct FHullDamageHit& HitData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.Add External Hit");

	ABP_DamageZone_C_Add_External_Hit_Params params;
	params.HitData = HitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::CollectTaggedComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents");

	ABP_DamageZone_C_CollectTaggedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript");

	ABP_DamageZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.AddExternalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHullDamageHit          Hit_Data                       (Parm)
void ABP_DamageZone_C::AddExternalHit(const struct FHullDamageHit& Hit_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.AddExternalHit");

	ABP_DamageZone_C_AddExternalHit_Params params;
	params.Hit_Data = Hit_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DamageZone_C::ClearDecalFlags()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags");

	ABP_DamageZone_C_ClearDecalFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> InRepairableState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::OnRepairableStateUpdate(TEnumAsByte<Repair_ERepairableState> InRepairableState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate");

	ABP_DamageZone_C_OnRepairableStateUpdate_Params params;
	params.InRepairableState = InRepairableState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.OnInitialise
// (Event, Public, BlueprintEvent)
void ABP_DamageZone_C::OnInitialise()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.OnInitialise");

	ABP_DamageZone_C_OnInitialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ABP_DamageZone_C::OnDecalMaterialUpdatedToRepaired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired");

	ABP_DamageZone_C_OnDecalMaterialUpdatedToRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DamageZone_C::ExecuteUbergraph_BP_DamageZone(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone");

	ABP_DamageZone_C_ExecuteUbergraph_BP_DamageZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DamageZone_C::AfterRead()
{
	ADamageZone::AfterRead();

}

void ABP_DamageZone_C::BeforeDelete()
{
	ADamageZone::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
