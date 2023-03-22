// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct TestLevelMetadataEntry
{
public:
	Struct FString                                               Property;                                          // 0x0(0x10)
	Struct FString                                               Value;                                             // 0x10(0x10)
};


// Size 0x10
struct ClientPawnDetails
{
public:
	TArray<class Pawn*>                                          Pawns;                                             // 0x0(0x10)
};


// Size 0x28
struct TextureAuditorGroupProperties
{
public:
	byte                                                         TextureGroup;                                      // 0x0(0x1)
	char                                                         pad0x7_5DI8U[0x7];                                 // 0x1(0x7)
	Struct TextureAuditorProperties                              Properties;                                        // 0x8(0x20)
};


// Size 0x20
struct TextureAuditorProperties
{
public:
	byte                                                         RequiredMipsSetting;                               // 0x0(0x1)
	char                                                         pad0x7_TASZW[0x7];                                 // 0x1(0x7)
	TArray<Byte AllowedTextureFormats>                           AllowedTextureFormats;                             // 0x8(0x10)
};


// Size 0x38
struct MeshAuditLimits
{
public:
	TArray<struct SubstringQueries>                              SubstringQueries;                                  // 0x0(0x10)
	Struct FolderTotals                                          FolderMeshLimits;                                  // 0x10(0x28)
};


// Size 0x28
struct FolderTotals
{
public:
	bool                                                         EnforceCollectionMembership;                       // 0x0(0x1)
	char                                                         pad0x7_N3KKD[0x7];                                 // 0x1(0x7)
	TArray<struct FName>                                         CollectionsAllowedForFolder;                       // 0x8(0x10)
	TArray<struct FName>                                         AssetTypesToTest;                                  // 0x18(0x10)
};


// Size 0x18
struct SubstringAuditQueryData
{
public:
	TArray<Str QueryStringArray>                                 QueryStringArray;                                  // 0x0(0x10)
	int                                                          SearchSetSize;                                     // 0x10(0x4)
	int                                                          MemoryLimitForSet;                                 // 0x14(0x4)
};


// Size 0x10
struct AssetAuditConstants
{
public:
	TArray<struct AssetAuditConstants>                           AssetAuditConstants;                               // 0x0(0x10)
};


// Size 0x18
struct AssetAuditConstantEntry
{
public:
	Struct FString                                               Name;                                              // 0x0(0x10)
	int                                                          Value;                                             // 0x10(0x4)
};


// Size 0x34
struct CollectionLimits
{
public:
	struct FName                                                 CollectionName;                                    // 0x0(0x8)
	byte                                                         AuditType;                                         // 0x8(0x1)
	bool                                                         IsOnlyParentCollection;                            // 0x9(0x1)
	char                                                         pad0x2_3FA4V[0x2];                                 // 0xa(0x2)
	Struct CollectionTotalsLimits                                CollectionTotals;                                  // 0xc(0x10)
	Struct CollectionStaticMeshLimits                            StaticMeshLimits;                                  // 0x1c(0x8)
	Struct CollectionSkeleMeshLimits                             SkeleMeshLimits;                                   // 0x24(0x8)
	Struct CollectionAnimSequenceLimits                          AnimLimits;                                        // 0x2c(0x4)
	bool                                                         CanUseComplexCollisionAsSimple;                    // 0x30(0x1)
	bool                                                         CanUseLOD0Collision;                               // 0x31(0x1)
};


// Size 0x4
struct CollectionAnimSequenceLimits
{
public:
	int                                                          MaxMemory;                                         // 0x0(0x4)
};


// Size 0x8
struct CollectionSkeleMeshLimits
{
public:
};


// Size 0x8
struct CollectionMeshLimitsBase
{
public:
	int                                                          MaxVerts;                                          // 0x0(0x4)
	int                                                          MaxMemory;                                         // 0x4(0x4)
};


// Size 0x8
struct CollectionStaticMeshLimits
{
public:
};


// Size 0x10
struct CollectionTotalsLimits
{
public:
	int                                                          MaxTotalVerts;                                     // 0x0(0x4)
	int                                                          MaxTotalMemory;                                    // 0x4(0x4)
	int                                                          MostExpensiveAssetsSetSize;                        // 0x8(0x4)
	int                                                          ExpensiveAssetSetMaxTotalMemory;                   // 0xc(0x4)
};


// Size 0x10
struct CollectionLimitsArray
{
public:
	TArray<struct CollectionLimits>                              CollectionLimits;                                  // 0x0(0x10)
};


}