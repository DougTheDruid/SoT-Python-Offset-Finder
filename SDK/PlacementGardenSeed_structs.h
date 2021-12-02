#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct PlacementGardenSeed.PlacementGardenSeed
// 0x003A
struct FPlacementGardenSeed
{
	class UStaticMesh*                                 Mesh_27_C9BD6A6847185FAAF40455801B2F864F;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   RadiusRange_21_766F5E1545643AF109A1C48B8CD8A81B;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RadiusOverlap_10_3A052E52449C395FA85BB99D6EB0A126;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   HeightRange_13_636ED5A34C3BA5D1D7AF0C8C9DCF2C3F;           // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   SlopeRange_16_50192CC54A727B5D84B1CFB25DEE7264;            // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnWeight_19_0B05BBF2449133E0187C478432462F27;           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ScaleRange_24_38A1B6C243AC344CC43846AE7098057E;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AlignToSurface_26_C7572FE34B448D93F9CCFA9294397210;        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W43L[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SinkDepth_30_33CCF791430745D7F68E33949E9163CB;             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Placement_MeshType_E_Placement_MeshType> AssetType_33_8B357E8349F31326A0229881975B1ADF;             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CollideWithPlayer_35_697A910F4984B3701F758BAEA60D8CF3;     // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
