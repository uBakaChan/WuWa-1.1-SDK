#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Execution_wuguanzhefenshen

#include "Basic.hpp"

#include "ECaughtResultType_structs.hpp"
#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Execution_wuguanzhefenshen.GA_Execution_wuguanzhefenshen_C
// 0x0018 (0x0548 - 0x0530)
class UGA_Execution_wuguanzhefenshen_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Execution_wuguanzhefenshen_C;    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          _Minus__;                                          // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539[0x7];                                      // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     __Stari;                                           // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Execution_wuguanzhefenshen(int32 EntryPoint);
	void _____0(int32 RoleEntityID, int32 CaughtEntityID, const class FString& CaughtID, ECaughtResultType Result);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnFinish_D98F2A964A895797DB4BD2A22788A1C5();
	void OnCompleted_5D118C384AE61F1C80292E81133AB739();
	void OnBlendOut_5D118C384AE61F1C80292E81133AB739();
	void OnInterrupted_5D118C384AE61F1C80292E81133AB739();
	void OnCancelled_5D118C384AE61F1C80292E81133AB739();
	void OnTick_5D118C384AE61F1C80292E81133AB739();
	void OnCompleted_5D118C384AE61F1C80292E81571C5E57();
	void OnBlendOut_5D118C384AE61F1C80292E81571C5E57();
	void OnInterrupted_5D118C384AE61F1C80292E81571C5E57();
	void OnCancelled_5D118C384AE61F1C80292E81571C5E57();
	void OnTick_5D118C384AE61F1C80292E81571C5E57();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Execution_wuguanzhefenshen_C">();
	}
	static class UGA_Execution_wuguanzhefenshen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Execution_wuguanzhefenshen_C>();
	}
};
static_assert(alignof(UGA_Execution_wuguanzhefenshen_C) == 0x000008, "Wrong alignment on UGA_Execution_wuguanzhefenshen_C");
static_assert(sizeof(UGA_Execution_wuguanzhefenshen_C) == 0x000548, "Wrong size on UGA_Execution_wuguanzhefenshen_C");
static_assert(offsetof(UGA_Execution_wuguanzhefenshen_C, UberGraphFrame_GA_Execution_wuguanzhefenshen_C) == 0x000530, "Member 'UGA_Execution_wuguanzhefenshen_C::UberGraphFrame_GA_Execution_wuguanzhefenshen_C' has a wrong offset!");
static_assert(offsetof(UGA_Execution_wuguanzhefenshen_C, _Minus__) == 0x000538, "Member 'UGA_Execution_wuguanzhefenshen_C::_Minus__' has a wrong offset!");
static_assert(offsetof(UGA_Execution_wuguanzhefenshen_C, __Stari) == 0x000540, "Member 'UGA_Execution_wuguanzhefenshen_C::__Stari' has a wrong offset!");

}
