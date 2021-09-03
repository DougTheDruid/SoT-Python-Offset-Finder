#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PositionalVoice.EVoiceChatState
enum class PositionalVoice_EVoiceChatState : uint8_t
{
	EVoiceChatState__Silent        = 0,
	EVoiceChatState__Talking       = 1,
	EVoiceChatState__Muted         = 2,
	EVoiceChatState__Deafened      = 3,
	EVoiceChatState__EVoiceChatState_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
