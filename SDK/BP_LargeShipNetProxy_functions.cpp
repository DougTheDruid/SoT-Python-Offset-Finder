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
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Variable_Name                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipNetProxy_C::Set_Colour_on_All_Materials(const struct FName& Variable_Name, const struct FLinearColor& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials");

	ABP_LargeShipNetProxy_C_Set_Colour_on_All_Materials_Params params;
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Variable_Name                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials");

	ABP_LargeShipNetProxy_C_Set_Value_on_All_Materials_Params params;
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Apply Bits to Lanterns
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Lantern_Bits                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipNetProxy_C::Apply_Bits_to_Lanterns(int Lantern_Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Apply Bits to Lanterns");

	ABP_LargeShipNetProxy_C_Apply_Bits_to_Lanterns_Params params;
	params.Lantern_Bits = Lantern_Bits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LargeShipNetProxy_C::Create_Dynamic_Materials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials");

	ABP_LargeShipNetProxy_C_Create_Dynamic_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShipNetProxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript");

	ABP_LargeShipNetProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_LargeShipNetProxy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay");

	ABP_LargeShipNetProxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                LanternStateBits                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged");

	ABP_LargeShipNetProxy_C_OnLanternStateChanged_Params params;
	params.LanternStateBits = LanternStateBits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnEmissaryActiveStateChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               InNewEmissaryActiveState                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipNetProxy_C::OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnEmissaryActiveStateChanged");

	ABP_LargeShipNetProxy_C_OnEmissaryActiveStateChanged_Params params;
	params.InNewEmissaryActiveState = InNewEmissaryActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ExecuteUbergraph_BP_LargeShipNetProxy
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipNetProxy_C::ExecuteUbergraph_BP_LargeShipNetProxy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ExecuteUbergraph_BP_LargeShipNetProxy");

	ABP_LargeShipNetProxy_C_ExecuteUbergraph_BP_LargeShipNetProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShipNetProxy_C::AfterRead()
{
	AShipNetProxy::AfterRead();

	READ_PTR_FULL(EmissaryFlags, UStaticMeshComponent);
}

void ABP_LargeShipNetProxy_C::BeforeDelete()
{
	AShipNetProxy::BeforeDelete();

	DELE_PTR_FULL(EmissaryFlags);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
