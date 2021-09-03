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

// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_a_audio_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay");

	Asot_frontend_01_a_audio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_audio_C::SelectionConfirmed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed");

	Asot_frontend_01_a_audio_C_SelectionConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_audio_C::ExecuteUbergraph_sot_frontend_01_a_audio(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio");

	Asot_frontend_01_a_audio_C_ExecuteUbergraph_sot_frontend_01_a_audio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Asot_frontend_01_a_audio_C::AfterRead()
{
	ALevelScriptActor::AfterRead();

}

void Asot_frontend_01_a_audio_C::BeforeDelete()
{
	ALevelScriptActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
