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

// Function MapTable.MapTable_C.UpdateBlurEffect
struct AMapTable_C_UpdateBlurEffect_Params
{
};

// Function MapTable.MapTable_C.GetClosestInteractionPoint
struct AMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MapTable.MapTable_C.UserConstructionScript
struct AMapTable_C_UserConstructionScript_Params
{
};

// Function MapTable.MapTable_C.ReceiveBeginPlay
struct AMapTable_C_ReceiveBeginPlay_Params
{
};

// Function MapTable.MapTable_C.SetEffectActiveWhenClose
struct AMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function MapTable.MapTable_C.OnMapActivate
struct AMapTable_C_OnMapActivate_Params
{
	bool                                               IsMapActive;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTextureRenderTarget2D*                      Texture;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapTable.MapTable_C.OnMapMove
struct AMapTable_C_OnMapMove_Params
{
	struct FVector2D                                   CentreLocation;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ZoomLevel;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapTable.MapTable_C.ExecuteUbergraph_MapTable
struct AMapTable_C_ExecuteUbergraph_MapTable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
