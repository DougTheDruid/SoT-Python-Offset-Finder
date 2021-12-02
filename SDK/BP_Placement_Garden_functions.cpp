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
//		Name   -> Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Int                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Instances_Created                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Placement_Garden_C::Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters");

	ABP_Placement_Garden_C_Set_Garden_Parameters_Params params {};
	params.Radius = Radius;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instances_Created != nullptr)
		*Instances_Created = params.Instances_Created;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Placement_Garden_C::Create_Garden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden");

	ABP_Placement_Garden_C_Create_Garden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Placement_Garden_C::Initialise_Instances()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances");

	ABP_Placement_Garden_C_Initialise_Instances_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Placement_Garden_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript");

	ABP_Placement_Garden_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Placement_Garden_C::Force_Create_Garden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden");

	ABP_Placement_Garden_C_Force_Create_Garden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Placement_Garden_C::ExecuteUbergraph_BP_Placement_Garden(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden");

	ABP_Placement_Garden_C_ExecuteUbergraph_BP_Placement_Garden_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Placement_Garden_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(Spherical_Volume, USphereComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void ABP_Placement_Garden_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(Spherical_Volume);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
