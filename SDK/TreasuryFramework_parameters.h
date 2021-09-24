#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
struct AShimmerActor_OnDeactivateShimmer_Params
{
};

// Function TreasuryFramework.ShimmerActor.OnActivateShimmer
struct AShimmerActor_OnActivateShimmer_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnWaveStart
struct ATreasuryRoom_OnWaveStart_Params
{
	TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<TreasuryFramework_ETreasuryWaveType>   WaveType;                                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TreasuryFramework.TreasuryRoom.OnWaveFinished
struct ATreasuryRoom_OnWaveFinished_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnWaveComplete
struct ATreasuryRoom_OnWaveComplete_Params
{
	TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TreasuryFramework.TreasuryRoom.OnVaultOpen
struct ATreasuryRoom_OnVaultOpen_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnVaultClosed
struct ATreasuryRoom_OnVaultClosed_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
struct ATreasuryRoom_OnTreasuryStateChange_Params
{
	TEnumAsByte<TreasuryFramework_ETreasuryState>      PrevState;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<TreasuryFramework_ETreasuryState>      NewState;                                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
struct ATreasuryRoom_OnTreasuryDeactivate_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
struct ATreasuryRoom_OnTreasuryActivate_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
struct ATreasuryRoom_OnStartRaiseWater_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
struct ATreasuryRoom_OnStartDrainWater_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnRoomStarted
struct ATreasuryRoom_OnRoomStarted_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnRaisedWater
struct ATreasuryRoom_OnRaisedWater_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
struct ATreasuryRoom_OnLeaveRoom_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TreasuryFramework.TreasuryRoom.OnEnterRoom
struct ATreasuryRoom_OnEnterRoom_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
struct ATreasuryRoom_OnEncounterParamsSetup_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnDrainedWater
struct ATreasuryRoom_OnDrainedWater_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
