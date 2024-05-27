#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x28
struct PoolableCollectionMapConfigurationEntry
{
public:
	assetclass                                                   Type;                                              // 0x0(0x20)
	int                                                          Size;                                              // 0x20(0x4)
};


// Size 0x18
struct PoolableCollectionMapConfiguration
{
public:
	TArray<struct PoolableCollectionMapConfigurationEntry>       Pools;                                             // 0x0(0x10)
	bool                                                         PopulateJustInTime;                                // 0x10(0x1)
};


