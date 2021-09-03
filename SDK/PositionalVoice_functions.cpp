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

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation");

	UVoiceChatEmitterInterface_GetVoiceLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)
void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy");

	UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;

}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UVoiceChatEmitterInterface::GetVoiceAttenuationScaler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler");

	UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoiceChatEmitterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UVoiceChatEmitterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UVoiceChatRendererInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UVoiceChatRendererInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UVoiceChatRenderer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AttenuatedVoiceEvent, UWwiseEvent);
	READ_PTR_FULL(AttenuatedAndSpatialisedVoiceEvent, UWwiseEvent);
	READ_PTR_FULL(UnattenuatedVoiceEvent, UWwiseEvent);
}

void UVoiceChatRenderer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AttenuatedVoiceEvent);
	DELE_PTR_FULL(AttenuatedAndSpatialisedVoiceEvent);
	DELE_PTR_FULL(UnattenuatedVoiceEvent);
}

void UVoiceChatRendererRetreivalInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UVoiceChatRendererRetreivalInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
