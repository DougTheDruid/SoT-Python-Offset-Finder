// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class CreateActorInstanceOnExplodeComponent: public ActorComponent
{
public:
	class                                                        ActorToInstance;                                   // 0xc8(0x8)
	char                                                         pad0x68_A1SW9[0x68];                               // 0xce(0x68)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ExplosionInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ExplosionReceiverInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ExplosiveComponentInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FuseInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0x48] - InheritedSize[0x30]
class StatusResponseExplodeAfterTime: public StatusResponse
{
public:
	float                                                        MinTimeUntilExplosion;                             // 0x30(0x4)
	float                                                        MaxTimeUntilExplosion;                             // 0x34(0x4)
	char                                                         pad0x8_6B9F8[0x8];                                 // 0x38(0x8)
	Class World*                                                 CachedWorld;                                       // 0x40(0x8)
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestFuseFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


}