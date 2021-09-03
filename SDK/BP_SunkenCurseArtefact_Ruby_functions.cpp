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

// Function BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SunkenCurseArtefact_Ruby_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C.UserConstructionScript");

	ABP_SunkenCurseArtefact_Ruby_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SunkenCurseArtefact_Ruby_C::AfterRead()
{
	ASunkenCurseArtefact::AfterRead();

	READ_PTR_FULL(SunkenCurseArtefactItemSpawn, USunkenCurseArtefactItemSpawnComponent);
	READ_PTR_FULL(Glint, UStaticMeshComponent);
}

void ABP_SunkenCurseArtefact_Ruby_C::BeforeDelete()
{
	ASunkenCurseArtefact::BeforeDelete();

	DELE_PTR_FULL(SunkenCurseArtefactItemSpawn);
	DELE_PTR_FULL(Glint);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
