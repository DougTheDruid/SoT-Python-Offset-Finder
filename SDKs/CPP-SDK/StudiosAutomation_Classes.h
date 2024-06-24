#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "StudiosAutomation_Structs.h"


// Size 0xc0 (Full Size[0x490] - InheritedSize[0x3d0]
class TestLevelScriptActor: public LevelScriptActor
{
public:
	char                                                         Category;                                          // 0x3d8(0x1)
	char                                                         Area;                                              // 0x3d9(0x1)
	bool                                                         VisualTest;                                        // 0x3da(0x1)
	bool                                                         RunInEditor;                                       // 0x3db(0x1)
	bool                                                         RunOnServer;                                       // 0x3dc(0x1)
	bool                                                         RequiresServices;                                  // 0x3dd(0x1)
	TArray<struct TestLevelMetadataEntry>                        AdditionalMetadata;                                // 0x3e0(0x10)
	char                                                         CaptureType;                                       // 0x3f0(0x1)
	char                                                         PlayModeOverride;                                  // 0x3f1(0x1)
	float                                                        TestTimeout;                                       // 0x3f4(0x4)
	float                                                        TestPausedTimeout;                                 // 0x3f8(0x4)
	TArray<String>                                               VerboseLogCategories;                              // 0x400(0x10)
	TArray<int>                                                  ClientsRunning;                                    // 0x410(0x10)
	TArray<int>                                                  ClientIds;                                         // 0x420(0x10)
	TArray<struct ClientPawnDetails>                             ClientPawns;                                       // 0x430(0x10)
	TArray<class Actor*>                                         SpawnedActors;                                     // 0x440(0x10)
	int                                                          NextSpawnedActorIndex;                             // 0x450(0x4)
};


// Size 0x50 (Full Size[0x88] - InheritedSize[0x38]
class TextureAuditorSettings: public TestSettings
{
public:
	TArray<struct StringAssetReference>                          SpecificTexturesToNotAudit;                        // 0x38(0x10)
	TArray<struct DirectoryPath>                                 TextureDirectoriesToNotAudit;                      // 0x48(0x10)
	struct TextureAuditorProperties                              DefaultTextureProperties;                          // 0x58(0x20)
	TArray<struct TextureAuditorGroupProperties>                 PerTextureGroupPropertiesOverrides;                // 0x78(0x10)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ObjectWithSettableWorld: public Object
{
public:
	class World*                                                 World;                                             // 0x28(0x8)
};


// Size 0x40 (Full Size[0x78] - InheritedSize[0x38]
class AssetAuditSettings: public DeveloperSettings
{
public:
	TArray<String>                                               PathsToAuditOnSave;                                // 0x38(0x10)
	TArray<Class>                                                TypesToIgnoreInFeatureToggleAudits;                // 0x48(0x10)
	TArray<String>                                               AssetAuditorsLoadExceptionList;                    // 0x58(0x10)
	TArray<Class>                                                IgnoreReferencersForClasses;                       // 0x68(0x10)
};


