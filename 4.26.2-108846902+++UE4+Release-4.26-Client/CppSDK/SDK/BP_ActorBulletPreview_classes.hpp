#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorBulletPreview

#include "Basic.hpp"

#include "SReBulletDataMain_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "EBulletShape_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActorBulletPreview.BP_ActorBulletPreview_C
// 0x0738 (0x09E0 - 0x02A8)
class ABP_ActorBulletPreview_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSReBulletDataMain                     Mn;                                                // 0x02B0(0x06F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         ___;                                               // 0x09A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         X___;                                              // 0x09AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ____0;                                             // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____1;                                             // 0x09B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                __;                                                // 0x09BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    __S;                                               // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   P___;                                              // 0x09D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Func___(class USkeletalMeshComponent* MeshComp);
	void b____(EBulletShape b_);
	void Func____(const struct FSReBulletDataMain& Param_Mn, class AActor* Param____);
	void OnTick();
	void Minus_MnO_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActorBulletPreview_C">();
	}
	static class ABP_ActorBulletPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActorBulletPreview_C>();
	}
};
static_assert(alignof(ABP_ActorBulletPreview_C) == 0x000008, "Wrong alignment on ABP_ActorBulletPreview_C");
static_assert(sizeof(ABP_ActorBulletPreview_C) == 0x0009E0, "Wrong size on ABP_ActorBulletPreview_C");
static_assert(offsetof(ABP_ActorBulletPreview_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_ActorBulletPreview_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, Mn) == 0x0002B0, "Member 'ABP_ActorBulletPreview_C::Mn' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, ___) == 0x0009A8, "Member 'ABP_ActorBulletPreview_C::___' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, X___) == 0x0009AC, "Member 'ABP_ActorBulletPreview_C::X___' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, ____0) == 0x0009B0, "Member 'ABP_ActorBulletPreview_C::____0' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, ____1) == 0x0009B8, "Member 'ABP_ActorBulletPreview_C::____1' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, __) == 0x0009BC, "Member 'ABP_ActorBulletPreview_C::__' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, __S) == 0x0009C8, "Member 'ABP_ActorBulletPreview_C::__S' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, P___) == 0x0009D0, "Member 'ABP_ActorBulletPreview_C::P___' has a wrong offset!");

}
