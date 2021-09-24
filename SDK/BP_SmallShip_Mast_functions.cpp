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
//		Name   -> Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_Mast_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.UserConstructionScript");

	ABP_SmallShip_Mast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.OnMastDescLoaded
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UMastDescAsset*                              MastDesc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShip_Mast_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.OnMastDescLoaded");

	ABP_SmallShip_Mast_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.ExecuteUbergraph_BP_SmallShip_Mast
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShip_Mast_C::ExecuteUbergraph_BP_SmallShip_Mast(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.ExecuteUbergraph_BP_SmallShip_Mast");

	ABP_SmallShip_Mast_C_ExecuteUbergraph_BP_SmallShip_Mast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShip_Mast_C::AfterRead()
{
	ABP_Mast_C::AfterRead();

	READ_PTR_FULL(BP_MastEmissaryFlag, UChildActorComponent);
	READ_PTR_FULL(shp_flag_pennant_alliance_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_flag_jolly_roger_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_Bell, UChildActorComponent);
	READ_PTR_FULL(Ladder, UChildActorComponent);
	READ_PTR_FULL(WeldedCrowsNestPhysics, UStaticMeshComponent);
	READ_PTR_FULL(WeldedMastPhysics, UStaticMeshComponent);
	READ_PTR_FULL(shp_mast_ladder_step_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_mast_bell_support_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_Bell1, UChildActorComponent);
	READ_PTR_FULL(BP_ShipFlagCustomizationChest, UChildActorComponent);
	READ_PTR_FULL(CrowsNest, UStaticMeshComponent);
}

void ABP_SmallShip_Mast_C::BeforeDelete()
{
	ABP_Mast_C::BeforeDelete();

	DELE_PTR_FULL(BP_MastEmissaryFlag);
	DELE_PTR_FULL(shp_flag_pennant_alliance_01_a);
	DELE_PTR_FULL(shp_flag_jolly_roger_01_a);
	DELE_PTR_FULL(BP_Bell);
	DELE_PTR_FULL(Ladder);
	DELE_PTR_FULL(WeldedCrowsNestPhysics);
	DELE_PTR_FULL(WeldedMastPhysics);
	DELE_PTR_FULL(shp_mast_ladder_step_01_a);
	DELE_PTR_FULL(shp_small_mast_bell_support_01_a);
	DELE_PTR_FULL(BP_Bell1);
	DELE_PTR_FULL(BP_ShipFlagCustomizationChest);
	DELE_PTR_FULL(CrowsNest);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
