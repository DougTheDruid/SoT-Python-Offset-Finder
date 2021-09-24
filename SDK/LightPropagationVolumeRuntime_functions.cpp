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

void FLightPropagationVolumeSettings::AfterRead()
{
}

void FLightPropagationVolumeSettings::BeforeDelete()
{
}

void ULightPropagationVolumeBlendable::AfterRead()
{
	UObject::AfterRead();

}

void ULightPropagationVolumeBlendable::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
