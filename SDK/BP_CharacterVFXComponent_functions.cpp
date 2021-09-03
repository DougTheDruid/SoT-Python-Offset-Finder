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

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 WindInterface                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterVFXComponent_C::GetWindService(class UObject** WindInterface)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService");

	UBP_CharacterVFXComponent_C_GetWindService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WindInterface != nullptr)
		*WindInterface = params.WindInterface;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterVFXComponent_C::WindVFX_DebugTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick");

	UBP_CharacterVFXComponent_C_WindVFX_DebugTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterVFXComponent_C::WindVFX_Destroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy");

	UBP_CharacterVFXComponent_C_WindVFX_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterVFXComponent_C::WindVFX_Create()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create");

	UBP_CharacterVFXComponent_C_WindVFX_Create_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterVFXComponent_C::WindVFX_Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate");

	UBP_CharacterVFXComponent_C_WindVFX_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Event                          (Parm)
void UBP_CharacterVFXComponent_C::Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX");

	UBP_CharacterVFXComponent_C_Play_View_Under_Water_FX_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FallingSpeed                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterVFXComponent_C::Play_Falling_Splash(float FallingSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash");

	UBP_CharacterVFXComponent_C_Play_Falling_Splash_Params params;
	params.FallingSpeed = FallingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterVFXComponent_C::Play_Foot_Splash(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash");

	UBP_CharacterVFXComponent_C_Play_Foot_Splash_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterVFXComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay");

	UBP_CharacterVFXComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_CharacterVFXComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay");

	UBP_CharacterVFXComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Event                          (Parm)
void UBP_CharacterVFXComponent_C::PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent");

	UBP_CharacterVFXComponent_C_PlayerViewUnderWaterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FFallingIntoWaterEvent Event                          (Parm)
void UBP_CharacterVFXComponent_C::FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent");

	UBP_CharacterVFXComponent_C_FallingIntoWaterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Under_water_state_changed      (Parm)
void UBP_CharacterVFXComponent_C::WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged");

	UBP_CharacterVFXComponent_C_WaterStateChanged_Params params;
	params.Under_water_state_changed = Under_water_state_changed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterFootEnterWater Enter_Water                    (Parm)
void UBP_CharacterVFXComponent_C::On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water");

	UBP_CharacterVFXComponent_C_On_Foot_Enter_Water_Params params;
	params.Enter_Water = Enter_Water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterVFXComponent_C::ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent");

	UBP_CharacterVFXComponent_C_ExecuteUbergraph_BP_CharacterVFXComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_CharacterVFXComponent_C::AfterRead()
{
	UCharacterVfxComponent::AfterRead();

	READ_PTR_FULL(Splash_Emitter, UParticleSystemComponent);
	READ_PTR_FULL(Large_Foot_Splash, UParticleSystem);
	READ_PTR_FULL(Small_Foot_Splash, UParticleSystem);
	READ_PTR_FULL(Large_Falling_Splash, UParticleSystem);
	READ_PTR_FULL(vfx_particle_underwater_ambient, UParticleSystemComponent);
	READ_PTR_FULL(vfx_player_underwater_ambient, UParticleSystemComponent);
}

void UBP_CharacterVFXComponent_C::BeforeDelete()
{
	UCharacterVfxComponent::BeforeDelete();

	DELE_PTR_FULL(Splash_Emitter);
	DELE_PTR_FULL(Large_Foot_Splash);
	DELE_PTR_FULL(Small_Foot_Splash);
	DELE_PTR_FULL(Large_Falling_Splash);
	DELE_PTR_FULL(vfx_particle_underwater_ambient);
	DELE_PTR_FULL(vfx_player_underwater_ambient);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
