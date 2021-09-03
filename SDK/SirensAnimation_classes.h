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
// Classes
//---------------------------------------------------------------------------

// Class SirensAnimation.SirenAnimationData
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class USirenAnimationData : public UAnimationData
{
public:
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0028(0x0048) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SirensAnimation.SirenAnimationInstance
// 0x0280 (FullSize[0x06C0] - InheritedSize[0x0440])
class USirenAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_WNHB[0x10];                                    // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class APawn>                        PawnOwner;                                                 // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FName                                       PropAttachmentSocket;                                      // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0460(0x0048) (BlueprintVisible, BlueprintReadOnly)
	struct FAthenaAnimationWeapon                      AttackAnimations;                                          // 0x04A8(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	float                                              ForwardSpeed;                                              // 0x0560(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BGHA[0xC];                                     // 0x0564(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TiltDirectionAngleDegrees;                                 // 0x0570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltAngleAlpha;                                            // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpinAngleDegrees;                                          // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations;           // 0x057C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpperBodyOverlayActive;                                    // 0x0580(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SwimmingLongways;                                          // 0x0581(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZCRA[0x6];                                     // 0x0582(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               AnimationsLoaded;                                          // 0x0588(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DJQL[0x3];                                     // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AimUpAlpha;                                                // 0x058C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimDownAlpha;                                              // 0x0590(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MNP4[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         FullBodyStateMachine;                                      // 0x0598(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x0670(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData_32DV[0x28];                                    // 0x0698(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
