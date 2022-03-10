namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class MemoryVisualiserCategory: public None
{
public:
	Struct FString                                     CategoryName                                       // 0x0(0x10)
	TArray<Struct MemoryVisualiserStat>                CategoryStats                                      // 0x10(0x10)
	TArray<Struct MemoryVisualiserClass>               CategoryClasses                                    // 0x20(0x10)
	bool                                               CollectOnServer                                    // 0x30(0x1)
	float                                              XboxOneBudgetMB                                    // 0x34(0x4)
	float                                              XboxOneSBudgetMB                                   // 0x38(0x4)
	float                                              XboxOneXBudgetMB                                   // 0x3c(0x4)
	float                                              PCLowSpecBudgetMB                                  // 0x40(0x4)
	float                                              PCMidSpecBudgetMB                                  // 0x44(0x4)
	float                                              PCHighSpecBudgetMB                                 // 0x48(0x4)
	float                                              PCUltraSpecBudgetMB                                // 0x4c(0x4)
	float                                              MemoryUsageMB                                      // 0x50(0x4)
};


// Size 0x28
class MemoryVisualiserClass: public None
{
public:
	class                                              ClassType                                          // 0x0(0x8)
	byte                                               MemoryGatheringMode                                // 0x8(0x1)
	Struct FString                                     DisplayName                                        // 0x10(0x10)
	float                                              MemoryUsageMB                                      // 0x20(0x4)
};


// Size 0x20
class MemoryVisualiserStat: public None
{
public:
	struct FName                                       StatName                                           // 0x0(0x8)
	Struct FString                                     DisplayName                                        // 0x8(0x10)
	float                                              MemoryUsageMB                                      // 0x18(0x4)
};


// Size 0x50
class MemoryCommonData: public None
{
public:
	float                                              mUsedPhysicalMB                                    // 0x0(0x4)
	float                                              mUsedPhysicalPercentage                            // 0x4(0x4)
	float                                              mAvailablePhysicalMB                               // 0x8(0x4)
	float                                              mAvailablePhysicalPercentage                       // 0xc(0x4)
	float                                              mOOMBackupPoolSize                                 // 0x10(0x4)
	float                                              mExecutableSize                                    // 0x14(0x4)
	float                                              mConfigCacheMemoryUsage                            // 0x18(0x4)
	float                                              mFNameTableMemoryUsage                             // 0x1c(0x4)
	float                                              mAssetRegistrySize                                 // 0x20(0x4)
	float                                              mGCWorkingMemoryPoolSizeMB                         // 0x24(0x4)
	float                                              mGCAllocated                                       // 0x28(0x4)
	float                                              mObjectsArraySizeMB                                // 0x2c(0x4)
	int                                                mMaxObjectsAllowed                                 // 0x30(0x4)
	int                                                mNumPermanentObjects                               // 0x34(0x4)
	int                                                mNumTransientObjects                               // 0x38(0x4)
	int                                                mUnsetSlotCound                                    // 0x3c(0x4)
	int                                                mNumClusters                                       // 0x44(0x4)
	int                                                mNumClusteredObjects                               // 0x48(0x4)
	int                                                mMaxClusterSize                                    // 0x4c(0x4)
};


// Size 0x10
class StaticMeshComponentList: public None
{
public:
	TArray<class Components*>                          Components                                         // 0x0(0x10)
};


// Size 0x10
class StaticMeshActorList: public None
{
public:
	TArray<class Actors*>                              Actors                                             // 0x0(0x10)
};


}