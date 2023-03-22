// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct HullDamagePersistenceModel
{
public:
	TArray<struct DamageZones>                                   DamageZones;                                       // 0x0(0x10)
};


// Size 0x30
struct HullDamageZoneInfo
{
public:
	Struct FString                                               DamageZoneId;                                      // 0x0(0x10)
	int                                                          DamageLevel;                                       // 0x10(0x4)
	int                                                          RepairedDamageLevel;                               // 0x14(0x4)
	byte                                                         RepairableState;                                   // 0x18(0x1)
	char                                                         pad0x7_0PHIG[0x7];                                 // 0x19(0x7)
	TArray<struct ExternalHitList>                               ExternalHitList;                                   // 0x20(0x10)
};


// Size 0x1c
struct HullDamageHit
{
public:
	Struct Vector                                                HitPosition;                                       // 0x0(0xc)
	Struct Vector                                                HitNormal;                                         // 0xc(0xc)
	bool                                                         HasDecal;                                          // 0x18(0x1)
};


// Size 0x10
struct ShipDamageParams
{
public:
	TArray<struct DamageParams>                                  DamageParams;                                      // 0x0(0x10)
};


// Size 0x40
struct ShipPartLevelsOfDamage
{
public:
	TArray<struct DamagePerDistance>                             DamagePerDistance;                                 // 0x20(0x10)
	Struct FeatureFlag                                           FeatureName;                                       // 0x30(0xc)
};


// Size 0x8
struct DistanceAndLevelOfDamage
{
public:
	float                                                        DistanceLimit;                                     // 0x0(0x4)
	int                                                          LevelOfDamage;                                     // 0x4(0x4)
};


// Size 0x70
struct EventShipDamageApplied
{
public:
	Class Actor*                                                 Ship;                                              // 0x0(0x8)
	struct FName                                                 DamagedShipPartIdentifier;                         // 0x8(0x8)
	int                                                          NewDamageLevel;                                    // 0x10(0x4)
	char                                                         pad0x4_SK2IN[0x4];                                 // 0x14(0x4)
	Struct ImpactDamageEvent                                     ImpactDamageEvent;                                 // 0x18(0x58)
};


// Size 0x60
struct EventShipDamaged
{
public:
	Class Actor*                                                 Ship;                                              // 0x0(0x8)
	Struct ImpactDamageEvent                                     ImpactDamageEvent;                                 // 0x8(0x58)
};


// Size 0x10
struct DamageZoneDamageLevelChanged
{
public:
	Class Actor*                                                 DamageZone;                                        // 0x0(0x8)
	int                                                          DamageLevel;                                       // 0x8(0x4)
};


// Size 0x10
struct AppliedDamageToShipEvent
{
public:
	class                                                        ShipType;                                          // 0x0(0x8)
	Class Actor*                                                 Ship;                                              // 0x8(0x8)
};


// Size 0x10
struct ShipRestoredNetworkEvent
{
public:
};


// Size 0x20
struct SendShipRestoredRpc
{
public:
	Struct Guid                                                  CrewId;                                            // 0x10(0x10)
};


// Size 0x1
struct EventRestoreShip
{
public:
	bool                                                         OnlyRepaired;                                      // 0x0(0x1)
};


}