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
//		Name   -> Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.GetObjectDisplayName
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PlayerBuriedItemsMapBundleInteractionPoint_C::GetObjectDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.GetObjectDisplayName");

	ABP_PlayerBuriedItemsMapBundleInteractionPoint_C_GetObjectDisplayName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerBuriedItemsMapBundleInteractionPoint_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.UserConstructionScript");

	ABP_PlayerBuriedItemsMapBundleInteractionPoint_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PlayerBuriedItemsMapBundleInteractionPoint_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PlayerBuriedItemsMapBundleInteraction, UPlayerBuriedItemsMapBundleInteractionComponent);
	READ_PTR_FULL(ActionRules, UActionRulesComponent);
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
	READ_PTR_FULL(Token_Asset, UStaticMesh);
	READ_PTR_FULL(Token_Material, UMaterialInterface);
}

void ABP_PlayerBuriedItemsMapBundleInteractionPoint_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PlayerBuriedItemsMapBundleInteraction);
	DELE_PTR_FULL(ActionRules);
	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(Token_Asset);
	DELE_PTR_FULL(Token_Material);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
