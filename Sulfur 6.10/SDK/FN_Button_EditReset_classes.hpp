#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Button_EditReset.Button_EditReset_C
// 0x0000 (0x03E0 - 0x03E0)
class UButton_EditReset_C : public UCommonBacchusButton_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_EditReset.Button_EditReset_C");
		return ptr;
	}


	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
