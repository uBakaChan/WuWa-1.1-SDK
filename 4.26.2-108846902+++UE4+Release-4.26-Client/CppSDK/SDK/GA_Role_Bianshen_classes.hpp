#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Bianshen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SVisionData_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_Bianshen.GA_Role_Bianshen_C
// 0x0168 (0x0698 - 0x0530)
class UGA_Role_Bianshen_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_Bianshen_C;                 // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
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
	bool                                          ___z_;                                             // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GLzMinus__;                                        // 0x0661(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_662[0x2];                                      // 0x0662(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaterialDataID;                                    // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____0;                                            // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669[0x7];                                      // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                P_____1;                                           // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                P______;                                           // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ____Index;                                         // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_684[0x4];                                      // 0x0684(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                _a__P_;                                            // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                _a___P;                                            // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Role_Bianshen(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ___apn(int32 Param__aID, struct FSVisionData* Param__apn);
	void ______ID(int32 Param_____, class FName* Param______0);
	void ____Skill_ID(class FString* Skill_ID);
	void _r_____1P_(int32* Param_MaterialDataID);
	void _r______P_(int32* Param_MaterialDataID);
	void _______5();
	void ___aMn(class ACharacter* ___a, struct FTransform* NewParam);
	void _rs___();
	void __();
	void _______4(class UCharacterMovementComponent* Base, class UCharacterMovementComponent* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_Bianshen_C">();
	}
	static class UGA_Role_Bianshen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_Bianshen_C>();
	}
};
static_assert(alignof(UGA_Role_Bianshen_C) == 0x000008, "Wrong alignment on UGA_Role_Bianshen_C");
static_assert(sizeof(UGA_Role_Bianshen_C) == 0x000698, "Wrong size on UGA_Role_Bianshen_C");
static_assert(offsetof(UGA_Role_Bianshen_C, UberGraphFrame_GA_Role_Bianshen_C) == 0x000530, "Member 'UGA_Role_Bianshen_C::UberGraphFrame_GA_Role_Bianshen_C' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _r) == 0x000538, "Member 'UGA_Role_Bianshen_C::_r' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _a) == 0x000540, "Member 'UGA_Role_Bianshen_C::_a' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _apn) == 0x000548, "Member 'UGA_Role_Bianshen_C::_apn' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, AbilitySystemComponent) == 0x000638, "Member 'UGA_Role_Bianshen_C::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _aID) == 0x000640, "Member 'UGA_Role_Bianshen_C::_aID' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _aLevel) == 0x000644, "Member 'UGA_Role_Bianshen_C::_aLevel' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, ___SID) == 0x000648, "Member 'UGA_Role_Bianshen_C::___SID' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, ____) == 0x00064C, "Member 'UGA_Role_Bianshen_C::____' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _e_______) == 0x000650, "Member 'UGA_Role_Bianshen_C::_e_______' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _e________0) == 0x000658, "Member 'UGA_Role_Bianshen_C::_e________0' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, ___z_) == 0x000660, "Member 'UGA_Role_Bianshen_C::___z_' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, GLzMinus__) == 0x000661, "Member 'UGA_Role_Bianshen_C::GLzMinus__' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, MaterialDataID) == 0x000664, "Member 'UGA_Role_Bianshen_C::MaterialDataID' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _____0) == 0x000668, "Member 'UGA_Role_Bianshen_C::_____0' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, P_____1) == 0x000670, "Member 'UGA_Role_Bianshen_C::P_____1' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, P______) == 0x000678, "Member 'UGA_Role_Bianshen_C::P______' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, ____Index) == 0x000680, "Member 'UGA_Role_Bianshen_C::____Index' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _a__P_) == 0x000688, "Member 'UGA_Role_Bianshen_C::_a__P_' has a wrong offset!");
static_assert(offsetof(UGA_Role_Bianshen_C, _a___P) == 0x000690, "Member 'UGA_Role_Bianshen_C::_a___P' has a wrong offset!");

}
