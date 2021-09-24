// Name: SoT, Version: 2.3.0

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

void FBP_WheelTurns::AfterRead()
{
	READ_PTR_FULL(Turn_2_C520E90D4EBA5702AED7C38AACEC1F98, UAnimSequence);
	READ_PTR_FULL(TurnFast_5_C08B9B384B5E56AA42A6C5BA5401753A, UAnimSequence);
	READ_PTR_FULL(TurnFast180_8_386604EA45C2D21BBBF525BFE7026040, UAnimSequence);
}

void FBP_WheelTurns::BeforeDelete()
{
	DELE_PTR_FULL(Turn_2_C520E90D4EBA5702AED7C38AACEC1F98);
	DELE_PTR_FULL(TurnFast_5_C08B9B384B5E56AA42A6C5BA5401753A);
	DELE_PTR_FULL(TurnFast180_8_386604EA45C2D21BBBF525BFE7026040);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
