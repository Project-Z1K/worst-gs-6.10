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

// BlueprintGeneratedClass BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
// 0x0000 (0x03E0 - 0x03E0)
class ABP_Hook_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
