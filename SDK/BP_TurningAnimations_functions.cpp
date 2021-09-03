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

void FBP_TurningAnimations::AfterRead()
{
	READ_PTR_FULL(Turn45_2_0A548ADF46E422DF79236593738A7880, UAnimSequence);
	READ_PTR_FULL(Turn90_5_39DE7DEA430AA423698DAA8755AAF4F8, UAnimSequence);
	READ_PTR_FULL(Turn180_8_E0C6B4E444DD145C75436B97A11E2E0C, UAnimSequence);
}

void FBP_TurningAnimations::BeforeDelete()
{
	DELE_PTR_FULL(Turn45_2_0A548ADF46E422DF79236593738A7880);
	DELE_PTR_FULL(Turn90_5_39DE7DEA430AA423698DAA8755AAF4F8);
	DELE_PTR_FULL(Turn180_8_E0C6B4E444DD145C75436B97A11E2E0C);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
