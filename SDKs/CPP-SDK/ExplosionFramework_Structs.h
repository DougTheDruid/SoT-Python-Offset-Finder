#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct EventAffectedByExplosion
{
public:
	class UClass*                                                DamagerType;                                       // 0x0(0x8)
};


// Size 0x8
struct EventExplosionIgnitedActor
{
public:
	class Actor*                                                 IgnitedActor;                                      // 0x0(0x8)
};


// Size 0x20
struct EventOnExploded
{
public:
	class Actor*                                                 RootInstigator;                                    // 0x0(0x8)
	class Object*                                                ImpactProjectileId;                                // 0x18(0x8)
};


// Size 0x8
struct EventExplosionOverlap
{
public:
	class UClass*                                                DamagerType;                                       // 0x0(0x8)
};


