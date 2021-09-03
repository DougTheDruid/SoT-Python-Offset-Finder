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

// Function BP_Sail.BP_Sail_C.Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Sail_C::Debug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sail.BP_Sail_C.Debug");

	ABP_Sail_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sail.BP_Sail_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMainSail                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          SailForceScalar                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Sail_C::Initialise(bool IsMainSail, float SailForceScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sail.BP_Sail_C.Initialise");

	ABP_Sail_C_Initialise_Params params;
	params.IsMainSail = IsMainSail;
	params.SailForceScalar = SailForceScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sail.BP_Sail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Sail_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sail.BP_Sail_C.UserConstructionScript");

	ABP_Sail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Sail_C::AfterRead()
{
	ASail::AfterRead();

}

void ABP_Sail_C::BeforeDelete()
{
	ASail::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
