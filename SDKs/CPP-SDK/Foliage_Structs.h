#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x20
struct FoliageTypeObject
{
public:
	class Object*                                                FoliageTypeObject;                                 // 0x0(0x8)
	class FoliageType_InstancedStaticMesh*                       TypeInstance;                                      // 0x8(0x8)
	bool                                                         bIsAsset;                                          // 0x10(0x1)
	class UClass*                                                Type;                                              // 0x18(0x8)
};


// Size 0x60
struct ProceduralFoliageInstance
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	struct Quat                                                  Rotation;                                          // 0x10(0x10)
	struct Vector                                                Normal;                                            // 0x20(0xc)
	float                                                        Age;                                               // 0x2c(0x4)
	float                                                        Scale;                                             // 0x30(0x4)
	class FoliageType_InstancedStaticMesh*                       Type;                                              // 0x38(0x8)
};


