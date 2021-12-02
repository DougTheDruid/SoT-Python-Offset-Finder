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
//		Name   -> Function BP_EmissaryTable_01.BP_EmissaryTable_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryTable_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryTable_01.BP_EmissaryTable_01_C.UserConstructionScript");

	ABP_EmissaryTable_01_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryTable_01_C::AfterRead()
{
	AEmissaryVoteInteractionActor::AfterRead();

	READ_PTR_FULL(EmissaryActiveTableVisualiser, UEmissaryActiveTableVisualiserComponent);
	READ_PTR_FULL(VoteAudio, UVoteAudioComponent);
	READ_PTR_FULL(StaticMeshVoteVisualiser, UStaticMeshVoteVisualiserComponent);
	READ_PTR_FULL(InlineVotingInteraction, UInlineVotingInteractionComponent);
	READ_PTR_FULL(ActionRules, UActionRulesComponent);
	READ_PTR_FULL(VoteIndicator4, UStaticMeshComponent);
	READ_PTR_FULL(VoteIndicator3, UStaticMeshComponent);
	READ_PTR_FULL(VoteIndicator2, UStaticMeshComponent);
	READ_PTR_FULL(VoteIndicator1, UStaticMeshComponent);
	READ_PTR_FULL(bld_emissary_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_EmissaryTable_01_C::BeforeDelete()
{
	AEmissaryVoteInteractionActor::BeforeDelete();

	DELE_PTR_FULL(EmissaryActiveTableVisualiser);
	DELE_PTR_FULL(VoteAudio);
	DELE_PTR_FULL(StaticMeshVoteVisualiser);
	DELE_PTR_FULL(InlineVotingInteraction);
	DELE_PTR_FULL(ActionRules);
	DELE_PTR_FULL(VoteIndicator4);
	DELE_PTR_FULL(VoteIndicator3);
	DELE_PTR_FULL(VoteIndicator2);
	DELE_PTR_FULL(VoteIndicator1);
	DELE_PTR_FULL(bld_emissary_table_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
