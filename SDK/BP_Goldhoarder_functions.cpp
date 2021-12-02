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
//		Name   -> Function BP_Goldhoarder.BP_Goldhoarder_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Goldhoarder_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Goldhoarder.BP_Goldhoarder_C.UserConstructionScript");

	ABP_Goldhoarder_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Goldhoarder_C::AfterRead()
{
	ACompanyShopkeeper::AfterRead();

	READ_PTR_FULL(EmissaryMaxRankQuestProvider, UEmissaryMaxRankQuestProvider);
	READ_PTR_FULL(SolidHits, UCapsuleComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Goldhoarder_C::BeforeDelete()
{
	ACompanyShopkeeper::BeforeDelete();

	DELE_PTR_FULL(EmissaryMaxRankQuestProvider);
	DELE_PTR_FULL(SolidHits);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
