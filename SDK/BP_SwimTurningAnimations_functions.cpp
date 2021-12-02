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

void FBP_SwimTurningAnimations::AfterRead()
{
	READ_PTR_FULL(Turn45_2_B302CB75470F6C2FD04AC8BE88A1B9FC, UAnimSequence);
	READ_PTR_FULL(Turn90_6_3E4E7D384378A72C0D5737816320D73F, UAnimSequence);
	READ_PTR_FULL(Turn180_8_AAAD27D34908061737643C8AB65CF0DB, UAnimSequence);
}

void FBP_SwimTurningAnimations::BeforeDelete()
{
	DELE_PTR_FULL(Turn45_2_B302CB75470F6C2FD04AC8BE88A1B9FC);
	DELE_PTR_FULL(Turn90_6_3E4E7D384378A72C0D5737816320D73F);
	DELE_PTR_FULL(Turn180_8_AAAD27D34908061737643C8AB65CF0DB);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
