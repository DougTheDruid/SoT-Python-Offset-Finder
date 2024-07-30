#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x2
struct EventPortableHarpoonProjectileClientStateChanged
{
public:
	char                                                         ProjectileState;                                   // 0x0(0x1)
	bool                                                         IsPredicted;                                       // 0x1(0x1)
};


// Size 0x38
struct EventPortableHarpoonProjectileImpact
{
public:
	class Actor*                                                 HitActor;                                          // 0x0(0x8)
	bool                                                         LocationIsRelative;                                // 0x8(0x1)
	class SceneComponent*                                        RelativeComponent;                                 // 0x10(0x8)
	struct Vector                                                HitLocation;                                       // 0x18(0xc)
	struct Vector                                                HitNormal;                                         // 0x24(0xc)
	class PhysicalMaterial*                                      HitMaterial;                                       // 0x30(0x8)
};


