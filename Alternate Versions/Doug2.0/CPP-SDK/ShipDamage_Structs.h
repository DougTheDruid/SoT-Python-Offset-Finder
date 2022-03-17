// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct ShipDamageParams
{
public:
	TArray<Struct ShipPartLevelsOfDamage>                        DamageParams;                                      // 0x0(0x10)
};


// Size 0x30
struct ShipPartLevelsOfDamage
{
public:
	TArray<Struct DistanceAndLevelOfDamage>                      DamagePerDistance;                                 // 0x20(0x10)
};


// Size 0x8
struct DistanceAndLevelOfDamage
{
public:
	float                                                        DistanceLimit;                                     // 0x0(0x4)
	int                                                          LevelOfDamage;                                     // 0x4(0x4)
};


// Size 0x10
struct HullDamagePersistenceModel
{
public:
	TArray<Struct HullDamageZoneInfo>                            DamageZones;                                       // 0x0(0x10)
};


// Size 0x30
struct HullDamageZoneInfo
{
public:
	Struct FString                                               DamageZoneId;                                      // 0x0(0x10)
	int                                                          DamageLevel;                                       // 0x10(0x4)
	int                                                          RepairedDamageLevel;                               // 0x14(0x4)
	byte                                                         RepairableState;                                   // 0x18(0x1)
	TArray<Struct HullDamageHit>                                 ExternalHitList;                                   // 0x20(0x10)
};


// Size 0x24
struct HullDamageHit
{
public:
	Struct Vector                                                HitPosition;                                       // 0x0(0xc)
	Struct Vector                                                HitNormal;                                         // 0xc(0xc)
	float                                                        HitStrength;                                       // 0x18(0x4)
	int                                                          HitLevel;                                          // 0x1c(0x4)
	bool                                                         HasDecal;                                          // 0x20(0x1)
};


// Size 0x70
struct EventShipDamageApplied
{
public:
	Class Actor*                                                 Ship;                                              // 0x0(0x8)
	struct FName                                                 DamagedShipPartIdentifier;                         // 0x8(0x8)
	int                                                          NewDamageLevel;                                    // 0x10(0x4)
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


}