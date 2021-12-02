#pragma once

// Name: SoT, Version: 2.4.0


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

// Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
struct AAshenLordAshCloud_UpdatePostSettingsBP_Params
{
};

// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
struct AAshenLordAshCloud_SetDissipationDensityBP_Params
{
	float                                              CloudDensity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
struct AAshenLordAshCloud_OnRep_StateChanged_Params
{
};

// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
struct AAshenLordVolcano_Multicast_FireProjectile_Params
{
	int                                                WeightedVolcanoProjectileIndex;                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AuthoritySpawnLocation;                                    // 0x0004(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     LaunchVelocity;                                            // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     RotationRate;                                              // 0x001C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
struct AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params
{
};

// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
struct AAshenLordWorldEndCloud_AnimateCloud_Params
{
	float                                              AdjustedLifetime;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.Geyser.OnRep_GeyserState
struct AGeyser_OnRep_GeyserState_Params
{
};

// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
struct AGeyser_Multicast_TriggerExplosion_Params
{
};

// Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged
struct ADisableGeyserMechanismAction_OnActionStateChanged_Params
{
	TEnumAsByte<Athena_EMechanismActionState>          PreviousState;                                             // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EMechanismActionState>          NewState;                                                  // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InInstigator;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset
struct ADisableGeyserMechanismAction_OnActionReset_Params
{
};

// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
struct AEarthquake_OnRep_EarthquakeState_Params
{
	TEnumAsByte<NaturalDisasters_EEarthquakeState>     OldEarthquakeState;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
struct AMechanismGeyser_OnMechanismActionStateChanged_Params
{
	TEnumAsByte<Athena_EMechanismActionState>          PreviousState;                                             // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EMechanismActionState>          NewState;                                                  // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InInstigator;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
struct AMechanismGeyser_OnMechanismActionReset_Params
{
};

// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
struct UGeyserItemSpawnComponent_OnGeyserSpawned_Params
{
	struct FVector                                     GeyserSpawnLocation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
struct ALavaZone_OnRep_ActorsInZone_Params
{
	TArray<class AActor*>                              PreviousActors;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NaturalDisasters.LavaZone.OnRep_Active
struct ALavaZone_OnRep_Active_Params
{
};

// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
struct ASuperheatedWater_OnRep_PlayersInZone_Params
{
};

// Function NaturalDisasters.Volcano.OnRep_VolcanoState
struct AVolcano_OnRep_VolcanoState_Params
{
	struct FVolcanoStateData                           OldVolcanoState;                                           // 0x0000(0x000C)  (ConstParm, Parm)
};

// Function NaturalDisasters.Volcano.Multicast_FireProjectile
struct AVolcano_Multicast_FireProjectile_Params
{
	struct FVector                                     AuthoritySpawnLocation;                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<struct FVolcanoProjectileData>              VolcanoProjectileDataArray;                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
