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

// BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C
// 0x0058 (FullSize[0x0608] - InheritedSize[0x05B0])
class ABP_Shipwright_C : public ANPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCargoRunParticipantComponent*               CargoRunParticipant;                                       // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNPCDialogComponent*                         NPCDialogComponent;                                        // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           SolidHits;                                                 // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FWwiseEmitter                               WwiseEmitter;                                              // 0x05D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 WwiseShipwrightHummingPlay;                                // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 WwiseShipwrightHummingStop;                                // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Shipwright(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
