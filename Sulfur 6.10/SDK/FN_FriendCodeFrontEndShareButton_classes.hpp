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

// WidgetBlueprintGeneratedClass FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C
// 0x0008 (0x0B58 - 0x0B50)
class UFriendCodeFrontEndShareButton_C : public UFriendCodeShareButtonBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B50(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C");
		return ptr;
	}


	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_FriendCodeFrontEndShareButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
