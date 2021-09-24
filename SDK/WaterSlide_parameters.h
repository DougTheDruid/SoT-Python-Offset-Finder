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

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
struct AWaterSlide_SetEntranceCollisionComponent_Params
{
	class UPrimitiveComponent*                         InEntranceCollisionComponent;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
struct AWaterSlide_ComponentBeginOverlapCallBack_Params
{
	class AActor*                                      InOtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InOtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InOtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InFromSweep;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  InSweepResult;                                             // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
