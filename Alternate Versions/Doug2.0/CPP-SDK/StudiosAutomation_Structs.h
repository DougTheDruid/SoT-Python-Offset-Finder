namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class TestLevelMetadataEntry: public None
{
public:
	Struct FString                                     Property                                           // 0x0(0x10)
	Struct FString                                     Value                                              // 0x10(0x10)
};


// Size 0x10
class ClientPawnDetails: public None
{
public:
	TArray<class Pawns*>                               Pawns                                              // 0x0(0x10)
};


// Size 0x28
class TextureAuditorGroupProperties: public None
{
public:
	byte                                               TextureGroup                                       // 0x0(0x1)
	Struct TextureAuditorProperties                    Properties                                         // 0x8(0x20)
};


// Size 0x20
class TextureAuditorProperties: public None
{
public:
	byte                                               RequiredMipsSetting                                // 0x0(0x1)
	TArray<Byte RequiredMipsSetting>                   AllowedTextureFormats                              // 0x8(0x10)
};


// Size 0x38
class MeshAuditLimits: public None
{
public:
	TArray<Struct SubstringAuditQueryData>             SubstringQueries                                   // 0x0(0x10)
	Struct FolderTotals                                FolderMeshLimits                                   // 0x10(0x28)
};


// Size 0x28
class FolderTotals: public None
{
public:
	bool                                               EnforceCollectionMembership                        // 0x0(0x1)
	TArray<Struct FName>                               CollectionsAllowedForFolder                        // 0x8(0x10)
	TArray<Struct FName>                               AssetTypesToTest                                   // 0x18(0x10)
};


// Size 0x18
class SubstringAuditQueryData: public None
{
public:
	TArray<Str None>                                   QueryStringArray                                   // 0x0(0x10)
	int                                                SearchSetSize                                      // 0x10(0x4)
	int                                                MemoryLimitForSet                                  // 0x14(0x4)
};


// Size 0x10
class AssetAuditConstants: public None
{
public:
	TArray<Struct AssetAuditConstantEntry>             AssetAuditConstants                                // 0x0(0x10)
};


// Size 0x18
class AssetAuditConstantEntry: public None
{
public:
	Struct FString                                     Name                                               // 0x0(0x10)
	int                                                Value                                              // 0x10(0x4)
};


// Size 0x34
class CollectionLimits: public None
{
public:
	struct FName                                       CollectionName                                     // 0x0(0x8)
	byte                                               AuditType                                          // 0x8(0x1)
	bool                                               IsOnlyParentCollection                             // 0x9(0x1)
	Struct CollectionTotalsLimits                      CollectionTotals                                   // 0xc(0x10)
	Struct CollectionStaticMeshLimits                  StaticMeshLimits                                   // 0x1c(0x8)
	Struct CollectionSkeleMeshLimits                   SkeleMeshLimits                                    // 0x24(0x8)
	Struct CollectionAnimSequenceLimits                AnimLimits                                         // 0x2c(0x4)
	bool                                               CanUseComplexCollisionAsSimple                     // 0x30(0x1)
	bool                                               CanUseLOD0Collision                                // 0x31(0x1)
};


// Size 0x4
class CollectionAnimSequenceLimits: public None
{
public:
	int                                                MaxMemory                                          // 0x0(0x4)
};


// Size 0x8
class CollectionSkeleMeshLimits: public None
{
public:
};


// Size 0x8
class CollectionMeshLimitsBase: public None
{
public:
	int                                                MaxVerts                                           // 0x0(0x4)
	int                                                MaxMemory                                          // 0x4(0x4)
};


// Size 0x8
class CollectionStaticMeshLimits: public None
{
public:
};


// Size 0x10
class CollectionTotalsLimits: public None
{
public:
	int                                                MaxTotalVerts                                      // 0x0(0x4)
	int                                                MaxTotalMemory                                     // 0x4(0x4)
	int                                                MostExpensiveAssetsSetSize                         // 0x8(0x4)
	int                                                ExpensiveAssetSetMaxTotalMemory                    // 0xc(0x4)
};


// Size 0x10
class CollectionLimitsArray: public None
{
public:
	TArray<Struct MaterialQualityOverrides>            CollectionLimits                                   // 0x0(0x10)
};


}