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

// Function BP_Rudder.BP_Rudder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Rudder_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rudder.BP_Rudder_C.UserConstructionScript");

	ABP_Rudder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Rudder_C::AfterRead()
{
	ARudder::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Root, USceneComponent);
}

void ABP_Rudder_C::BeforeDelete()
{
	ARudder::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Root);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
