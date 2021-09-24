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

void FPlayerEnteredWorldLocationNotificationEvent::AfterRead()
{
}

void FPlayerEnteredWorldLocationNotificationEvent::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03F0E930
//		Name   -> Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWorldLocationPopUpComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd");

	UWorldLocationPopUpComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F0E760
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

	UWorldLocationPopUpComponent_OnOverlapBegin_Params params;
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

}

void UWorldLocationPopUpDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
