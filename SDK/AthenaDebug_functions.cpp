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

void FDrawDebugItemString::AfterRead()
{
}

void FDrawDebugItemString::BeforeDelete()
{
}

void FDrawDebugItemSector::AfterRead()
{
}

void FDrawDebugItemSector::BeforeDelete()
{
}

void FDrawDebugItemLine::AfterRead()
{
}

void FDrawDebugItemLine::BeforeDelete()
{
}

void FDrawDebugItemCapsule::AfterRead()
{
}

void FDrawDebugItemCapsule::BeforeDelete()
{
}

void FDrawDebugItemBox::AfterRead()
{
}

void FDrawDebugItemBox::BeforeDelete()
{
}

void FDrawDebugItemSphere::AfterRead()
{
}

void FDrawDebugItemSphere::BeforeDelete()
{
}

void FDrawDebugItemMessage::AfterRead()
{
}

void FDrawDebugItemMessage::BeforeDelete()
{
}

void FSphereData::AfterRead()
{
}

void FSphereData::BeforeDelete()
{
}

void UDrawDebugServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDrawDebugServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x032A7FA0
//		Name   -> Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged
//		Flags  -> (Final, Native, Private)
void ADrawDebugService::OnRep_PersistentShapeChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged");

	ADrawDebugService_OnRep_PersistentShapeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7F80
//		Name   -> Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged
//		Flags  -> (Final, Native, Private)
void ADrawDebugService::OnRep_IsDrawDebugActiveChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged");

	ADrawDebugService_OnRep_IsDrawDebugActiveChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7F00
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_ClearGroup
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		struct FName                                       GroupName                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADrawDebugService::Multicast_ClearGroup(const struct FName& GroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_ClearGroup");

	ADrawDebugService_Multicast_ClearGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7E20
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddStrings
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<struct FDrawDebugItemString>                Strings                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ADrawDebugService::Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddStrings");

	ADrawDebugService_Multicast_AddStrings_Params params;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7D80
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddSpheres
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<struct FDrawDebugItemSphere>                Spheres                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ADrawDebugService::Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddSpheres");

	ADrawDebugService_Multicast_AddSpheres_Params params;
	params.Spheres = Spheres;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7CE0
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddSectors
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<struct FDrawDebugItemSector>                Sectors                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ADrawDebugService::Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddSectors");

	ADrawDebugService_Multicast_AddSectors_Params params;
	params.Sectors = Sectors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7C40
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddLines
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<struct FDrawDebugItemLine>                  Lines                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ADrawDebugService::Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddLines");

	ADrawDebugService_Multicast_AddLines_Params params;
	params.Lines = Lines;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7BA0
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddCapsules
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<struct FDrawDebugItemCapsule>               Capsules                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ADrawDebugService::Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddCapsules");

	ADrawDebugService_Multicast_AddCapsules_Params params;
	params.Capsules = Capsules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032A7B00
//		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddBoxes
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<struct FDrawDebugItemBox>                   Boxes                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ADrawDebugService::Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddBoxes");

	ADrawDebugService_Multicast_AddBoxes_Params params;
	params.Boxes = Boxes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ADrawDebugService::AfterRead()
{
	AActor::AfterRead();

}

void ADrawDebugService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AShippingDebugActorSphereCollection::AfterRead()
{
	AActor::AfterRead();

}

void AShippingDebugActorSphereCollection::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UTickableDebugDrawingServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTickableDebugDrawingServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AVideprinter::AfterRead()
{
	AActor::AfterRead();

}

void AVideprinter::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UVideprinterServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UVideprinterServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UVideprinterService::AfterRead()
{
	UObject::AfterRead();

}

void UVideprinterService::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
