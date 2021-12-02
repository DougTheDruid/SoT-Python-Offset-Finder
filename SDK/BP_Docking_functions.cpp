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

void FBP_Docking::AfterRead()
{
	READ_PTR_FULL(DockingObject_11_F7BECEE04D5FD487613052A206AAC3EE, AActor);
	READ_PTR_FULL(SkeltalMesh_20_CD36D8D547E4234A58C5F18936A94904, USkeletalMeshComponent);
}

void FBP_Docking::BeforeDelete()
{
	DELE_PTR_FULL(DockingObject_11_F7BECEE04D5FD487613052A206AAC3EE);
	DELE_PTR_FULL(SkeltalMesh_20_CD36D8D547E4234A58C5F18936A94904);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
