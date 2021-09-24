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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0018 (FullSize[0x05B0] - InheritedSize[0x0598])
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_N5BC[0x8];                                     // 0x0598(0x0008) Fix Super Size
	unsigned char                                      UnknownData_SBYC[0x10];                                    // 0x05A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}



	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
