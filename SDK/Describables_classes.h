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
// Classes
//---------------------------------------------------------------------------

// Class Describables.DescribableComponent
// 0x0060 (FullSize[0x0178] - InheritedSize[0x0118])
class UDescribableComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData_PC3T[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               TooltipActiveOnBeginPlay;                                  // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TK8U[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DescribableTooltipText;                                    // 0x0128(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_TUE9[0x20];                                    // 0x0121(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               TooltipActive;                                             // 0x0160(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_IJHO[0x17];                                    // 0x0161(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Describables.DescribableComponent");
		return ptr;
	}



	void SetTooltipActive(bool IsActive);
	void OnRep_TooltipActive();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
