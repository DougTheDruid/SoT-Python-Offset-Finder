#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "OceanCrawlers_Structs.h"


// Size 0xf8 (Full Size[0x1c0] - InheritedSize[0xc8]
class OceanCrawlerAudioBroadcaster: public ActorComponent
{
public:
	class OceanCrawlerAudioParamsDataAsset*                      AudioDataAsset;                                    // 0xc8(0x8)
	class Actor*                                                 CachedOwner;                                       // 0xd0(0x8)
	char                                                         pad0xe8_S9DHA[0xe8];                               // 0xd8(0xe8)
};


// Size 0x78 (Full Size[0xa0] - InheritedSize[0x28]
class OceanCrawlerAudioParamsDataAsset: public DataAsset
{
public:
	class WwiseObjectPoolWrapper*                                WwiseObjectPoolWrapper;                            // 0x28(0x8)
	TArray<struct OceanCrawlerAudioKeyPair>                      AudioKeyPairs;                                     // 0x30(0x10)
	struct WeightedProbabilityRangeOfRanges                      BuffThankDelay;                                    // 0x40(0x30)
	struct OceanCrawlerBuffAudioSettings                         CrabBuffAudioSettings;                             // 0x70(0x10)
	struct OceanCrawlerBuffAudioSettings                         EelBuffAudioSettings;                              // 0x80(0x10)
	struct OceanCrawlerBuffAudioSettings                         HermitBuffAudioSettings;                           // 0x90(0x10)
};


// Size 0x8 (Full Size[0x68] - InheritedSize[0x60]
class BTTask_BroadcastOceanCrawlerAbilityAudioEvent: public BTTaskNode
{
public:
	char                                                         OceanCrawlerAudioKeyToBroadcast;                   // 0x60(0x1)
	char                                                         pad0x7_PYUJE[0x7];                                 // 0x61(0x7)
};


