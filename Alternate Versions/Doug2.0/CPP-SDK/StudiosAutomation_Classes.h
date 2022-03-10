namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc0
class TestLevelScriptActor: public LevelScriptActor
{
public:
	byte                                               Category                                           // 0x3e0(0x1)
	byte                                               Area                                               // 0x3e1(0x1)
	bool                                               VisualTest                                         // 0x3e2(0x1)
	bool                                               RunInEditor                                        // 0x3e3(0x1)
	bool                                               RunOnServer                                        // 0x3e4(0x1)
	bool                                               RequiresServices                                   // 0x3e5(0x1)
	TArray<Struct RequiresServices>                    AdditionalMetadata                                 // 0x3e8(0x10)
	byte                                               CaptureType                                        // 0x3f8(0x1)
	byte                                               PlayModeOverride                                   // 0x3f9(0x1)
	float                                              TestTimeout                                        // 0x3fc(0x4)
	float                                              TestPausedTimeout                                  // 0x400(0x4)
	TArray<Str >                                       VerboseLogCategories                               // 0x408(0x10)
	TArray<Int >                                       ClientsRunning                                     // 0x418(0x10)
	TArray<Int >                                       ClientIds                                          // 0x428(0x10)
	TArray<Struct ClientIds>                           ClientPawns                                        // 0x438(0x10)
	TArray<class SpawnedActors*>                       SpawnedActors                                      // 0x448(0x10)
	int                                                NextSpawnedActorIndex                              // 0x458(0x4)
};


// Size 0x0
class ActorThatLogsErrorWhenTicked: public Actor
{
public:
};


// Size 0x0
class AutomationBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38
class AutomationLatentActionCallback: public Object
{
public:
};


// Size 0x0
class BPNamedObjectMock: public Object
{
public:
};


// Size 0x0
class DummyReplicatedActor: public Actor
{
public:
};


// Size 0x0
class MapFixtureTestGameMode: public GameMode
{
public:
};


// Size 0x8
class ObjectWithSettableWorld: public Object
{
public:
	Class World*                                       World                                              // 0x28(0x8)
};


// Size 0x0
class TestUObject: public Object
{
public:
};


// Size 0x0
class OtherTestUObject: public Object
{
public:
};


// Size 0x0
class RunUnitTestsCommandlet: public Commandlet
{
public:
};


// Size 0x0
class TestablePlayerController: public PlayerController
{
public:
};


// Size 0x0
class TestablePlayerControllerInterface: public Interface
{
public:
};


// Size 0x20
class TestablePlayerControllerComponent: public ActorComponent
{
public:
};


// Size 0x0
class TestAbstractActor: public Actor
{
public:
};


// Size 0x0
class TestSettings: public DeveloperSettings
{
public:
};


// Size 0x50
class TextureAuditorSettings: public TestSettings
{
public:
	TArray<Struct ForwardSettingMap>                   SpecificTexturesToNotAudit                         // 0x38(0x10)
	TArray<Struct SpecificTexturesToNotAudit>          TextureDirectoriesToNotAudit                       // 0x48(0x10)
	Struct TextureAuditorProperties                    DefaultTextureProperties                           // 0x58(0x20)
	TArray<Struct DefaultTextureProperties>            PerTextureGroupPropertiesOverrides                 // 0x78(0x10)
};


}