#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect
struct ABP_MediumMapTable_C_UpdateBlurEffect_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint
struct ABP_MediumMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript
struct ABP_MediumMapTable_C_UserConstructionScript_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay
struct ABP_MediumMapTable_C_ReceiveBeginPlay_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose
struct ABP_MediumMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate
struct ABP_MediumMapTable_C_OnMapActivate_Params
{
	bool                                               IsMapActive;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTextureRenderTarget2D*                      Texture;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove
struct ABP_MediumMapTable_C_OnMapMove_Params
{
	struct FVector2D                                   CentreLocation;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ZoomLevel;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable
struct ABP_MediumMapTable_C_ExecuteUbergraph_BP_MediumMapTable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
