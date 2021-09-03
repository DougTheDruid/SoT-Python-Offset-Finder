#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService
struct UBP_CharacterVFXComponent_C_GetWindService_Params
{
	class UObject*                                     WindInterface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick
struct UBP_CharacterVFXComponent_C_WindVFX_DebugTick_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy
struct UBP_CharacterVFXComponent_C_WindVFX_Destroy_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create
struct UBP_CharacterVFXComponent_C_WindVFX_Create_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate
struct UBP_CharacterVFXComponent_C_WindVFX_Deactivate_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX
struct UBP_CharacterVFXComponent_C_Play_View_Under_Water_FX_Params
{
	struct FEventPlayerViewUnderWaterStateChanged      Event;                                                     // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash
struct UBP_CharacterVFXComponent_C_Play_Falling_Splash_Params
{
	float                                              FallingSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash
struct UBP_CharacterVFXComponent_C_Play_Foot_Splash_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay
struct UBP_CharacterVFXComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay
struct UBP_CharacterVFXComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent
struct UBP_CharacterVFXComponent_C_PlayerViewUnderWaterEvent_Params
{
	struct FEventPlayerViewUnderWaterStateChanged      Event;                                                     // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent
struct UBP_CharacterVFXComponent_C_FallingIntoWaterEvent_Params
{
	struct FAthena_FFallingIntoWaterEvent              Event;                                                     // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged
struct UBP_CharacterVFXComponent_C_WaterStateChanged_Params
{
	struct FEventPlayerViewUnderWaterStateChanged      Under_water_state_changed;                                 // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water
struct UBP_CharacterVFXComponent_C_On_Foot_Enter_Water_Params
{
	struct FEventCharacterFootEnterWater               Enter_Water;                                               // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent
struct UBP_CharacterVFXComponent_C_ExecuteUbergraph_BP_CharacterVFXComponent_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
