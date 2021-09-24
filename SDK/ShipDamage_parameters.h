#pragma once

// Name: SoT, Version: 2.3.0


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

// Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
struct UDamageablePartsInterface_UnregisterDamageablePart_Params
{
	class AActor*                                      DamageableActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
struct UDamageablePartsInterface_RegisterDamageablePart_Params
{
	class AActor*                                      DamageableActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShipDamage.DamageablePartsInterface.GetDamageableParts
struct UDamageablePartsInterface_GetDamageableParts_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
