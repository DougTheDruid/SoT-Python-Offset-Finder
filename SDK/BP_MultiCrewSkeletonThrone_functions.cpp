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
//		Name   -> Function BP_MultiCrewSkeletonThrone.BP_MultiCrewSkeletonThrone_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MultiCrewSkeletonThrone_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MultiCrewSkeletonThrone.BP_MultiCrewSkeletonThrone_C.UserConstructionScript");

	ABP_MultiCrewSkeletonThrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MultiCrewSkeletonThrone_C::AfterRead()
{
	AMultiCrewSkeletonThrone::AfterRead();

	READ_PTR_FULL(VFX_Skull_4, UParticleSystemComponent);
	READ_PTR_FULL(VFX_Skull_3, UParticleSystemComponent);
	READ_PTR_FULL(VFX_Skull_2, UParticleSystemComponent);
	READ_PTR_FULL(VFX_Skull_1, UParticleSystemComponent);
	READ_PTR_FULL(VFX_Under_Chair, UParticleSystemComponent);
}

void ABP_MultiCrewSkeletonThrone_C::BeforeDelete()
{
	AMultiCrewSkeletonThrone::BeforeDelete();

	DELE_PTR_FULL(VFX_Skull_4);
	DELE_PTR_FULL(VFX_Skull_3);
	DELE_PTR_FULL(VFX_Skull_2);
	DELE_PTR_FULL(VFX_Skull_1);
	DELE_PTR_FULL(VFX_Under_Chair);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
