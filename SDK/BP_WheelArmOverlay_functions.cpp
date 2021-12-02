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

void FBP_WheelArmOverlay::AfterRead()
{
	READ_PTR_FULL(ArmLower_2_5C05A9D74E843B0DD67A9DA5B8583065, UBlendSpace1D);
	READ_PTR_FULL(ArmRaise_5_4EA5CB8743D3E7C0F077349D8CC5A6C2, UBlendSpace1D);
}

void FBP_WheelArmOverlay::BeforeDelete()
{
	DELE_PTR_FULL(ArmLower_2_5C05A9D74E843B0DD67A9DA5B8583065);
	DELE_PTR_FULL(ArmRaise_5_4EA5CB8743D3E7C0F077349D8CC5A6C2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
