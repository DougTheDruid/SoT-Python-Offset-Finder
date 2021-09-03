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

// Function Pets.PetAIController.OnPerceptionUpdated
struct APetAIController_OnPerceptionUpdated_Params
{
	TArray<class AActor*>                              ChangedPerceivedActors;                                    // (Parm, ZeroConstructor)
};

// Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
struct APetAIController_GetAthenaAICharPathFollowingComp_Params
{
	class UAthenaAICharacterPathFollowingComponent*    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
struct UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params
{
};

// Function Pets.PetOwnerComponent.Server_RequestDismissal
struct UPetOwnerComponent_Server_RequestDismissal_Params
{
};

// Function Pets.PetsService.RemovePetFromActor
struct UPetsService_RemovePetFromActor_Params
{
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pets.PetsService.AddPetForActorAndWield
struct UPetsService_AddPetForActorAndWield_Params
{
	class UClass*                                      InPetType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FPetCustomisation                           InCustomisation;                                           // (ConstParm, Parm)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWielded;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pets.PetsService.AddPetForActor
struct UPetsService_AddPetForActor_Params
{
	class UClass*                                      InPetType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FPetCustomisation                           InCustomisation;                                           // (ConstParm, Parm)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pets.WieldablePet.OnRep_HungerReactAnimationState
struct AWieldablePet_OnRep_HungerReactAnimationState_Params
{
};

// Function Pets.WieldablePet.OnRep_DropRequest
struct AWieldablePet_OnRep_DropRequest_Params
{
	TEnumAsByte<Pets_EWieldablePetDropRequestReason>   PriorDropRequest;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
