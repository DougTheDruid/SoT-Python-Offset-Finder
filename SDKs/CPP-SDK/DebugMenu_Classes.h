// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class DebugMenuComponent: public ActorComponent
{
public:
	Class DebugMenu*                                             DebugMenuInstance;                                 // 0xf0(0x8)
};


// Size 0x0
class DebugMenuEntryGenerator: public Object
{
public:
};


// Size 0x40
class DebugMenuDataAsset: public DataAsset
{
public:
	TArray<class DebugMenuDataAsset*>                            DataAssets;                                        // 0x28(0x10)
	TArray<Struct DebugMenuDataAssetEntry>                       MenuEntires;                                       // 0x38(0x10)
	TArray<Struct DebugMenuButtonShortcut>                       ButtonShortcuts;                                   // 0x48(0x10)
	TArray<class DebugMenuEntryGenerator*>                       MenuEntryGenerators;                               // 0x58(0x10)
};


// Size 0xb0
class DebugMenu: public Actor
{
public:
};


// Size 0x8
class DebugMenuComponentMock: public DebugMenuComponent
{
public:
};


// Size 0x0
class DebugMenuTestFunctions: public BlueprintFunctionLibrary
{
public:
};


}