#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Enum RareEngine.EMemoryUsageVisualiserInstanceType
enum class RareEngine_EMemoryUsageVisualiserInstanceType : uint8_t
{
	EMemoryUsageVisualiserInstanceType__Server = 0,
	EMemoryUsageVisualiserInstanceType__Client = 1,
	EMemoryUsageVisualiserInstanceType__EMemoryUsageVisualiserInstanceType_MAX = 2,

};

// Enum RareEngine.EMemoryGatheringMode
enum class RareEngine_EMemoryGatheringMode : uint8_t
{
	EMemoryGatheringMode__Exclusive = 0,
	EMemoryGatheringMode__Inclusive = 1,
	EMemoryGatheringMode__EMemoryGatheringMode_MAX = 2,

};

// Enum RareEngine.ETestEnum
enum class RareEngine_ETestEnum : uint8_t
{
	Alpha                          = 0,
	Beta                           = 1,
	ETestEnum_MAX                  = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareEngine.MemoryVisualiserStat
// 0x0020
struct FMemoryVisualiserStat
{
	struct FName                                       StatName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	float                                              MemoryUsageMB;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GPN5[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareEngine.MemoryVisualiserClass
// 0x0028
struct FMemoryVisualiserClass
{
	class UClass*                                      ClassType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RareEngine_EMemoryGatheringMode>       MemoryGatheringMode;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8DT5[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	float                                              MemoryUsageMB;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QUL6[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareEngine.MemoryVisualiserCategory
// 0x0058
struct FMemoryVisualiserCategory
{
	struct FString                                     CategoryName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FMemoryVisualiserStat>               CategoryStats;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMemoryVisualiserClass>              CategoryClasses;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               CollectOnServer;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z5KL[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              XboxOneBudgetMB;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              XboxOneSBudgetMB;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              XboxOneXBudgetMB;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PCLowSpecBudgetMB;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PCMidSpecBudgetMB;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PCHighSpecBudgetMB;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PCUltraSpecBudgetMB;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MemoryUsageMB;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E4YF[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareEngine.StaticMeshComponentList
// 0x0010
struct FStaticMeshComponentList
{
	TArray<class UStaticMeshComponent*>                Components;                                                // 0x0000(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareEngine.StaticMeshActorList
// 0x0010
struct FStaticMeshActorList
{
	TArray<class AStaticMeshActor*>                    Actors;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareEngine.MemoryCommonData
// 0x0050
struct FMemoryCommonData
{
	float                                              mUsedPhysicalMB;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mUsedPhysicalPercentage;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mAvailablePhysicalMB;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mAvailablePhysicalPercentage;                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mOOMBackupPoolSize;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mExecutableSize;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mConfigCacheMemoryUsage;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mFNameTableMemoryUsage;                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mAssetRegistrySize;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mGCWorkingMemoryPoolSizeMB;                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mGCAllocated;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              mObjectsArraySizeMB;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mMaxObjectsAllowed;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mNumPermanentObjects;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mNumTransientObjects;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mUnsetSlotCound;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           mClusterMemoryUsedBytes;                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mNumClusters;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mNumClusteredObjects;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                mMaxClusterSize;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
