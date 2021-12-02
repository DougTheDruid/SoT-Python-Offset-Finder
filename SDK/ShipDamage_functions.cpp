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

void FDistanceAndLevelOfDamage::AfterRead()
{
}

void FDistanceAndLevelOfDamage::BeforeDelete()
{
}

void FShipPartLevelsOfDamage::AfterRead()
{
}

void FShipPartLevelsOfDamage::BeforeDelete()
{
}

void FShipDamageParams::AfterRead()
{
}

void FShipDamageParams::BeforeDelete()
{
}

void FHullDamageHit::AfterRead()
{
}

void FHullDamageHit::BeforeDelete()
{
}

void FEventShipDamageApplied::AfterRead()
{
	READ_PTR_FULL(Ship, AActor);
}

void FEventShipDamageApplied::BeforeDelete()
{
	DELE_PTR_FULL(Ship);
}

void FEventShipDamaged::AfterRead()
{
	READ_PTR_FULL(Ship, AActor);
}

void FEventShipDamaged::BeforeDelete()
{
	DELE_PTR_FULL(Ship);
}

void FDamageZoneDamageLevelChanged::AfterRead()
{
	READ_PTR_FULL(DamageZone, AActor);
}

void FDamageZoneDamageLevelChanged::BeforeDelete()
{
	DELE_PTR_FULL(DamageZone);
}

void FAppliedDamageToShipEvent::AfterRead()
{
	READ_PTR_FULL(ShipType, UClass);
	READ_PTR_FULL(Ship, AActor);
}

void FAppliedDamageToShipEvent::BeforeDelete()
{
	DELE_PTR_FULL(ShipType);
	DELE_PTR_FULL(Ship);
}

// Function:
//		Offset -> 0x04019370
//		Name   -> Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DamageableActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDamageablePartsInterface::UnregisterDamageablePart(class AActor* DamageableActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart");

	UDamageablePartsInterface_UnregisterDamageablePart_Params params {};
	params.DamageableActor = DamageableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04019260
//		Name   -> Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DamageableActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDamageablePartsInterface::RegisterDamageablePart(class AActor* DamageableActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart");

	UDamageablePartsInterface_RegisterDamageablePart_Params params {};
	params.DamageableActor = DamageableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x040191C0
//		Name   -> Function ShipDamage.DamageablePartsInterface.GetDamageableParts
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AActor*> UDamageablePartsInterface::GetDamageableParts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.GetDamageableParts");

	UDamageablePartsInterface_GetDamageableParts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDamageablePartsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDamageablePartsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UHullDamageInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHullDamageInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UHullDamageProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHullDamageProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ULandscapeDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void ULandscapeDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

void UShipDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void UShipDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

void UStrainDamagerType::AfterRead()
{
	UDamagerType::AfterRead();

}

void UStrainDamagerType::BeforeDelete()
{
	UDamagerType::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
