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
//		Name   -> Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_audio_prem_shop_wsp_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.UserConstructionScript");

	ABP_audio_prem_shop_wsp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_audio_prem_shop_wsp_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.ReceiveBeginPlay");

	ABP_audio_prem_shop_wsp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_audio_prem_shop_wsp_C::BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_audio_prem_shop_wsp_C_BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.ExecuteUbergraph_BP_audio_prem_shop_wsp
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_audio_prem_shop_wsp_C::ExecuteUbergraph_BP_audio_prem_shop_wsp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.ExecuteUbergraph_BP_audio_prem_shop_wsp");

	ABP_audio_prem_shop_wsp_C_ExecuteUbergraph_BP_audio_prem_shop_wsp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_audio_prem_shop_wsp_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WwiseEmitter, UWwiseEmitterComponent);
	READ_PTR_FULL(Triton, UTritonComponent);
	READ_PTR_FULL(AudioPortal, UAudioPortalComponent);
	READ_PTR_FULL(AudioSpace, UAudioSpaceComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void ABP_audio_prem_shop_wsp_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WwiseEmitter);
	DELE_PTR_FULL(Triton);
	DELE_PTR_FULL(AudioPortal);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
