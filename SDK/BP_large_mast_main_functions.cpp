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
//		Name   -> Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_large_mast_main_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript");

	ABP_large_mast_main_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UMastDescAsset*                              MastDesc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_large_mast_main_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded");

	ABP_large_mast_main_C_OnMastDescLoaded_Params params {};
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_large_mast_main_C::ExecuteUbergraph_BP_large_mast_main(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main");

	ABP_large_mast_main_C_ExecuteUbergraph_BP_large_mast_main_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_large_mast_main_C::AfterRead()
{
	ABP_Mast_C::AfterRead();

	READ_PTR_FULL(BP_MastEmissaryFlag, UChildActorComponent);
	READ_PTR_FULL(shp_flag_pennant_alliance_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_ShipFlagCustomizationChest, UChildActorComponent);
	READ_PTR_FULL(BP_Bell, UChildActorComponent);
	READ_PTR_FULL(shp_flag_jolly_roger_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Ladder, UChildActorComponent);
	READ_PTR_FULL(WeldedCrowsNestPhysics, UStaticMeshComponent);
	READ_PTR_FULL(WeldedMastPhysics, UStaticMeshComponent);
	READ_PTR_FULL(shp_mast_ladder_step_01_a, UStaticMeshComponent);
	READ_PTR_FULL(CrowsNest, UStaticMeshComponent);
}

void ABP_large_mast_main_C::BeforeDelete()
{
	ABP_Mast_C::BeforeDelete();

	DELE_PTR_FULL(BP_MastEmissaryFlag);
	DELE_PTR_FULL(shp_flag_pennant_alliance_01_a);
	DELE_PTR_FULL(BP_ShipFlagCustomizationChest);
	DELE_PTR_FULL(BP_Bell);
	DELE_PTR_FULL(shp_flag_jolly_roger_01_a);
	DELE_PTR_FULL(Ladder);
	DELE_PTR_FULL(WeldedCrowsNestPhysics);
	DELE_PTR_FULL(WeldedMastPhysics);
	DELE_PTR_FULL(shp_mast_ladder_step_01_a);
	DELE_PTR_FULL(CrowsNest);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
