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

void FPointLightProxy::AfterRead()
{
	READ_PTR_FULL(Material_8_05258EB540EB1B9DDE1ED0A0DB714B5C, UMaterialInterface);
}

void FPointLightProxy::BeforeDelete()
{
	DELE_PTR_FULL(Material_8_05258EB540EB1B9DDE1ED0A0DB714B5C);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
