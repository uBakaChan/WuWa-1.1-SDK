#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_Ecologic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_Ecologic.GA_Common_Ecologic_C
// 0x0018 (0x0558 - 0x0540)
class UGA_Common_Ecologic_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Common_Ecologic_C;               // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   SM6_;                                              // 0x0548(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Common_Ecologic(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void L___();
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81DD853B84();
	void OnBlendOut_5D118C384AE61F1C80292E81DD853B84();
	void OnInterrupted_5D118C384AE61F1C80292E81DD853B84();
	void OnCancelled_5D118C384AE61F1C80292E81DD853B84();
	void OnTick_5D118C384AE61F1C80292E81DD853B84();
	void EventReceived_18B59F5945020DB23C42FD8842737222(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD8845078D5D(const struct FGameplayEventData& Payload);
	void _K_e__(bool* ___);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_Ecologic_C">();
	}
	static class UGA_Common_Ecologic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_Ecologic_C>();
	}
};
static_assert(alignof(UGA_Common_Ecologic_C) == 0x000008, "Wrong alignment on UGA_Common_Ecologic_C");
static_assert(sizeof(UGA_Common_Ecologic_C) == 0x000558, "Wrong size on UGA_Common_Ecologic_C");
static_assert(offsetof(UGA_Common_Ecologic_C, UberGraphFrame_GA_Common_Ecologic_C) == 0x000540, "Member 'UGA_Common_Ecologic_C::UberGraphFrame_GA_Common_Ecologic_C' has a wrong offset!");
static_assert(offsetof(UGA_Common_Ecologic_C, SM6_) == 0x000548, "Member 'UGA_Common_Ecologic_C::SM6_' has a wrong offset!");

}

