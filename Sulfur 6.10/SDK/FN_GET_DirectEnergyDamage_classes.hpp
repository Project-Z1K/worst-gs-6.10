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

// BlueprintGeneratedClass GET_DirectEnergyDamage.GET_DirectEnergyDamage_C
// 0x0000 (0x05F0 - 0x05F0)
class UGET_DirectEnergyDamage_C : public UGET_DirectPhysicalDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GET_DirectEnergyDamage.GET_DirectEnergyDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
