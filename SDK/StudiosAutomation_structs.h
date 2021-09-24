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

// Enum StudiosAutomation.EComparisonMethod
enum class StudiosAutomation_EComparisonMethod : uint8_t
{
	EComparisonMethod__Equal_To    = 0,
	EComparisonMethod__Not_Equal_To = 1,
	EComparisonMethod__Greater_Than_Or_Equal_To = 2,
	EComparisonMethod__Less_Than_Or_Equal_To = 3,
	EComparisonMethod__Greater_Than = 4,
	EComparisonMethod__Less_Than   = 5,
	EComparisonMethod__EComparisonMethod_MAX = 6,

};

// Enum StudiosAutomation.ETestAutomationPlayModeOverride
enum class StudiosAutomation_ETestAutomationPlayModeOverride : uint8_t
{
	ETestAutomationPlayModeOverride__Adventure = 0,
	ETestAutomationPlayModeOverride__Contest = 1,
	ETestAutomationPlayModeOverride__Tutorial = 2,
	ETestAutomationPlayModeOverride__NotSelectedYet = 3,
	ETestAutomationPlayModeOverride__ETestAutomationPlayModeOverride_MAX = 4,

};

// Enum StudiosAutomation.EPerformanceCaptureType
enum class StudiosAutomation_EPerformanceCaptureType : uint8_t
{
	EPerformanceCaptureType__None  = 0,
	EPerformanceCaptureType__FrameTime = 1,
	EPerformanceCaptureType__StreamingMemory = 2,
	EPerformanceCaptureType__StreamingPositional = 3,
	EPerformanceCaptureType__EPerformanceCaptureType_MAX = 4,

};

// Enum StudiosAutomation.ETestArea
enum class StudiosAutomation_ETestArea : uint8_t
{
	ETestArea__None                = 0,
	ETestArea__Rendering           = 1,
	ETestArea__UserInterface       = 2,
	ETestArea__UserInterfaceInitialization = 3,
	ETestArea__Art                 = 4,
	ETestArea__Audio               = 5,
	ETestArea__ETestArea_MAX       = 6,

};

// Enum StudiosAutomation.ETestCategory
enum class StudiosAutomation_ETestCategory : uint8_t
{
	ETestCategory__Unit            = 0,
	ETestCategory__Integration     = 1,
	ETestCategory__Acceptance      = 2,
	ETestCategory__Stress          = 3,
	ETestCategory__Soak            = 4,
	ETestCategory__Performance     = 5,
	ETestCategory__ETestCategory_MAX = 6,

};

// Enum StudiosAutomation.ECollectionAuditType
enum class StudiosAutomation_ECollectionAuditType : uint8_t
{
	ECollectionAuditType__NoneSet  = 0,
	ECollectionAuditType__UseParentType = 1,
	ECollectionAuditType__Totals   = 2,
	ECollectionAuditType__MeshLimits = 3,
	ECollectionAuditType__AnimSequenceLimits = 4,
	ECollectionAuditType__PhysicsAudits = 5,
	ECollectionAuditType__ExceptionList = 6,
	ECollectionAuditType__WIP      = 7,
	ECollectionAuditType__ECollectionAuditType_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StudiosAutomation.TestLevelMetadataEntry
// 0x0020
struct FTestLevelMetadataEntry
{
	struct FString                                     Property;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.ClientPawnDetails
// 0x0010
struct FClientPawnDetails
{
	TArray<class APawn*>                               Pawns;                                                     // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.SubstringAuditQueryData
// 0x0018
struct FSubstringAuditQueryData
{
	TArray<struct FString>                             QueryStringArray;                                          // 0x0000(0x0010) (ZeroConstructor)
	int                                                SearchSetSize;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MemoryLimitForSet;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.FolderTotals
// 0x0028
struct FFolderTotals
{
	bool                                               EnforceCollectionMembership;                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HJKU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               CollectionsAllowedForFolder;                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               AssetTypesToTest;                                          // 0x0018(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.MeshAuditLimits
// 0x0038
struct FMeshAuditLimits
{
	TArray<struct FSubstringAuditQueryData>            SubstringQueries;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FFolderTotals                               FolderMeshLimits;                                          // 0x0010(0x0028)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.AssetAuditConstantEntry
// 0x0018
struct FAssetAuditConstantEntry
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                Value;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4JJI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.AssetAuditConstants
// 0x0010
struct FAssetAuditConstants
{
	TArray<struct FAssetAuditConstantEntry>            AssetAuditConstants;                                       // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionTotalsLimits
// 0x0010
struct FCollectionTotalsLimits
{
	int                                                MaxTotalVerts;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTotalMemory;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MostExpensiveAssetsSetSize;                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExpensiveAssetSetMaxTotalMemory;                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionMeshLimitsBase
// 0x0008
struct FCollectionMeshLimitsBase
{
	int                                                MaxVerts;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxMemory;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionStaticMeshLimits
// 0x0000 (0x0008 - 0x0008)
struct FCollectionStaticMeshLimits : public FCollectionMeshLimitsBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionSkeleMeshLimits
// 0x0000 (0x0008 - 0x0008)
struct FCollectionSkeleMeshLimits : public FCollectionMeshLimitsBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionAnimSequenceLimits
// 0x0004
struct FCollectionAnimSequenceLimits
{
	int                                                MaxMemory;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionLimits
// 0x0034
struct FCollectionLimits
{
	struct FName                                       CollectionName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_ECollectionAuditType> AuditType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOnlyParentCollection;                                    // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1A1A[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCollectionTotalsLimits                     CollectionTotals;                                          // 0x000C(0x0010) (Edit)
	struct FCollectionStaticMeshLimits                 StaticMeshLimits;                                          // 0x001C(0x0008) (Edit)
	struct FCollectionSkeleMeshLimits                  SkeleMeshLimits;                                           // 0x0024(0x0008) (Edit)
	struct FCollectionAnimSequenceLimits               AnimLimits;                                                // 0x002C(0x0004) (Edit)
	bool                                               CanUseComplexCollisionAsSimple;                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanUseLOD0Collision;                                       // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P5IB[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct StudiosAutomation.CollectionLimitsArray
// 0x0010
struct FCollectionLimitsArray
{
	TArray<struct FCollectionLimits>                   CollectionLimits;                                          // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
