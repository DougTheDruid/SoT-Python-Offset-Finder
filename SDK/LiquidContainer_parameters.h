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

// Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
struct ULiquidContainerInterface_SetLiquidLevel_Params
{
	float                                              Level;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
struct ULiquidContainerInterface_GetWantedLiquidLevel_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
struct ULiquidContainerInterface_GetMaxLiquidCollectionAmount_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
struct ULiquidContainerInterface_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
struct ULiquidContainerInterface_CollectLiquidAmount_Params
{
	float                                              DesiredAmount;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerComponent.SetLiquidType
struct ULiquidContainerComponent_SetLiquidType_Params
{
	TEnumAsByte<LiquidContainer_ELiquidType>           LiquidType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
struct ULiquidContainerComponent_SetLiquidLevel_Params
{
	float                                              Level;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
struct ULiquidContainerComponent_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
struct ULiquidContainerComponent_CollectLiquidMaterials_Params
{
	class UMeshComponent*                              MeshComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
