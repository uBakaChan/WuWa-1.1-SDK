#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_QiChiCun_RandomQTE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WuYinQu_QiChiCun_RandomQTE.GA_WuYinQu_QiChiCun_RandomQTE_C
// 0x0010 (0x0540 - 0x0530)
class UGA_WuYinQu_QiChiCun_RandomQTE_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_WuYinQu_QiChiCun_RandomQTE_C;    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ____;                                              // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____0;                                            // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_WuYinQu_QiChiCun_RandomQTE(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WuYinQu_QiChiCun_RandomQTE_C">();
	}
	static class UGA_WuYinQu_QiChiCun_RandomQTE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WuYinQu_QiChiCun_RandomQTE_C>();
	}
};
static_assert(alignof(UGA_WuYinQu_QiChiCun_RandomQTE_C) == 0x000008, "Wrong alignment on UGA_WuYinQu_QiChiCun_RandomQTE_C");
static_assert(sizeof(UGA_WuYinQu_QiChiCun_RandomQTE_C) == 0x000540, "Wrong size on UGA_WuYinQu_QiChiCun_RandomQTE_C");
static_assert(offsetof(UGA_WuYinQu_QiChiCun_RandomQTE_C, UberGraphFrame_GA_WuYinQu_QiChiCun_RandomQTE_C) == 0x000530, "Member 'UGA_WuYinQu_QiChiCun_RandomQTE_C::UberGraphFrame_GA_WuYinQu_QiChiCun_RandomQTE_C' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_QiChiCun_RandomQTE_C, ____) == 0x000538, "Member 'UGA_WuYinQu_QiChiCun_RandomQTE_C::____' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_QiChiCun_RandomQTE_C, _____0) == 0x00053C, "Member 'UGA_WuYinQu_QiChiCun_RandomQTE_C::_____0' has a wrong offset!");

}

