#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Damagers_Structs.h"


// Size 0x108 (Full Size[0x1d0] - InheritedSize[0xc8]
class ShockwaveDamagerComponent: public ActorComponent
{
public:
	float                                                        ExpansionDuration;                                 // 0xd0(0x4)
	float                                                        EndRadiusInMetres;                                 // 0xd4(0x4)
	bool                                                         ApplyImpulseToShips;                               // 0xd8(0x1)
	struct WeightedProbabilityRangeOfRanges                      ForceToApplyToShip;                                // 0xe0(0x30)
	bool                                                         ApplyDamageToShips;                                // 0x110(0x1)
	TArray<struct ShockwaveDamagerShipDamage>                    ShipDamageLevels;                                  // 0x118(0x10)
	class UClass*                                                DamagerType;                                       // 0x128(0x8)
	bool                                                         ApplyImpulseToGhostShips;                          // 0x130(0x1)
	float                                                        GhostShipImpulseDuration;                          // 0x134(0x4)
	float                                                        GhostShipImpulseMaxDeflectionAngle;                // 0x138(0x4)
	bool                                                         DestroyHostileGhostShips;                          // 0x13c(0x1)
	float                                                        NearbyEncounterDistanceInMetres;                   // 0x140(0x4)
	multicastinlinedelegate                                      OnShockwaveStarted;                                // 0x148(0x10)
	multicastinlinedelegate                                      OnShockwaveEnded;                                  // 0x158(0x10)
	TArray<uintptr_t>                                            ProcessedShips;                                    // 0x168(0x10)
	TArray<uintptr_t>                                            ProcessedGhostShips;                               // 0x178(0x10)
};


// Size 0x58 (Full Size[0x120] - InheritedSize[0xc8]
class RadialDamagerComponent: public ActorComponent
{
public:
	float                                                        DamageIntervalSeconds;                             // 0xc8(0x4)
	float                                                        DamagePerSecondAtCentre;                           // 0xcc(0x4)
	float                                                        DamagePerSecondAtMaxRadius;                        // 0xd0(0x4)
	float                                                        DamageRadius;                                      // 0xd4(0x4)
	class UClass*                                                DamagerType;                                       // 0xe0(0x8)
	char                                                         HealthChangedReason;                               // 0xe8(0x1)
	struct Vector                                                LocalOffset;                                       // 0xec(0xc)
};


// Size 0x158 (Full Size[0x220] - InheritedSize[0xc8]
class ShipDamagerComponent: public ActorComponent
{
public:
	class PrimitiveComponent*                                    Shape;                                             // 0xd0(0x8)
	TArray<class Interface*>                                     ShipHulls;                                         // 0xd8(0x10)
	TArray<class Interface*>                                     WatercraftHealthInterfaces;                        // 0xe8(0x10)
	struct StrainDamage                                          ShipStrainDamage;                                  // 0xf8(0x28)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenWatercraftDamage;                       // 0x120(0x30)
	float                                                        WatercraftDamage;                                  // 0x150(0x4)
	bool                                                         StartDamagingOnBeginPlay;                          // 0x154(0x1)
};


