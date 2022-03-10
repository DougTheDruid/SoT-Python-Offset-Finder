namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
class TreasuryWaveEncounter: public None
{
public:
	byte                                               EncounterType                                      // 0x0(0x1)
	Class SpawnAIWaveMechanismAction*                  SpawnerMechanism                                   // 0x8(0x8)
	Class Actor*                                       MechanismTrigger                                   // 0x10(0x8)
	Class SpawnAIWaveMechanismAction*                  SpawnerMechanismVaultMaster                        // 0x18(0x8)
	Class Actor*                                       MechanismTriggerVaultMaster                        // 0x20(0x8)
	Class TreasuryWaveDataAsset*                       Waves                                              // 0x28(0x8)
	Class TreasuryWaveDataAsset*                       FinalWaves                                         // 0x30(0x8)
	Class TreasuryWaveDataAsset*                       FinalWavesVaultMaster                              // 0x38(0x8)
	bool                                               NeedsRoomFlooded                                   // 0x40(0x1)
};


// Size 0x18
class TreasuryWaveTracker: public None
{
public:
};


// Size 0x1
class EventTreasuryRoomInactive: public None
{
public:
};


// Size 0x1
class EventTreasuryRoomActive: public None
{
public:
};


}