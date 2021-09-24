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
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::IsLocalPlayer(class AActor* Actor, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer");

	ABP_CoralFortress_WeatherZone_C_IsLocalPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CoralFortress_WeatherZone_C::OnRep_Opacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity");

	ABP_CoralFortress_WeatherZone_C_OnRep_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPrimitiveComponent*                         Primitive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UMaterialInstanceDynamic*                    Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::CreateDynamicMaterialAtSlot0(class UPrimitiveComponent* Primitive, class UMaterialInstanceDynamic** Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0");

	ABP_CoralFortress_WeatherZone_C_CreateDynamicMaterialAtSlot0_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CoralFortress_WeatherZone_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript");

	ABP_CoralFortress_WeatherZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::RainBlend__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc");

	ABP_CoralFortress_WeatherZone_C_RainBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::RainBlend__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc");

	ABP_CoralFortress_WeatherZone_C_RainBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay");

	ABP_CoralFortress_WeatherZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::StartRainBlend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend");

	ABP_CoralFortress_WeatherZone_C_StartRainBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay");

	ABP_CoralFortress_WeatherZone_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::StopRainBlend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend");

	ABP_CoralFortress_WeatherZone_C_StopRainBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_CoralFortress_WeatherZone_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::ExecuteUbergraph_BP_CoralFortress_WeatherZone(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone");

	ABP_CoralFortress_WeatherZone_C_ExecuteUbergraph_BP_CoralFortress_WeatherZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CoralFortress_WeatherZone_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Explosion, UExplosionComponent);
	READ_PTR_FULL(LightningManager, ULightningManagerComponent);
	READ_PTR_FULL(Lightning, ULightningComponent);
	READ_PTR_FULL(ExclusionTriggerVolume, UCapsuleComponent);
	READ_PTR_FULL(AtmosphericPressureZone, UAtmosphericPressureZoneComponent);
	READ_PTR_FULL(BlendedPostProcessingRainZone, UBlendedPostProcessingRainZoneComponent);
	READ_PTR_FULL(TopCloudMeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(RingCloudMeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(Lightning4, UStaticMeshComponent);
	READ_PTR_FULL(Lightning3, UStaticMeshComponent);
	READ_PTR_FULL(Lightning2, UStaticMeshComponent);
	READ_PTR_FULL(Lightning1, UStaticMeshComponent);
	READ_PTR_FULL(OuterRainSheet, UStaticMeshComponent);
	READ_PTR_FULL(RainRoot, USceneComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(RainBlend, UTimelineComponent);
}

void ABP_CoralFortress_WeatherZone_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Explosion);
	DELE_PTR_FULL(LightningManager);
	DELE_PTR_FULL(Lightning);
	DELE_PTR_FULL(ExclusionTriggerVolume);
	DELE_PTR_FULL(AtmosphericPressureZone);
	DELE_PTR_FULL(BlendedPostProcessingRainZone);
	DELE_PTR_FULL(TopCloudMeshComponent);
	DELE_PTR_FULL(RingCloudMeshComponent);
	DELE_PTR_FULL(Lightning4);
	DELE_PTR_FULL(Lightning3);
	DELE_PTR_FULL(Lightning2);
	DELE_PTR_FULL(Lightning1);
	DELE_PTR_FULL(OuterRainSheet);
	DELE_PTR_FULL(RainRoot);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(RainBlend);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
