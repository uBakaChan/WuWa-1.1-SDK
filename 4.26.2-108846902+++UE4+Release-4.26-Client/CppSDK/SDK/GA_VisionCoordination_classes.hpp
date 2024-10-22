#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_VisionCoordination

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_VisionCoordination.GA_VisionCoordination_C
// 0x0020 (0x0550 - 0x0530)
class UGA_VisionCoordination_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_VisionCoordination_C;            // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                _____P_yH;                                         // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_VisionLocalVariables_C*             _aP_;                                              // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ____SID;                                           // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_VisionCoordination(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81C0F7E796();
	void OnBlendOut_5D118C384AE61F1C80292E81C0F7E796();
	void OnInterrupted_5D118C384AE61F1C80292E81C0F7E796();
	void OnCancelled_5D118C384AE61F1C80292E81C0F7E796();
	void OnTick_5D118C384AE61F1C80292E81C0F7E796();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_VisionCoordination_C">();
	}
	static class UGA_VisionCoordination_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_VisionCoordination_C>();
	}
};
static_assert(alignof(UGA_VisionCoordination_C) == 0x000008, "Wrong alignment on UGA_VisionCoordination_C");
static_assert(sizeof(UGA_VisionCoordination_C) == 0x000550, "Wrong size on UGA_VisionCoordination_C");
static_assert(offsetof(UGA_VisionCoordination_C, UberGraphFrame_GA_VisionCoordination_C) == 0x000530, "Member 'UGA_VisionCoordination_C::UberGraphFrame_GA_VisionCoordination_C' has a wrong offset!");
static_assert(offsetof(UGA_VisionCoordination_C, _____P_yH) == 0x000538, "Member 'UGA_VisionCoordination_C::_____P_yH' has a wrong offset!");
static_assert(offsetof(UGA_VisionCoordination_C, _aP_) == 0x000540, "Member 'UGA_VisionCoordination_C::_aP_' has a wrong offset!");
static_assert(offsetof(UGA_VisionCoordination_C, ____SID) == 0x000548, "Member 'UGA_VisionCoordination_C::____SID' has a wrong offset!");

}

