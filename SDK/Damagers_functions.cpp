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

void FShockwaveDamagerShipDamage::AfterRead()
{
}

void FShockwaveDamagerShipDamage::BeforeDelete()
{
}

// Function Damagers.RadialDamagerComponent.SetDamageRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialDamagerComponent::SetDamageRadius(float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.RadialDamagerComponent.SetDamageRadius");

	URadialDamagerComponent_SetDamageRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.RadialDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)
void URadialDamagerComponent::EndDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.RadialDamagerComponent.EndDamage");

	URadialDamagerComponent_EndDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.RadialDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)
void URadialDamagerComponent::BeginDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.RadialDamagerComponent.BeginDamage");

	URadialDamagerComponent_BeginDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URadialDamagerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DamagerType, UClass);
}

void URadialDamagerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DamagerType);
}

// Function Damagers.ShipDamagerComponent.SetShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InShape                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShipDamagerComponent::SetShape(class UPrimitiveComponent* InShape)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShipDamagerComponent.SetShape");

	UShipDamagerComponent_SetShape_Params params;
	params.InShape = InShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.ShipDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)
void UShipDamagerComponent::EndDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShipDamagerComponent.EndDamage");

	UShipDamagerComponent_EndDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.ShipDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)
void UShipDamagerComponent::BeginDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShipDamagerComponent.BeginDamage");

	UShipDamagerComponent_BeginDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UShipDamagerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Shape, UPrimitiveComponent);
}

void UShipDamagerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Shape);
}

// Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UShockwaveDamagerInterface::StartShockwaveAtLocation(const struct FVector& StartLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation");

	UShockwaveDamagerInterface_StartShockwaveAtLocation_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.ShockwaveDamagerInterface.StartShockwave
// (Native, Public, BlueprintCallable)
void UShockwaveDamagerInterface::StartShockwave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.StartShockwave");

	UShockwaveDamagerInterface_StartShockwave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AAggressiveGhostShip*    Ship                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShockwaveDamagerInterface::IgnoreGhostShip(class AAggressiveGhostShip* Ship)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip");

	UShockwaveDamagerInterface_IgnoreGhostShip_Params params;
	params.Ship = Ship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UShockwaveDamagerInterface::GetShockwaveRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius");

	UShockwaveDamagerInterface_GetShockwaveRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UShockwaveDamagerInterface::GetShockwaveDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration");

	UShockwaveDamagerInterface_GetShockwaveDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UShockwaveDamagerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UShockwaveDamagerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FVector                 InStartLocation                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UShockwaveDamagerComponent::Multi_StartShockwave(const struct FVector& InStartLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave");

	UShockwaveDamagerComponent_Multi_StartShockwave_Params params;
	params.InStartLocation = InStartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UShockwaveDamagerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DamagerType, UClass);
}

void UShockwaveDamagerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DamagerType);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
