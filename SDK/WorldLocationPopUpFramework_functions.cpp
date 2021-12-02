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

void FPlayerEnteredWorldLocationNotificationEvent::AfterRead()
{
	READ_PTR_FULL(AudioOverride, UPopUpAudioDesc);
}

void FPlayerEnteredWorldLocationNotificationEvent::BeforeDelete()
{
	DELE_PTR_FULL(AudioOverride);
}

// Function:
//		Offset -> 0x03E7CFE0
//		Name   -> Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWorldLocationPopUpComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd");

	UWorldLocationPopUpComponent_OnOverlapEnd_Params params {};
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E7CE10
//		Name   -> Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapBegin
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               FromSweep                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UWorldLocationPopUpComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapBegin");

	UWorldLocationPopUpComponent_OnOverlapBegin_Params params {};
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWorldLocationPopUpComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(PopUpData, UWorldLocationPopUpDataAsset);
	READ_PTR_FULL(LocationOverlapVolume, UShapeComponent);
}

void UWorldLocationPopUpComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(PopUpData);
	DELE_PTR_FULL(LocationOverlapVolume);
}

void UWorldLocationPopUpDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(AudioOverride, UPopUpAudioDesc);
}

void UWorldLocationPopUpDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(AudioOverride);
}

void UWorldLocationVisitorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWorldLocationVisitorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWorldLocationVisitorComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UWorldLocationVisitorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
