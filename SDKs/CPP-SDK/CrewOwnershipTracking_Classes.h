// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CrewOwnershipTrackingInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CrewSpawnOwnershipTrackingInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomCrewTrackingInterface: public Interface
{
public:
};


// Size 0xa8 (Full Size[0x170] - InheritedSize[0xc8]
class CrewOwnershipTrackingComponent: public ActorComponent
{
public:
	char                                                         pad0x18_ZEYQV[0x18];                               // 0xc8(0x18)
	Struct Guid                                                  SpawningCrewId;                                    // 0xe0(0x10)
	Struct Guid                                                  CurrentOwnedByCrewId;                              // 0xf0(0x10)
	Struct OwnerListEntry                                        PreviousOwnedByCrewIdList;                         // 0x100(0x10)
	char                                                         pad0x80_SRHW4[0x80];                               // 0x10e(0x80)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CrewOwnershipTrackingControlInterface: public Interface
{
public:
};


}