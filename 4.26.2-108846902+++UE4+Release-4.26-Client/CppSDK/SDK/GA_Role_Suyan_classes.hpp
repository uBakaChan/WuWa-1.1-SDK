#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Suyan

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_Suyan.GA_Role_Suyan_C
// 0x0008 (0x0538 - 0x0530)
class UGA_Role_Suyan_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_Suyan_C;                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Role_Suyan(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_Suyan_C">();
	}
	static class UGA_Role_Suyan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_Suyan_C>();
	}
};
static_assert(alignof(UGA_Role_Suyan_C) == 0x000008, "Wrong alignment on UGA_Role_Suyan_C");
static_assert(sizeof(UGA_Role_Suyan_C) == 0x000538, "Wrong size on UGA_Role_Suyan_C");
static_assert(offsetof(UGA_Role_Suyan_C, UberGraphFrame_GA_Role_Suyan_C) == 0x000530, "Member 'UGA_Role_Suyan_C::UberGraphFrame_GA_Role_Suyan_C' has a wrong offset!");

}

