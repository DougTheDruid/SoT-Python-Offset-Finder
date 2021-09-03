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

// Function Damagers.RadialDamagerComponent.SetDamageRadius
struct URadialDamagerComponent_SetDamageRadius_Params
{
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Damagers.RadialDamagerComponent.EndDamage
struct URadialDamagerComponent_EndDamage_Params
{
};

// Function Damagers.RadialDamagerComponent.BeginDamage
struct URadialDamagerComponent_BeginDamage_Params
{
};

// Function Damagers.ShipDamagerComponent.SetShape
struct UShipDamagerComponent_SetShape_Params
{
	class UPrimitiveComponent*                         InShape;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Damagers.ShipDamagerComponent.EndDamage
struct UShipDamagerComponent_EndDamage_Params
{
};

// Function Damagers.ShipDamagerComponent.BeginDamage
struct UShipDamagerComponent_BeginDamage_Params
{
};

// Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
struct UShockwaveDamagerInterface_StartShockwaveAtLocation_Params
{
	struct FVector                                     StartLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Damagers.ShockwaveDamagerInterface.StartShockwave
struct UShockwaveDamagerInterface_StartShockwave_Params
{
};

// Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
struct UShockwaveDamagerInterface_IgnoreGhostShip_Params
{
	class AAggressiveGhostShip*                        Ship;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
struct UShockwaveDamagerInterface_GetShockwaveRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration
struct UShockwaveDamagerInterface_GetShockwaveDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
struct UShockwaveDamagerComponent_Multi_StartShockwave_Params
{
	struct FVector                                     InStartLocation;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
