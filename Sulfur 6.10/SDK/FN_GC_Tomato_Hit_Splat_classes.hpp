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

// BlueprintGeneratedClass GC_Tomato_Hit_Splat.GC_Tomato_Hit_Splat_C
// 0x0000 (0x01A8 - 0x01A8)
class UGC_Tomato_Hit_Splat_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Tomato_Hit_Splat.GC_Tomato_Hit_Splat_C");
		return ptr;
	}


	void OnBurst(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
