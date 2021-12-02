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

void FPlacementGardenSeed::AfterRead()
{
	READ_PTR_FULL(Mesh_27_C9BD6A6847185FAAF40455801B2F864F, UStaticMesh);
}

void FPlacementGardenSeed::BeforeDelete()
{
	DELE_PTR_FULL(Mesh_27_C9BD6A6847185FAAF40455801B2F864F);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
