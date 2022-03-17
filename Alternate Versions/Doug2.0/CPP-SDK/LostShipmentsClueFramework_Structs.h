// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct ClueSite
{
public:
	class                                                        SiteType;                                          // 0x0(0x8)
	Class ClueSiteData*                                          SiteData;                                          // 0x8(0x8)
	Struct Vector                                                Location;                                          // 0x10(0xc)
};


// Size 0x18
struct LandClueCreationChoice
{
public:
	class                                                        ClueSiteType;                                      // 0x0(0x8)
	struct FName                                                 IslandIdentifier;                                  // 0x8(0x8)
	Class LandClueCreator*                                       ClueCreator;                                       // 0x10(0x8)
};


// Size 0x20
struct SeaClueCreationChoice
{
public:
	class                                                        SiteType;                                          // 0x0(0x8)
	Class SeaClueCreator*                                        ClueCreator;                                       // 0x8(0x8)
};


// Size 0x18
struct WeightedClueDestinationDescriptor
{
public:
	class                                                        DestinationType;                                   // 0x0(0x8)
	TArray<Float DifficultyWeightings>                           DifficultyWeightings;                              // 0x8(0x10)
};


// Size 0x18
struct ClueSiteTypeSupportedDescribedByEntry
{
public:
	class                                                        SiteType;                                          // 0x0(0x8)
	TArray<Struct WeightedClueDescriptor>                        SupportedDescriptors;                              // 0x8(0x10)
};


// Size 0x18
struct WeightedClueDescriptor
{
public:
	class                                                        Descriptor;                                        // 0x0(0x8)
	TArray<Float DifficultyWeightings>                           DifficultyWeightings;                              // 0x8(0x10)
};


// Size 0x10
struct RestrictedClueType
{
public:
	class                                                        Type;                                              // 0x0(0x8)
	int                                                          Max;                                               // 0x8(0x4)
};


// Size 0x10
struct ClueSiteLootRestriction
{
public:
	class                                                        SiteType;                                          // 0x0(0x8)
	int                                                          LootMax;                                           // 0x8(0x4)
};


// Size 0x28
struct DebrisToRangeDist
{
public:
	Struct WeightedProbabilityRange                              NumberOfDebrisItemsToSpawn;                        // 0x0(0x20)
	Class WeightedDebrisDataAsset*                               WeightedDebrisTypeAsset;                           // 0x20(0x8)
};


// Size 0x28
struct LootToRangeDist
{
public:
	Struct WeightedProbabilityRange                              NumberOfLootItemsToSpawn;                          // 0x0(0x20)
	Class WeightedTreasureChestDescAsset*                        WeightedLootDescAsset;                             // 0x20(0x8)
};


// Size 0x20
struct QuestVariableClueSiteArray
{
public:
};


// Size 0x20
struct QuestVariableClueSite
{
public:
};


// Size 0x10
struct ClueSiteLootHistory
{
public:
	TArray<Struct LootSpawnedAtClueSite>                         History;                                           // 0x0(0x10)
};


// Size 0x18
struct LootSpawnedAtClueSite
{
public:
	class                                                        SiteType;                                          // 0x0(0x8)
	Struct Vector                                                SiteLocation;                                      // 0x8(0xc)
	int                                                          NumLoot;                                           // 0x14(0x4)
};


// Size 0x20
struct QuestVariableClueDescriptor
{
public:
};


// Size 0x28
struct WeightedDebris
{
public:
	float                                                        Weight;                                            // 0x20(0x4)
};


// Size 0x20
struct EventClueObtained
{
public:
	Class ClueDescriptor*                                        ObtainedClue;                                      // 0x0(0x8)
	class                                                        ObtainedSiteType;                                  // 0x8(0x8)
};


}