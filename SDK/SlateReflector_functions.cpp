// Name: SoT, Version: 2.3.0

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

void UWidgetReflectorNodeBase::AfterRead()
{
	UObject::AfterRead();

}

void UWidgetReflectorNodeBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULiveWidgetReflectorNode::AfterRead()
{
	UWidgetReflectorNodeBase::AfterRead();

}

void ULiveWidgetReflectorNode::BeforeDelete()
{
	UWidgetReflectorNodeBase::BeforeDelete();

}

void USnapshotWidgetReflectorNode::AfterRead()
{
	UWidgetReflectorNodeBase::AfterRead();

}

void USnapshotWidgetReflectorNode::BeforeDelete()
{
	UWidgetReflectorNodeBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
