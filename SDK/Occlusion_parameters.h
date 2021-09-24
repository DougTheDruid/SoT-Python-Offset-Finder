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

// Function Occlusion.OcclusionService.OnPrimaryActorEndPlay
struct UOcclusionService_OnPrimaryActorEndPlay_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
struct UOcclusionService_OnIgnoredActorEndPlay_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
