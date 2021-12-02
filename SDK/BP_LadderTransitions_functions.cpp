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

void FBP_LadderTransitions::AfterRead()
{
	READ_PTR_FULL(ClimbOnTop_16_46BF1F0048F2AF87FC06EDA7D957B5AD, UAnimSequence);
	READ_PTR_FULL(ClimbOffTop_17_03BD0C524679686B3085549ADE090DDE, UAnimSequence);
	READ_PTR_FULL(ClimbOnBottom_18_FE40184048EEC04438D8779C3D2F861F, UAnimSequence);
	READ_PTR_FULL(ClimbOffBottom_19_DDD74AC340C32F4A95E0FFA43F7CEE27, UAnimSequence);
}

void FBP_LadderTransitions::BeforeDelete()
{
	DELE_PTR_FULL(ClimbOnTop_16_46BF1F0048F2AF87FC06EDA7D957B5AD);
	DELE_PTR_FULL(ClimbOffTop_17_03BD0C524679686B3085549ADE090DDE);
	DELE_PTR_FULL(ClimbOnBottom_18_FE40184048EEC04438D8779C3D2F861F);
	DELE_PTR_FULL(ClimbOffBottom_19_DDD74AC340C32F4A95E0FFA43F7CEE27);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
