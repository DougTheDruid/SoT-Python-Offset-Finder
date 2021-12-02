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
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Colour on All Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipNetProxy_C::Set_Colour_on_All_Materials(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Colour on All Materials");

	ABP_MediumShipNetProxy_C_Set_Colour_on_All_Materials_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Value on All Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Variable_Name                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Value on All Materials");

	ABP_MediumShipNetProxy_C_Set_Value_on_All_Materials_Params params {};
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Apply Bits to Lanterns
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                bits                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipNetProxy_C::Apply_Bits_to_Lanterns(int bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Apply Bits to Lanterns");

	ABP_MediumShipNetProxy_C_Apply_Bits_to_Lanterns_Params params {};
	params.bits = bits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Create Dynamic Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MediumShipNetProxy_C::Create_Dynamic_Materials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Create Dynamic Materials");

	ABP_MediumShipNetProxy_C_Create_Dynamic_Materials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShipNetProxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.UserConstructionScript");

	ABP_MediumShipNetProxy_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_MediumShipNetProxy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ReceiveBeginPlay");

	ABP_MediumShipNetProxy_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnLanternStateChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                LanternStateBits                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnLanternStateChanged");

	ABP_MediumShipNetProxy_C_OnLanternStateChanged_Params params {};
	params.LanternStateBits = LanternStateBits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnEmissaryActiveStateChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               InNewEmissaryActiveState                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipNetProxy_C::OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnEmissaryActiveStateChanged");

	ABP_MediumShipNetProxy_C_OnEmissaryActiveStateChanged_Params params {};
	params.InNewEmissaryActiveState = InNewEmissaryActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ExecuteUbergraph_BP_MediumShipNetProxy
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShipNetProxy_C::ExecuteUbergraph_BP_MediumShipNetProxy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ExecuteUbergraph_BP_MediumShipNetProxy");

	ABP_MediumShipNetProxy_C_ExecuteUbergraph_BP_MediumShipNetProxy_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShipNetProxy_C::AfterRead()
{
	AShipNetProxy::AfterRead();

	READ_PTR_FULL(EmissaryFlags, UStaticMeshComponent);
}

void ABP_MediumShipNetProxy_C::BeforeDelete()
{
	AShipNetProxy::BeforeDelete();

	DELE_PTR_FULL(EmissaryFlags);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
