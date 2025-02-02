#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MO1YouyidieMd00501_Attack03_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MO1YouyidieMd00501_Attack03_2.GA_MO1YouyidieMd00501_Attack03_2_C
// 0x0058 (0x0598 - 0x0540)
class UGA_MO1YouyidieMd00501_Attack03_2_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MO1YouyidieMd00501_Attack03_2_C; // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Radius;                                            // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C[0x4];                                      // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATsBaseCharacter_C*                     Temp_Element;                                      // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATsBaseCharacter_C*>             LineTarget;                                        // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int32>                                 LineTargetID;                                      // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          BeginTick;                                         // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589[0x3];                                      // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TargetMaxNum;                                      // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LivingNum;                                         // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RemoveEnd;                                         // 0x0594(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_MO1YouyidieMd00501_Attack03_2(int32 EntryPoint);
	void ___1_();
	void _dbuff____();
	void _______4();
	void _X_();
	void ______X_(class AActor* HitActor);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E813E883483();
	void OnBlendOut_5D118C384AE61F1C80292E813E883483();
	void OnInterrupted_5D118C384AE61F1C80292E813E883483();
	void OnCancelled_5D118C384AE61F1C80292E813E883483();
	void OnTick_5D118C384AE61F1C80292E813E883483();
	void EventReceived_18B59F5945020DB23C42FD88CF25AD93(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E814B182BE0();
	void OnBlendOut_5D118C384AE61F1C80292E814B182BE0();
	void OnInterrupted_5D118C384AE61F1C80292E814B182BE0();
	void OnCancelled_5D118C384AE61F1C80292E814B182BE0();
	void OnTick_5D118C384AE61F1C80292E814B182BE0();
	void OnCompleted_5D118C384AE61F1C80292E813560511A();
	void OnBlendOut_5D118C384AE61F1C80292E813560511A();
	void OnInterrupted_5D118C384AE61F1C80292E813560511A();
	void OnCancelled_5D118C384AE61F1C80292E813560511A();
	void OnTick_5D118C384AE61F1C80292E813560511A();
	void EventReceived_18B59F5945020DB23C42FD885985F906(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MO1YouyidieMd00501_Attack03_2_C">();
	}
	static class UGA_MO1YouyidieMd00501_Attack03_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MO1YouyidieMd00501_Attack03_2_C>();
	}
};
static_assert(alignof(UGA_MO1YouyidieMd00501_Attack03_2_C) == 0x000008, "Wrong alignment on UGA_MO1YouyidieMd00501_Attack03_2_C");
static_assert(sizeof(UGA_MO1YouyidieMd00501_Attack03_2_C) == 0x000598, "Wrong size on UGA_MO1YouyidieMd00501_Attack03_2_C");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, UberGraphFrame_GA_MO1YouyidieMd00501_Attack03_2_C) == 0x000540, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::UberGraphFrame_GA_MO1YouyidieMd00501_Attack03_2_C' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, Radius) == 0x000548, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::Radius' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, Object_Types) == 0x000550, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::Object_Types' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, Temp_Element) == 0x000560, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::Temp_Element' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, LineTarget) == 0x000568, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::LineTarget' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, LineTargetID) == 0x000578, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::LineTargetID' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, BeginTick) == 0x000588, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::BeginTick' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, TargetMaxNum) == 0x00058C, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::TargetMaxNum' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, LivingNum) == 0x000590, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::LivingNum' has a wrong offset!");
static_assert(offsetof(UGA_MO1YouyidieMd00501_Attack03_2_C, RemoveEnd) == 0x000594, "Member 'UGA_MO1YouyidieMd00501_Attack03_2_C::RemoveEnd' has a wrong offset!");

}

