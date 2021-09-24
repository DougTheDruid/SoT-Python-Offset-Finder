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
//		Name   -> Function BP_SmallShip_StandardHull.BP_SmallShip_StandardHull_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_StandardHull_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull.BP_SmallShip_StandardHull_C.UserConstructionScript");

	ABP_SmallShip_StandardHull_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShip_StandardHull_C::AfterRead()
{
	AHull::AfterRead();

	READ_PTR_FULL(Occluder, UStaticMeshComponent);
	READ_PTR_FULL(Damage, UChildActorComponent);
	READ_PTR_FULL(Art, UChildActorComponent);
}

void ABP_SmallShip_StandardHull_C::BeforeDelete()
{
	AHull::BeforeDelete();

	DELE_PTR_FULL(Occluder);
	DELE_PTR_FULL(Damage);
	DELE_PTR_FULL(Art);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
