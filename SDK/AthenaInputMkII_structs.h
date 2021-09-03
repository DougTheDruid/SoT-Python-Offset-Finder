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

// Enum AthenaInputMkII.ELeftStickScalarReason
enum class AthenaInputMkII_ELeftStickScalarReason : uint8_t
{
	ELeftStickScalarReason__Limping = 0,
	ELeftStickScalarReason__Pacing = 1,
	ELeftStickScalarReason__NumReasons = 2,
	ELeftStickScalarReason__ELeftStickScalarReason_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
