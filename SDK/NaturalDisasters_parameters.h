#pragma once

// Name: SoT, Version: 2.2.1.1


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
	float                                              CloudDensity;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
struct AAshenLordAshCloud_OnRep_StateChanged_Params
{
};

// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
struct AAshenLordVolcano_Multicast_FireProjectile_Params
{
	int                                                WeightedVolcanoProjectileIndex;                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AuthoritySpawnLocation;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     LaunchVelocity;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     RotationRate;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
struct AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params
{
};

// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
struct AAshenLordWorldEndCloud_AnimateCloud_Params
{
	float                                              AdjustedLifetime;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
struct AEarthquake_OnRep_EarthquakeState_Params
{
	TEnumAsByte<NaturalDisasters_EEarthquakeState>     OldEarthquakeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.Geyser.OnRep_GeyserState
struct AGeyser_OnRep_GeyserState_Params
{
};

// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
struct AGeyser_Multicast_TriggerExplosion_Params
{
};

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
struct AMechanismGeyser_OnMechanismActionStateChanged_Params
{
	TEnumAsByte<Athena_EMechanismActionState>          PreviousState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EMechanismActionState>          NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InInstigator;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
struct AMechanismGeyser_OnMechanismActionReset_Params
{
};

// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
struct UGeyserItemSpawnComponent_OnGeyserSpawned_Params
{
	struct FVector                                     GeyserSpawnLocation;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
struct ALavaZone_OnRep_ActorsInZone_Params
{
	TArray<class AActor*>                              PreviousActors;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
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
	struct FVolcanoStateData                           OldVolcanoState;                                           // (ConstParm, Parm)
};

// Function NaturalDisasters.Volcano.Multicast_FireProjectile
struct AVolcano_Multicast_FireProjectile_Params
{
	struct FVector                                     AuthoritySpawnLocation;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<struct FVolcanoProjectileData>              VolcanoProjectileDataArray;                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
