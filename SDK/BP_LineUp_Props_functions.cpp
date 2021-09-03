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

void FBP_LineUp_Props::AfterRead()
{
	READ_PTR_FULL(SkeletalProp_12_CB0B67514F65AB892C9408AEF5CD43FE, USkeletalMesh);
	READ_PTR_FULL(SkeletalPropAnimGraph_44_914BF80841A205A0099F92A05F01EFC8, UClass);
	READ_PTR_FULL(StaticProp_15_4C06C726412D41BF622F7AA508892746, UStaticMesh);
}

void FBP_LineUp_Props::BeforeDelete()
{
	DELE_PTR_FULL(SkeletalProp_12_CB0B67514F65AB892C9408AEF5CD43FE);
	DELE_PTR_FULL(SkeletalPropAnimGraph_44_914BF80841A205A0099F92A05F01EFC8);
	DELE_PTR_FULL(StaticProp_15_4C06C726412D41BF622F7AA508892746);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
