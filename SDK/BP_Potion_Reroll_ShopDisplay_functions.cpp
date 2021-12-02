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
//		Name   -> Function BP_Potion_Reroll_ShopDisplay.BP_Potion_Reroll_ShopDisplay_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Potion_Reroll_ShopDisplay_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Potion_Reroll_ShopDisplay.BP_Potion_Reroll_ShopDisplay_C.UserConstructionScript");

	ABP_Potion_Reroll_ShopDisplay_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Potion_Reroll_ShopDisplay_C::AfterRead()
{
	AModalInteractionProxy::AfterRead();

	READ_PTR_FULL(InspectDialog, UNPCDialogComponent);
	READ_PTR_FULL(vfx_Tendrils, UStaticMeshComponent);
	READ_PTR_FULL(vfx_rerollBottle, UParticleSystemComponent);
	READ_PTR_FULL(Potion_Reroll, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_Potion_Reroll_ShopDisplay_C::BeforeDelete()
{
	AModalInteractionProxy::BeforeDelete();

	DELE_PTR_FULL(InspectDialog);
	DELE_PTR_FULL(vfx_Tendrils);
	DELE_PTR_FULL(vfx_rerollBottle);
	DELE_PTR_FULL(Potion_Reroll);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
