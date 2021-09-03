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

// Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.SetupClamberSpline
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ForceSpot_Rowboat_Launch_C::SetupClamberSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.SetupClamberSpline");

	ABP_ForceSpot_Rowboat_Launch_C_SetupClamberSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ForceSpot_Rowboat_Launch_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.UserConstructionScript");

	ABP_ForceSpot_Rowboat_Launch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ForceSpot_Rowboat_Launch_C::AfterRead()
{
	AForceSpot::AfterRead();

}

void ABP_ForceSpot_Rowboat_Launch_C::BeforeDelete()
{
	AForceSpot::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
