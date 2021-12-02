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

void FCustomisableLadderDefinitionStruct::AfterRead()
{
	READ_PTR_FULL(LadderTop_6_6BF9F2424757005036BA87A9BC524EBA, UStaticMesh);
}

void FCustomisableLadderDefinitionStruct::BeforeDelete()
{
	DELE_PTR_FULL(LadderTop_6_6BF9F2424757005036BA87A9BC524EBA);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
