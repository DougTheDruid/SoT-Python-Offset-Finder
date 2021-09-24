#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
struct UVoiceChatEmitterInterface_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
struct UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                              // 0x0000(0x0020)  (Parm, OutParm)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
struct UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params
{
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
