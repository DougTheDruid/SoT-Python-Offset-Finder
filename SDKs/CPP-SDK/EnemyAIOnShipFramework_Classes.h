// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class EnemyAIOnShipEncounterDesc: public DataAsset
{
public:
	class AIFixedWavesSpawner*                                   SpawnerCrewSize1;                                  // 0x28(0x8)
	class AIFixedWavesSpawner*                                   SpawnerCrewSize2;                                  // 0x30(0x8)
	class AIFixedWavesSpawner*                                   SpawnerCrewSize3;                                  // 0x38(0x8)
	class AIFixedWavesSpawner*                                   SpawnerCrewSize4;                                  // 0x40(0x8)
	float                                                        MigrationPreventionRadius;                         // 0x48(0x4)
	char                                                         pad0x4_WAW75[0x4];                                 // 0x4c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnemyAIOnShipServiceInterface: public Interface
{
public:
};


// Size 0xa8 (Full Size[0x470] - InheritedSize[0x3c8]
class EnemyAIOnShipService: public Actor
{
public:
	char                                                         pad0x20_RXKDB[0x20];                               // 0x3c8(0x20)
	class EnemyAIOnShipServiceDataAsset*                         Params;                                            // 0x3e8(0x8)
	TArray<struct EnemyAIOnShipActiveEncounters>                 ReplicatedEncounters;                              // 0x3f0(0x10)
	char                                                         pad0x70_3SSL2[0x70];                               // 0x400(0x70)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class EnemyAIOnShipServiceDataAsset: public DataAsset
{
public:
	class EnemyAIOnShipEncounterDesc*                            OceanCrawlersOnShipEncounterParams;                // 0x28(0x8)
};


}