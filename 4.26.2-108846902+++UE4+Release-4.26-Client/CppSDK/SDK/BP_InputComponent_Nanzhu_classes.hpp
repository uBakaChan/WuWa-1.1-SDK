#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InputComponent_Nanzhu

#include "Basic.hpp"

#include "BP_InputComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InputComponent_Nanzhu.BP_InputComponent_Nanzhu_C
// 0x0000 (0x0220 - 0x0220)
class UBP_InputComponent_Nanzhu_C final : public UBP_InputComponent_C
{
public:
	struct FSInputCommand Func______16(float Time);
	struct FSInputCommand Func______15(float Time);
	struct FSInputCommand __1___0(float Time);
	struct FSInputCommand Func______14(float Time);
	void _______8(float Time);
	void __1____(float Time);
	struct FSInputCommand ___w_6(float Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InputComponent_Nanzhu_C">();
	}
	static class UBP_InputComponent_Nanzhu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InputComponent_Nanzhu_C>();
	}
};
static_assert(alignof(UBP_InputComponent_Nanzhu_C) == 0x000008, "Wrong alignment on UBP_InputComponent_Nanzhu_C");
static_assert(sizeof(UBP_InputComponent_Nanzhu_C) == 0x000220, "Wrong size on UBP_InputComponent_Nanzhu_C");

}
