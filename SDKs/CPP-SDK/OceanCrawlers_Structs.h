#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct OceanCrawlerBuffAudioSettings
{
public:
	class WwiseEvent*                                            GiveBuffAudioEvent;                                // 0x0(0x8)
	class WwiseEvent*                                            ReceiveBuffAudioEvent;                             // 0x8(0x8)
};


// Size 0x10
struct OceanCrawlerAudioKeyPair
{
public:
	char                                                         AudioKey;                                          // 0x0(0x1)
	char                                                         pad0x7_9UFSG[0x7];                                 // 0x1(0x7)
	class WwiseEvent*                                            AudioEvent;                                        // 0x8(0x8)
};


