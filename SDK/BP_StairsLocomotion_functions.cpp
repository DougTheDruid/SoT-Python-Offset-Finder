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

void FBP_StairsLocomotion::AfterRead()
{
	READ_PTR_FULL(UpStairsLeft_2_DA19AA214BF482B301330BBFF50A6F08, UBlendSpace);
	READ_PTR_FULL(UpStairsRight_13_5833E8C84B80A8FC73E6C1A7137C7BED, UBlendSpace);
	READ_PTR_FULL(DownStairsLeft_14_3B87C4B54F900C770C667BB5F7C76A5B, UBlendSpace);
	READ_PTR_FULL(DownStairsRight_15_8EE6178B4FF9D4DA39FD92A20FCCF914, UBlendSpace);
}

void FBP_StairsLocomotion::BeforeDelete()
{
	DELE_PTR_FULL(UpStairsLeft_2_DA19AA214BF482B301330BBFF50A6F08);
	DELE_PTR_FULL(UpStairsRight_13_5833E8C84B80A8FC73E6C1A7137C7BED);
	DELE_PTR_FULL(DownStairsLeft_14_3B87C4B54F900C770C667BB5F7C76A5B);
	DELE_PTR_FULL(DownStairsRight_15_8EE6178B4FF9D4DA39FD92A20FCCF914);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
