#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xa8 (Full Size[0x120] - InheritedSize[0x78]
class AthenaCheatManager: public CheatManager
{
public:
	class CinematicCameraController*                             CinematicCameraController;                         // 0x78(0x8)
	class UClass*                                                CinematicCameraControllerClass;                    // 0x80(0x8)
	char                                                         pad0x28_EH98I[0x28];                               // 0x88(0x28)
	TArray<struct WorldMarkerDesc>                               CreatedWorldMarkers;                               // 0xb0(0x10)
	class GameEventSchedulerSettingsAsset*                       DebugSchedulerSettings;                            // 0xc0(0x8)
	class ServerPerformanceReplicator*                           ServerPerformanceReplicator;                       // 0xc8(0x8)
	float                                                        TeleportToDigsiteHeightOffset;                     // 0xd0(0x4)
	char                                                         pad0x4c_AZ1O8[0x4c];                               // 0xd4(0x4c)
};


