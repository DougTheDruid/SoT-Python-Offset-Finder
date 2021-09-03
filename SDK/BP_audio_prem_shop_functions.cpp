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

// Function BP_audio_prem_shop.BP_audio_prem_shop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_audio_prem_shop_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.UserConstructionScript");

	ABP_audio_prem_shop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_prem_shop.BP_audio_prem_shop_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_audio_prem_shop_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.ReceiveBeginPlay");

	ABP_audio_prem_shop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_prem_shop.BP_audio_prem_shop_C.ExecuteUbergraph_BP_audio_prem_shop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_audio_prem_shop_C::ExecuteUbergraph_BP_audio_prem_shop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.ExecuteUbergraph_BP_audio_prem_shop");

	ABP_audio_prem_shop_C_ExecuteUbergraph_BP_audio_prem_shop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_audio_prem_shop_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AudioPortal, UAudioPortalComponent);
	READ_PTR_FULL(WwiseEmitter1, UWwiseEmitterComponent);
	READ_PTR_FULL(AudioSpace, UAudioSpaceComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void ABP_audio_prem_shop_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AudioPortal);
	DELE_PTR_FULL(WwiseEmitter1);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
