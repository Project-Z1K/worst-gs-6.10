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

// WidgetBlueprintGeneratedClass ErrorCodeOverflowItem.ErrorCodeOverflowItem_C
// 0x0008 (0x0220 - 0x0218)
class UErrorCodeOverflowItem_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_332_333;                                        // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ErrorCodeOverflowItem.ErrorCodeOverflowItem_C");
		return ptr;
	}


	void SetErrorCodeDisplay(const struct FString& ErrorCode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
