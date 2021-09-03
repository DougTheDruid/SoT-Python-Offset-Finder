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

// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Audio_Play_Wwise_Event_Function_C::StopAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio");

	ABP_Audio_Play_Wwise_Event_Function_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Audio_Play_Wwise_Event_Function_C::PlayAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio");

	ABP_Audio_Play_Wwise_Event_Function_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Audio_Play_Wwise_Event_Function_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript");

	ABP_Audio_Play_Wwise_Event_Function_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Audio_Play_Wwise_Event_Function_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AudioComp, UWwiseEmitterComponent);
	READ_PTR_FULL(Wwise_Object_Pool_Wrapper, UWwiseObjectPoolWrapper);
}

void ABP_Audio_Play_Wwise_Event_Function_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AudioComp);
	DELE_PTR_FULL(Wwise_Object_Pool_Wrapper);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
