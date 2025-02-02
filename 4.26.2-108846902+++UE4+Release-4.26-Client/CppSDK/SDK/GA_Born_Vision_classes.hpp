#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Born_Vision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Born_Vision.GA_Born_Vision_C
// 0x0018 (0x0548 - 0x0530)
class UGA_Born_Vision_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Born_Vision_C;                   // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 ____;                                              // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     ___;                                               // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Born_Vision(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81F2255DE9();
	void OnBlendOut_5D118C384AE61F1C80292E81F2255DE9();
	void OnInterrupted_5D118C384AE61F1C80292E81F2255DE9();
	void OnCancelled_5D118C384AE61F1C80292E81F2255DE9();
	void OnTick_5D118C384AE61F1C80292E81F2255DE9();
	void EventReceived_18B59F5945020DB23C42FD889881D7F7(const struct FGameplayEventData& Payload);
	void ___apn(int32 _aID, struct FSVisionData* _apn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Born_Vision_C">();
	}
	static class UGA_Born_Vision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Born_Vision_C>();
	}
};
static_assert(alignof(UGA_Born_Vision_C) == 0x000008, "Wrong alignment on UGA_Born_Vision_C");
static_assert(sizeof(UGA_Born_Vision_C) == 0x000548, "Wrong size on UGA_Born_Vision_C");
static_assert(offsetof(UGA_Born_Vision_C, UberGraphFrame_GA_Born_Vision_C) == 0x000530, "Member 'UGA_Born_Vision_C::UberGraphFrame_GA_Born_Vision_C' has a wrong offset!");
static_assert(offsetof(UGA_Born_Vision_C, ____) == 0x000538, "Member 'UGA_Born_Vision_C::____' has a wrong offset!");
static_assert(offsetof(UGA_Born_Vision_C, ___) == 0x000540, "Member 'UGA_Born_Vision_C::___' has a wrong offset!");

}

