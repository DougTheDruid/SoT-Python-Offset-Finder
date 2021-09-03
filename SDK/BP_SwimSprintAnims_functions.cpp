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

void FBP_SwimSprintAnims::AfterRead()
{
	READ_PTR_FULL(Into_2_C08FE6B242737247BAC193A670907225, UAnimSequence);
	READ_PTR_FULL(Loop_5_FFD50929417A2B4373EBA99465D6C291, UAnimSequence);
}

void FBP_SwimSprintAnims::BeforeDelete()
{
	DELE_PTR_FULL(Into_2_C08FE6B242737247BAC193A670907225);
	DELE_PTR_FULL(Loop_5_FFD50929417A2B4373EBA99465D6C291);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
