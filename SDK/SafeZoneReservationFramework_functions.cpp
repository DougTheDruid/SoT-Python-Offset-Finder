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
//		Name   -> DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void USafeZoneComponent::SafeZoneIsEmpty__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature");

	USafeZoneComponent_SafeZoneIsEmpty__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E3E7D0
//		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile
//		Flags  -> (Final, Native, Private)
void USafeZoneComponent::OnRep_UpdateCollisionProfile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile");

	USafeZoneComponent_OnRep_UpdateCollisionProfile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E3E7B0
//		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged
//		Flags  -> (Final, Native, Private)
void USafeZoneComponent::OnRep_EmptyStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged");

	USafeZoneComponent_OnRep_EmptyStateChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E3E790
//		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void USafeZoneComponent::DeactivateSafeZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone");

	USafeZoneComponent_DeactivateSafeZone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E3E770
//		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void USafeZoneComponent::DeactivateCollider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider");

	USafeZoneComponent_DeactivateCollider_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E3E750
//		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void USafeZoneComponent::ActivateSafeZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone");

	USafeZoneComponent_ActivateSafeZone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USafeZoneComponent::AfterRead()
{
	UCapsuleComponent::AfterRead();

}

void USafeZoneComponent::BeforeDelete()
{
	UCapsuleComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
