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
//		Name   -> Function BP_Merchant.BP_Merchant_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Merchant_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Merchant.BP_Merchant_C.UserConstructionScript");

	ABP_Merchant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Merchant.BP_Merchant_C.PlayItemAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Merchant_C::PlayItemAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Merchant.BP_Merchant_C.PlayItemAnimation");

	ABP_Merchant_C_PlayItemAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Merchant_C::ExecuteUbergraph_BP_Merchant(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant");

	ABP_Merchant_C_ExecuteUbergraph_BP_Merchant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Merchant_C::AfterRead()
{
	ACompanyShopkeeper::AfterRead();

	READ_PTR_FULL(CommodityRedemption, UCommodityRedemptionComponent);
	READ_PTR_FULL(EmissaryMaxRankQuestProvider, UEmissaryMaxRankQuestProvider);
	READ_PTR_FULL(CargoRunParticipant, UCargoRunParticipantComponent);
	READ_PTR_FULL(SolidHits, UCapsuleComponent);
	READ_PTR_FULL(NPCDialogSellCrate, UNPCDialogComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(MerchantCrateProvider, UMerchantCrateProviderComponent);
	READ_PTR_FULL(cmp_pocket_watch_mrh_01_e, USkeletalMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Merchant_C::BeforeDelete()
{
	ACompanyShopkeeper::BeforeDelete();

	DELE_PTR_FULL(CommodityRedemption);
	DELE_PTR_FULL(EmissaryMaxRankQuestProvider);
	DELE_PTR_FULL(CargoRunParticipant);
	DELE_PTR_FULL(SolidHits);
	DELE_PTR_FULL(NPCDialogSellCrate);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(MerchantCrateProvider);
	DELE_PTR_FULL(cmp_pocket_watch_mrh_01_e);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
