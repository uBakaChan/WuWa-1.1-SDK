#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Bianshen_Level_Youyidie

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SVisionData_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_Bianshen_Level_Youyidie.GA_Role_Bianshen_Level_Youyidie_C
// 0x0158 (0x0688 - 0x0530)
class UGA_Role_Bianshen_Level_Youyidie_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_Bianshen_Level_Youyidie_C;  // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     _r;                                                // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseVision_C*                       _a;                                                // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSVisionData                           _apn;                                              // 0x0548(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UBaseAbilitySystemComponent*            AbilitySystemComponent;                            // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _aID;                                              // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _aLevel;                                           // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___SID;                                            // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ____;                                              // 0x064C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D[0x3];                                      // 0x064D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    _e_______;                                         // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                 _e________0;                                       // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ZMinus____;                                        // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GLzMinus__;                                        // 0x0661(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_662[0x2];                                      // 0x0662(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaterialDataID;                                    // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____0;                                            // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669[0x7];                                      // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                P_____1;                                           // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                P______;                                           // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         ServerID;                                          // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Role_Bianshen_Level_Youyidie(int32 EntryPoint);
	void S____S(int32 _SID, class AActor* Entity);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81DEEC160B();
	void OnBlendOut_5D118C384AE61F1C80292E81DEEC160B();
	void OnInterrupted_5D118C384AE61F1C80292E81DEEC160B();
	void OnCancelled_5D118C384AE61F1C80292E81DEEC160B();
	void OnTick_5D118C384AE61F1C80292E81DEEC160B();
	void OnCompleted_5D118C384AE61F1C80292E81908403EF();
	void OnBlendOut_5D118C384AE61F1C80292E81908403EF();
	void OnInterrupted_5D118C384AE61F1C80292E81908403EF();
	void OnCancelled_5D118C384AE61F1C80292E81908403EF();
	void OnTick_5D118C384AE61F1C80292E81908403EF();
	void OnFinish_A56FA84F4FE577F6C95DA6813551A97C();
	void Removed_34F9BAE944891AC1C495D9AB9F1436CD(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A3C3F21C2A(const struct FGameplayTag& Tag);
	void ___apn(int32 Param__aID, struct FSVisionData* Param__apn);
	void ______ID(int32 Param_____, class FName* Param______0);
	void ____Skill_ID(class FName* Skill_ID);
	void _____a(class AActor* Entity, int32 _SID);
	void _r_____1P_(int32* Param_MaterialDataID);
	void _r______P_(int32* Param_MaterialDataID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_Bianshen_Level_Youyidie_C">();
	}
	static class UGA_Role_Bianshen_Level_Youyidie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_Bianshen_Level_Youyidie_C>();
	}
};
static_assert(alignof(UGA_Role_Bianshen_Level_Youyidie_C) == 0x000008, "Wrong alignment on UGA_Role_Bianshen_Level_Youyidie_C");
static_assert(sizeof(UGA_Role_Bianshen_Level_Youyidie_C) == 0x000688, "Wrong size on UGA_Role_Bianshen_Level_Youyidie_C");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, UberGraphFrame_GA_Role_Bianshen_Level_Youyidie_C) == 0x000530, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::UberGraphFrame_GA_Role_Bianshen_Level_Youyidie_C' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _r) == 0x000538, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_r' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _a) == 0x000540, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_a' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _apn) == 0x000548, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_apn' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, AbilitySystemComponent) == 0x000638, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _aID) == 0x000640, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_aID' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _aLevel) == 0x000644, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_aLevel' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, ___SID) == 0x000648, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::___SID' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, ____) == 0x00064C, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::____' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _e_______) == 0x000650, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_e_______' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _e________0) == 0x000658, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_e________0' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, ZMinus____) == 0x000660, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::ZMinus____' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, GLzMinus__) == 0x000661, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::GLzMinus__' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, MaterialDataID) == 0x000664, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::MaterialDataID' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, _____0) == 0x000668, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::_____0' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, P_____1) == 0x000670, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::P_____1' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, P______) == 0x000678, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::P______' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_Level_Youyidie_C, ServerID) == 0x000680, "Member 'UGA_Role_Bianshen_Level_Youyidie_C::ServerID' has a wrong offset!");

}

