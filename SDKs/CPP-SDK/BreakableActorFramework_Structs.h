#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct EventBreakableActorWasDestroyed
{
public:
	class Actor*                                                 Instigator;                                        // 0x0(0x8)
	class Actor*                                                 DirectInstigator;                                  // 0x8(0x8)
};


// Size 0x58
struct EventBreakableActorWasDamaged
{
public:
	struct ImpactDamageEvent                                     ImpactDamageEvent;                                 // 0x0(0x58)
};


