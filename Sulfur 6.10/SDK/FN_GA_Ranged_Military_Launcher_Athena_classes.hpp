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

// BlueprintGeneratedClass GA_Ranged_Military_Launcher_Athena.GA_Ranged_Military_Launcher_Athena_C
// 0x0000 (0x0930 - 0x0930)
class UGA_Ranged_Military_Launcher_Athena_C : public UGA_Ranged_GenericProjectileExplosive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_Military_Launcher_Athena.GA_Ranged_Military_Launcher_Athena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
