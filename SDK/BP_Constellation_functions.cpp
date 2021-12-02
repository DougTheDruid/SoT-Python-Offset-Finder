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
//		Name   -> Function BP_Constellation.BP_Constellation_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Constellation_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Constellation.BP_Constellation_C.UserConstructionScript");

	ABP_Constellation_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Constellation.BP_Constellation_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Constellation_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Constellation.BP_Constellation_C.ReceiveBeginPlay");

	ABP_Constellation_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Constellation.BP_Constellation_C.ExecuteUbergraph_BP_Constellation
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Constellation_C::ExecuteUbergraph_BP_Constellation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Constellation.BP_Constellation_C.ExecuteUbergraph_BP_Constellation");

	ABP_Constellation_C_ExecuteUbergraph_BP_Constellation_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Constellation_C::AfterRead()
{
	AConstellation::AfterRead();

}

void ABP_Constellation_C::BeforeDelete()
{
	AConstellation::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
