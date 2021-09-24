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
// Enums
//---------------------------------------------------------------------------

// Enum Foliage.EFoliageScaling
enum class Foliage_EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5,

};

// Enum Foliage.FoliageVertexColorMask
enum class Foliage_EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,

};

// Enum Foliage.ESimulationQuery
enum class Foliage_ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap = 0,
	ESimulationQuery__ShadeOverlap = 1,
	ESimulationQuery__AnyOverlap   = 2,
	ESimulationQuery__ESimulationQuery_MAX = 3,

};

// Enum Foliage.ESimulationOverlap
enum class Foliage_ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020
struct FFoliageTypeObject
{
	class UObject*                                     FoliageTypeObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageType_InstancedStaticMesh*            TypeInstance;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAsset;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3TQB[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Type;                                                      // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0060
struct FProceduralFoliageInstance
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RD7V[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0010(0x0010) (IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Age;                                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_71ZQ[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFoliageType_InstancedStaticMesh*            Type;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_917I[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Foliage.ConsoleCommands
// 0x0001
struct FConsoleCommands
{
	unsigned char                                      UnknownData_P8Z1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
