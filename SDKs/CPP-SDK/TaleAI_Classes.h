// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class TaleAIRegionBase: public Object
{
public:
	char                                                         pad0x8_WI9H2[0x8];                                 // 0x28(0x8)
	class AIProximityPlayerTracker*                              ProximityPlayerTracker;                            // 0x30(0x8)
	char                                                         pad0x38_KL8JJ[0x38];                               // 0x38(0x38)
};


// Size 0x18 (Full Size[0x88] - InheritedSize[0x70]
class TaleAICustomRegion: public TaleAIRegionBase
{
public:
	char                                                         pad0x18_E2X16[0x18];                               // 0x70(0x18)
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleAIRegionFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class TaleQuestAIAsset: public DataAsset
{
public:
	class TaleQuestSpawnAICustomRootStepDesc*                    SpawnerRoot;                                       // 0x28(0x8)
	class TaleStruct*                                            SpawnerParameters;                                 // 0x30(0x8)
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestAIBlackboardFunctionStepLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestAIGoalFunctionStepLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestAIHomeFunctionStepLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestAINameplateFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleQuestAISpawner: public Object
{
public:
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestAISpawnFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class TaleQuestSpawnAICustomOnDespawnFrame: public Object
{
public:
	char                                                         pad0x8_UUMD6[0x8];                                 // 0x28(0x8)
	struct SpawnAICustomOnDespawnTaskData                        Data;                                              // 0x30(0x20)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class TaleQuestSpawnAICustomOnSpawnFrame: public Object
{
public:
	char                                                         pad0x8_D5I01[0x8];                                 // 0x28(0x8)
	struct SpawnAICustomOnSpawnTaskData                          Data;                                              // 0x30(0x18)
};


// Size 0xf0 (Full Size[0x188] - InheritedSize[0x98]
class TaleQuestSpawnAICustomRootStep: public TaleQuestStep
{
public:
	char                                                         pad0x10_EFBOD[0x10];                               // 0x98(0x10)
	struct TaleStructInstance                                    Params;                                            // 0xa8(0x10)
	TArray<class TaleQuestSpawnAICustomTaskBase*>                ActiveTasks;                                       // 0xb8(0x10)
	char                                                         pad0x10_0QD6P[0x10];                               // 0xc8(0x10)
	class TaleAIRegionBase*                                      Region;                                            // 0xd8(0x8)
	char                                                         pad0xa8_UX88E[0xa8];                               // 0xe0(0xa8)
};


// Size 0xe8 (Full Size[0x168] - InheritedSize[0x80]
class TaleQuestSpawnAICustomRootStepDesc: public TaleQuestStepDesc
{
public:
	char                                                         pad0x8_GBXTP[0x8];                                 // 0x80(0x8)
	struct SpawnAICustomSetupTaskData                            SetupTaskData;                                     // 0x88(0x18)
	struct SpawnActorCustomOnTriggerWaveTaskData                 OnTriggerWaveTaskData;                             // 0xa0(0x10)
	struct SpawnActorCustomOnCompleteWaveTaskData                OnCompleteWaveTaskData;                            // 0xb0(0x8)
	struct SpawnAICustomPreSpawnTaskData                         PreSpawnTaskData;                                  // 0xb8(0x78)
	struct SpawnAICustomOnSpawnTaskData                          OnSpawnTaskData;                                   // 0x130(0x18)
	struct SpawnAICustomOnDespawnTaskData                        OnDespawnTaskData;                                 // 0x148(0x20)
};


// Size 0xb0 (Full Size[0x148] - InheritedSize[0x98]
class TaleQuestSpawnAICustomStep: public TaleQuestStep
{
public:
	char                                                         pad0xb0_GEHR6[0xb0];                               // 0x98(0xb0)
};


// Size 0x80 (Full Size[0x100] - InheritedSize[0x80]
class TaleQuestSpawnAICustomStepDesc: public TaleQuestStepDesc
{
public:
	char                                                         pad0x8_SXHAJ[0x8];                                 // 0x80(0x8)
	class TaleQuestAIAsset*                                      AISpawner;                                         // 0x88(0x8)
	class TaleQuestStepDesc*                                     OnSpawn;                                           // 0x90(0x8)
	class TaleQuestStepDesc*                                     OnDespawn;                                         // 0x98(0x8)
	struct TaleStructInstance                                    ParamterInstance;                                  // 0xf0(0x10)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class TaleQuestSpawnAICustomTaskBase: public Object
{
public:
	char                                                         pad0x8_FD7K6[0x8];                                 // 0x28(0x8)
	class TaleQuestSpawnAICustomRootStep*                        MyRootStep;                                        // 0x30(0x8)
	char                                                         pad0x40_TMOBU[0x40];                               // 0x38(0x40)
};


// Size 0x30 (Full Size[0xa8] - InheritedSize[0x78]
class TaleQuestSpawnAICustomOnDespawnTask: public TaleQuestSpawnAICustomTaskBase
{
public:
	char                                                         pad0x10_1RNUL[0x10];                               // 0x78(0x10)
	struct SpawnAICustomOnDespawnTaskData                        TaskData;                                          // 0x88(0x20)
};


// Size 0xa8 (Full Size[0x120] - InheritedSize[0x78]
class TaleQuestSpawnAICustomOnSpawnTask: public TaleQuestSpawnAICustomTaskBase
{
public:
	char                                                         pad0x10_ZLE3F[0x10];                               // 0x78(0x10)
	struct SpawnAICustomOnSpawnTaskData                          TaskData;                                          // 0x88(0x18)
	char                                                         pad0x80_RSN6G[0x80];                               // 0xa0(0x80)
};


// Size 0x98 (Full Size[0x110] - InheritedSize[0x78]
class TaleQuestSpawnAICustomPreSpawnTask: public TaleQuestSpawnAICustomTaskBase
{
public:
	char                                                         pad0x18_G4DHD[0x18];                               // 0x78(0x18)
	struct SpawnAICustomPreSpawnTaskData                         TaskData;                                          // 0x90(0x78)
	char                                                         pad0x8_NDEIM[0x8];                                 // 0x108(0x8)
};


// Size 0x28 (Full Size[0xa0] - InheritedSize[0x78]
class TaleQuestSpawnAICustomSetupTask: public TaleQuestSpawnAICustomTaskBase
{
public:
	struct SpawnAICustomSetupTaskData                            TaskData;                                          // 0x78(0x18)
	char                                                         pad0x10_KYQOI[0x10];                               // 0x90(0x10)
};


// Size 0x18 (Full Size[0x90] - InheritedSize[0x78]
class TaleQuestSpawnAICustomSpawnerOnCompleteWaveTask: public TaleQuestSpawnAICustomTaskBase
{
public:
	struct SpawnActorCustomOnCompleteWaveTaskData                TaskData;                                          // 0x78(0x8)
	char                                                         pad0x10_H5WW0[0x10];                               // 0x80(0x10)
};


// Size 0x20 (Full Size[0x98] - InheritedSize[0x78]
class TaleQuestSpawnAICustomSpawnerOnTriggerWaveTask: public TaleQuestSpawnAICustomTaskBase
{
public:
	struct SpawnActorCustomOnTriggerWaveTaskData                 TaskData;                                          // 0x78(0x10)
	char                                                         pad0x10_QLZKM[0x10];                               // 0x88(0x10)
};


}