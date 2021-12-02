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
// Enums
//---------------------------------------------------------------------------

// Enum LostShipmentsClueVariants.EInteractableGrammaticalGender
enum class LostShipmentsClueVariants_EInteractableGrammaticalGender : uint8_t
{
	EInteractableGrammaticalGender__Default = 0,
	EInteractableGrammaticalGender__Masculine = 1,
	EInteractableGrammaticalGender__Feminine = 2,
	EInteractableGrammaticalGender__EInteractableGrammaticalGender_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LostShipmentsClueVariants.ClueDestinationToTextIndex
// 0x0028
struct FClueDestinationToTextIndex
{
	class UClass*                                      DestinationType;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UAbandonedNoteClueTextIndexAssetBase> RequiredIndexAsset;                                        // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VHQC[0x4];                                     // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct LostShipmentsClueVariants.ClueDestinationChoice
// 0x0010
struct FClueDestinationChoice
{
	class UClueDestinationDescriptor*                  Destination;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int16_t                                            ClueChoice;                                                // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XLIK[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct LostShipmentsClueVariants.GenderSpecificTextPairings
// 0x0070
struct FGenderSpecificTextPairings
{
	struct FText                                       MasculineClueDestinationDescription;                       // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_PSRJ[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       FeminineClueDestinationDescription;                        // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_FXGI[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct LostShipmentsClueVariants.TextEntryWithLayout
// 0x0058
struct FTextEntryWithLayout
{
	struct FText                                       TextEntry;                                                 // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_O2W7[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FTreasureMapWidgetText                      TextLayout;                                                // 0x0038(0x0020) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct LostShipmentsClueVariants.MapRadialIconData
// 0x0018
struct FMapRadialIconData
{
	struct FStringAssetReference                       AssetReference;                                            // 0x0000(0x0010) (ZeroConstructor)
	float                                              Rotation;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JGHZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct LostShipmentsClueVariants.ExistingNPCToPhasedNPC
// 0x0040
struct FExistingNPCToPhasedNPC
{
	TAssetPtr<class UClass>                            ExistingNPC;                                               // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V2AV[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TAssetPtr<class UClass>                            PhasedNPC;                                                 // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T8JW[0x4];                                     // 0x0020(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
