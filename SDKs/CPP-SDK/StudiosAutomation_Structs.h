#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x4
struct CollectionAnimSequenceLimits
{
public:
	int                                                          MaxMemory;                                         // 0x0(0x4)
};


// Size 0x10
struct ClientPawnDetails
{
public:
	TArray<class Pawn*>                                          Pawns;                                             // 0x0(0x10)
};


// Size 0x18
struct SubstringAuditQueryData
{
public:
	TArray<String>                                               QueryStringArray;                                  // 0x0(0x10)
	int                                                          SearchSetSize;                                     // 0x10(0x4)
	int                                                          MemoryLimitForSet;                                 // 0x14(0x4)
};


// Size 0x20
struct TextureAuditorProperties
{
public:
	char                                                         RequiredMipsSetting;                               // 0x0(0x1)
	TArray<char>                                                 AllowedTextureFormats;                             // 0x8(0x10)
	uint32                                                       MinSizeToValidateFormatX;                          // 0x18(0x4)
	uint32                                                       MinSizeToValidateFormatY;                          // 0x1c(0x4)
};


// Size 0x8
struct CollectionMeshLimitsBase
{
public:
	int                                                          MaxVerts;                                          // 0x0(0x4)
	int                                                          MaxMemory;                                         // 0x4(0x4)
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


// Size 0x28
struct FolderTotals
{
public:
	bool                                                         EnforceCollectionMembership;                       // 0x0(0x1)
	TArray<struct Name>                                          CollectionsAllowedForFolder;                       // 0x8(0x10)
	TArray<struct Name>                                          AssetTypesToTest;                                  // 0x18(0x10)
};


// Size 0x20
struct TestLevelMetadataEntry
{
public:
	struct FString                                               Property;                                          // 0x0(0x10)
	struct FString                                               Value;                                             // 0x10(0x10)
};


// Size 0x18
struct AssetAuditConstantEntry
{
public:
	struct FString                                               Name;                                              // 0x0(0x10)
	int                                                          Value;                                             // 0x10(0x4)
};


// Size 0x10
struct AssetAuditConstants
{
public:
	TArray<struct AssetAuditConstantEntry>                       AssetAuditConstants;                               // 0x0(0x10)
};


// Size 0x38
struct MeshAuditLimits
{
public:
	TArray<struct SubstringAuditQueryData>                       SubstringQueries;                                  // 0x0(0x10)
	struct FolderTotals                                          FolderMeshLimits;                                  // 0x10(0x28)
};


// Size 0x28
struct TextureAuditorGroupProperties
{
public:
	char                                                         TextureGroup;                                      // 0x0(0x1)
	struct TextureAuditorProperties                              Properties;                                        // 0x8(0x20)
};


// Size 0x34
struct CollectionLimits
{
public:
	struct FName                                                 CollectionName;                                    // 0x0(0x8)
	char                                                         AuditType;                                         // 0x8(0x1)
	char                                                         AuditTypeFlag;                                     // 0x9(0x1)
	bool                                                         IsOnlyParentCollection;                            // 0xa(0x1)
	struct CollectionTotalsLimits                                CollectionTotals;                                  // 0xc(0x10)
	struct CollectionStaticMeshLimits                            StaticMeshLimits;                                  // 0x1c(0x8)
	struct CollectionSkeleMeshLimits                             SkeleMeshLimits;                                   // 0x24(0x8)
	struct CollectionAnimSequenceLimits                          AnimLimits;                                        // 0x2c(0x4)
	bool                                                         CanUseComplexCollisionAsSimple;                    // 0x30(0x1)
	bool                                                         CanUseLOD0Collision;                               // 0x31(0x1)
};


// Size 0x10
struct CollectionLimitsArray
{
public:
	TArray<struct CollectionLimits>                              CollectionLimits;                                  // 0x0(0x10)
};


