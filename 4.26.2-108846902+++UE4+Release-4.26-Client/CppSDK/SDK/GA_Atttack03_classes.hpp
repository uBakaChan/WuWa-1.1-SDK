#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Atttack03

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Atttack03.GA_Atttack03_C
// 0x0008 (0x0538 - 0x0530)
class UGA_Atttack03_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Atttack03_C;                     // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Atttack03(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81EF7BD26E();
	void OnBlendOut_5D118C384AE61F1C80292E81EF7BD26E();
	void OnInterrupted_5D118C384AE61F1C80292E81EF7BD26E();
	void OnCancelled_5D118C384AE61F1C80292E81EF7BD26E();
	void OnTick_5D118C384AE61F1C80292E81EF7BD26E();
	void OnCompleted_5D118C384AE61F1C80292E81E1B956C8();
	void OnBlendOut_5D118C384AE61F1C80292E81E1B956C8();
	void OnInterrupted_5D118C384AE61F1C80292E81E1B956C8();
	void OnCancelled_5D118C384AE61F1C80292E81E1B956C8();
	void OnTick_5D118C384AE61F1C80292E81E1B956C8();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Atttack03_C">();
	}
	static class UGA_Atttack03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Atttack03_C>();
	}
};
static_assert(alignof(UGA_Atttack03_C) == 0x000008, "Wrong alignment on UGA_Atttack03_C");
static_assert(sizeof(UGA_Atttack03_C) == 0x000538, "Wrong size on UGA_Atttack03_C");
static_assert(offsetof(UGA_Atttack03_C, UberGraphFrame_GA_Atttack03_C) == 0x000530, "Member 'UGA_Atttack03_C::UberGraphFrame_GA_Atttack03_C' has a wrong offset!");

}
