#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_HuangShiGaoDi2_Attack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WuYinQu_HuangShiGaoDi2_Attack.GA_WuYinQu_HuangShiGaoDi2_Attack_C
// 0x0020 (0x0550 - 0x0530)
class UGA_WuYinQu_HuangShiGaoDi2_Attack_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_WuYinQu_HuangShiGaoDi2_Attack_C; // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ___p;                                              // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 P9_ID;                                             // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi2_Attack(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WuYinQu_HuangShiGaoDi2_Attack_C">();
	}
	static class UGA_WuYinQu_HuangShiGaoDi2_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WuYinQu_HuangShiGaoDi2_Attack_C>();
	}
};
static_assert(alignof(UGA_WuYinQu_HuangShiGaoDi2_Attack_C) == 0x000008, "Wrong alignment on UGA_WuYinQu_HuangShiGaoDi2_Attack_C");
static_assert(sizeof(UGA_WuYinQu_HuangShiGaoDi2_Attack_C) == 0x000550, "Wrong size on UGA_WuYinQu_HuangShiGaoDi2_Attack_C");
static_assert(offsetof(UGA_WuYinQu_HuangShiGaoDi2_Attack_C, UberGraphFrame_GA_WuYinQu_HuangShiGaoDi2_Attack_C) == 0x000530, "Member 'UGA_WuYinQu_HuangShiGaoDi2_Attack_C::UberGraphFrame_GA_WuYinQu_HuangShiGaoDi2_Attack_C' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_HuangShiGaoDi2_Attack_C, ___p) == 0x000538, "Member 'UGA_WuYinQu_HuangShiGaoDi2_Attack_C::___p' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_HuangShiGaoDi2_Attack_C, P9_ID) == 0x000540, "Member 'UGA_WuYinQu_HuangShiGaoDi2_Attack_C::P9_ID' has a wrong offset!");

}

