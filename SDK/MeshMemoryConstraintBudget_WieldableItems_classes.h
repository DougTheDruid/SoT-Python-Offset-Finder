#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeshMemoryConstraintBudget_WieldableItems.MeshMemoryConstraintBudget_WieldableItems_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshMemoryConstraintBudget_WieldableItems_C : public UMeshMemoryConstraintBudget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MeshMemoryConstraintBudget_WieldableItems.MeshMemoryConstraintBudget_WieldableItems_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
