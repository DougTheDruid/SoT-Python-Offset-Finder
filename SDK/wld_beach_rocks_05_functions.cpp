// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function wld_beach_rocks_05.wld_beach_rocks_05_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_beach_rocks_05_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_beach_rocks_05.wld_beach_rocks_05_C.UserConstructionScript");

	Awld_beach_rocks_05_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_beach_rocks_05_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_rock_small_01__b, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__c, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_medium_01__e, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_medium_01__d, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_medium_01__c, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_xlarge_05_a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__e, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__c1, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__c, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_xlarge_03_a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__d, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awld_beach_rocks_05_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_rock_small_01__b);
	DELE_PTR_FULL(wld_rock_small_01__c);
	DELE_PTR_FULL(wld_rock_medium_01__e);
	DELE_PTR_FULL(wld_rock_medium_01__d);
	DELE_PTR_FULL(wld_rock_medium_01__c);
	DELE_PTR_FULL(wld_rock_xlarge_05_a);
	DELE_PTR_FULL(wld_rock_large_01__e);
	DELE_PTR_FULL(wld_rock_large_01__c1);
	DELE_PTR_FULL(wld_rock_large_01__c);
	DELE_PTR_FULL(wld_rock_xlarge_03_a);
	DELE_PTR_FULL(wld_rock_large_01__d);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
