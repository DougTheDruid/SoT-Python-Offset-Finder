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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C
// 0x00D0 (FullSize[0x01E8] - InheritedSize[0x0118])
class UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_CrewEnteredTunnelOfTheDamnedPortalProximity;        // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_BootyWillBeLost;                                    // 0x0168(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDisplayDuration;                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CrewInRadius;                                              // 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PromptOnCooldown;                                          // 0x01D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X07X[0x2];                                     // 0x01D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PromptDisplayCooldown;                                     // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ECYB[0x4];                                     // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTunnelsOfTheDamnedLootFilterDataAsset*      LootFilterDataAsset;                                       // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C");
		return ptr;
	}



	void On_Crew_Entered_Radius(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event);
	void ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
