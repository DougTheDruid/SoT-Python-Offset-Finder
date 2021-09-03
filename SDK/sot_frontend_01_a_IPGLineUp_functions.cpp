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

// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_a_IPGLineUp_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay");

	Asot_frontend_01_a_IPGLineUp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_IPGLineUp_C::showPlayerMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker");

	Asot_frontend_01_a_IPGLineUp_C_showPlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_IPGLineUp_C::hidePlayerMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker");

	Asot_frontend_01_a_IPGLineUp_C_hidePlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_IPGLineUp_C::ExecuteUbergraph_sot_frontend_01_a_IPGLineUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp");

	Asot_frontend_01_a_IPGLineUp_C_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Asot_frontend_01_a_IPGLineUp_C::AfterRead()
{
	ALevelScriptActor::AfterRead();

	READ_PTR_FULL(shipSelect_CharMarker_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_RefProperty, ASkeletalMeshActor);
}

void Asot_frontend_01_a_IPGLineUp_C::BeforeDelete()
{
	ALevelScriptActor::BeforeDelete();

	DELE_PTR_FULL(shipSelect_CharMarker_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_RefProperty);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
