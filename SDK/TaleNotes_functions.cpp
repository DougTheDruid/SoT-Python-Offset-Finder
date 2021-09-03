// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TaleNotes.TaleNote.OnTextCanvasUpdate
// (Final, Native, Protected)
// Parameters:
// class UCanvas*                 InCanvas                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InWidth                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InHeight                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATaleNote::OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TaleNotes.TaleNote.OnTextCanvasUpdate");

	ATaleNote_OnTextCanvasUpdate_Params params;
	params.InCanvas = InCanvas;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ATaleNote::AfterRead()
{
	ASkeletalMeshWieldableItem::AfterRead();

	READ_PTR_FULL(Font, UFont);
	READ_PTR_FULL(RenderTarget, UMaybeCompressedCanvasRenderTarget2D);
	READ_PTR_FULL(NamedNotificationInputComponent, UNamedNotificationInputComponent);
	READ_PTR_FULL(UsableWieldableComponent, UUsableWieldableComponent);
	READ_PTR_FULL(InventoryItemComponent, UInventoryItemComponent);
}

void ATaleNote::BeforeDelete()
{
	ASkeletalMeshWieldableItem::BeforeDelete();

	DELE_PTR_FULL(Font);
	DELE_PTR_FULL(RenderTarget);
	DELE_PTR_FULL(NamedNotificationInputComponent);
	DELE_PTR_FULL(UsableWieldableComponent);
	DELE_PTR_FULL(InventoryItemComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
