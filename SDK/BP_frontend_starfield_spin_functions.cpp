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

// Function BP_frontend_starfield_spin.BP_frontend_starfield_spin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_frontend_starfield_spin_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_frontend_starfield_spin.BP_frontend_starfield_spin_C.UserConstructionScript");

	ABP_frontend_starfield_spin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_frontend_starfield_spin.BP_frontend_starfield_spin_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_frontend_starfield_spin_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_frontend_starfield_spin.BP_frontend_starfield_spin_C.ReceiveTick");

	ABP_frontend_starfield_spin_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_frontend_starfield_spin.BP_frontend_starfield_spin_C.ExecuteUbergraph_BP_frontend_starfield_spin
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_frontend_starfield_spin_C::ExecuteUbergraph_BP_frontend_starfield_spin(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_frontend_starfield_spin.BP_frontend_starfield_spin_C.ExecuteUbergraph_BP_frontend_starfield_spin");

	ABP_frontend_starfield_spin_C_ExecuteUbergraph_BP_frontend_starfield_spin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_frontend_starfield_spin_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
}

void ABP_frontend_starfield_spin_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent0);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
