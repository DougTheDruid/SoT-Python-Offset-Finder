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

void FBP_SailStructure::AfterRead()
{
	READ_PTR_FULL(YardMesh_2_97DED1804977F59BDA6C0F9EDE3DCB81, UStaticMesh);
	READ_PTR_FULL(SailMesh_11_C88B86474D8EC6D91547B98A54EDFDB4, USkeletalMesh);
}

void FBP_SailStructure::BeforeDelete()
{
	DELE_PTR_FULL(YardMesh_2_97DED1804977F59BDA6C0F9EDE3DCB81);
	DELE_PTR_FULL(SailMesh_11_C88B86474D8EC6D91547B98A54EDFDB4);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
