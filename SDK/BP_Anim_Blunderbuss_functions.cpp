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
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ExitedFire
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_Blunderbuss_C::AnimNotify_ExitedFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ExitedFire");

	UBP_Anim_Blunderbuss_C_AnimNotify_ExitedFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnOneShotUseTriggered
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FWieldableItemActionVisuals                 ActionVisuals                                              (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Anim_Blunderbuss_C::OnOneShotUseTriggered(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnOneShotUseTriggered");

	UBP_Anim_Blunderbuss_C_OnOneShotUseTriggered_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnUseStarted
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FWieldableItemActionVisuals                 ActionVisuals                                              (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Anim_Blunderbuss_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnUseStarted");

	UBP_Anim_Blunderbuss_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Anim_Blunderbuss_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintInitializeAnimation");

	UBP_Anim_Blunderbuss_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ReloadEventDelegate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventProjectileWeaponReload                Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Blunderbuss_C::ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ReloadEventDelegate");

	UBP_Anim_Blunderbuss_C_ReloadEventDelegate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintUninitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Anim_Blunderbuss_C::BlueprintUninitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintUninitializeAnimation");

	UBP_Anim_Blunderbuss_C_BlueprintUninitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ResetReload
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_Blunderbuss_C::AnimNotify_ResetReload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ResetReload");

	UBP_Anim_Blunderbuss_C_AnimNotify_ResetReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ExecuteUbergraph_BP_Anim_Blunderbuss
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Blunderbuss_C::ExecuteUbergraph_BP_Anim_Blunderbuss(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ExecuteUbergraph_BP_Anim_Blunderbuss");

	UBP_Anim_Blunderbuss_C_ExecuteUbergraph_BP_Anim_Blunderbuss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_Blunderbuss_C::AfterRead()
{
	UWieldableItemAnimationInstance::AfterRead();

}

void UBP_Anim_Blunderbuss_C::BeforeDelete()
{
	UWieldableItemAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
