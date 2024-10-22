#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrailDrawComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TrailDrawComponent.BP_TrailDrawComponent_C
// 0x0030 (0x0250 - 0x0220)
class UBP_TrailDrawComponent_C final : public USceneComponent
{
public:
	uint8                                         Pad_218[0x8];                                      // 0x0218(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                              Position;                                          // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               Texture;                                           // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TrailsManager_C*                    Manager;                                           // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Depth;                                             // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetManager(class ABP_TrailsManager_C** Ret);
	void GetPlayerActor(class AActor** Ret);
	void NeedDrawing();
	void ExecuteUbergraph_BP_TrailDrawComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TrailDrawComponent_C">();
	}
	static class UBP_TrailDrawComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TrailDrawComponent_C>();
	}
};
static_assert(alignof(UBP_TrailDrawComponent_C) == 0x000010, "Wrong alignment on UBP_TrailDrawComponent_C");
static_assert(sizeof(UBP_TrailDrawComponent_C) == 0x000250, "Wrong size on UBP_TrailDrawComponent_C");
static_assert(offsetof(UBP_TrailDrawComponent_C, UberGraphFrame) == 0x000220, "Member 'UBP_TrailDrawComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TrailDrawComponent_C, Position) == 0x000228, "Member 'UBP_TrailDrawComponent_C::Position' has a wrong offset!");
static_assert(offsetof(UBP_TrailDrawComponent_C, Texture) == 0x000230, "Member 'UBP_TrailDrawComponent_C::Texture' has a wrong offset!");
static_assert(offsetof(UBP_TrailDrawComponent_C, Size) == 0x000238, "Member 'UBP_TrailDrawComponent_C::Size' has a wrong offset!");
static_assert(offsetof(UBP_TrailDrawComponent_C, Manager) == 0x000240, "Member 'UBP_TrailDrawComponent_C::Manager' has a wrong offset!");
static_assert(offsetof(UBP_TrailDrawComponent_C, Rotation) == 0x000248, "Member 'UBP_TrailDrawComponent_C::Rotation' has a wrong offset!");
static_assert(offsetof(UBP_TrailDrawComponent_C, Depth) == 0x00024C, "Member 'UBP_TrailDrawComponent_C::Depth' has a wrong offset!");

}

