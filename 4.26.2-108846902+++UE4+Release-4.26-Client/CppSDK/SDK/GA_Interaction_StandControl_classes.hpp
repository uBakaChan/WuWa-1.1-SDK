#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Interaction_StandControl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Interaction_StandControl.GA_Interaction_StandControl_C
// 0x0010 (0x0540 - 0x0530)
class UGA_Interaction_StandControl_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Interaction_StandControl_C;      // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 __i;                                               // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Interaction_StandControl(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E8166FD408C();
	void OnBlendOut_5D118C384AE61F1C80292E8166FD408C();
	void OnInterrupted_5D118C384AE61F1C80292E8166FD408C();
	void OnCancelled_5D118C384AE61F1C80292E8166FD408C();
	void OnTick_5D118C384AE61F1C80292E8166FD408C();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Interaction_StandControl_C">();
	}
	static class UGA_Interaction_StandControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Interaction_StandControl_C>();
	}
};
static_assert(alignof(UGA_Interaction_StandControl_C) == 0x000008, "Wrong alignment on UGA_Interaction_StandControl_C");
static_assert(sizeof(UGA_Interaction_StandControl_C) == 0x000540, "Wrong size on UGA_Interaction_StandControl_C");
static_assert(offsetof(UGA_Interaction_StandControl_C, UberGraphFrame_GA_Interaction_StandControl_C) == 0x000530, "Member 'UGA_Interaction_StandControl_C::UberGraphFrame_GA_Interaction_StandControl_C' has a wrong offset!");
static_assert(offsetof(UGA_Interaction_StandControl_C, __i) == 0x000538, "Member 'UGA_Interaction_StandControl_C::__i' has a wrong offset!");

}

