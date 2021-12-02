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
//		Name   -> Function BP_ReviveGhost.BP_ReviveGhost_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ReviveGhost_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReviveGhost.BP_ReviveGhost_C.UserConstructionScript");

	ABP_ReviveGhost_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ReviveGhost_C::AfterRead()
{
	AReviveGhost::AfterRead();

	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(Cord_Ribbons, UStaticMeshComponent);
	READ_PTR_FULL(Cord_Outer_02, UStaticMeshComponent);
	READ_PTR_FULL(Cord_Outer_01, UStaticMeshComponent);
	READ_PTR_FULL(Cord_Inner, UStaticMeshComponent);
}

void ABP_ReviveGhost_C::BeforeDelete()
{
	AReviveGhost::BeforeDelete();

	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(Cord_Ribbons);
	DELE_PTR_FULL(Cord_Outer_02);
	DELE_PTR_FULL(Cord_Outer_01);
	DELE_PTR_FULL(Cord_Inner);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
