#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrailGrassSensorComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TrailGrassSensorComponent.BP_TrailGrassSensorComponent_C
// 0x0080 (0x02B0 - 0x0230)
class UBP_TrailGrassSensorComponent_C final : public UKuroTrailSensorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                LastPosition;                                      // 0x0238(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentPosition;                                   // 0x0244(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PositionUpdateFirst;                               // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasRenderTarget2D*                  RT_Draw;                                           // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasRenderTarget2D*                  RT_Save;                                           // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasRenderTarget2D*                  RT_Use;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UKuroTrailDrawerComponent*>      CurDrawers;                                        // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstanceDynamic*               DMI_DrawMat;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MI_DrawMat;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_BlitMat;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MI_BlitMat;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              WorldSize;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DrawToRenderTarget(const struct FSTrailGrassDrawInfo& TrailGrassInfo, class UCanvas* Canvas);
	void Update();
	void UpdatePlayerPosition();
	void GetPlayerActor(class AActor** PlayerActor);
	void OnSensorBegin();
	void OnSensorEnd(const EEndPlayReason EndPlayReason);
	void OnSensorTick(float DeltaTime);
	void ExecuteUbergraph_BP_TrailGrassSensorComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TrailGrassSensorComponent_C">();
	}
	static class UBP_TrailGrassSensorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TrailGrassSensorComponent_C>();
	}
};
static_assert(alignof(UBP_TrailGrassSensorComponent_C) == 0x000010, "Wrong alignment on UBP_TrailGrassSensorComponent_C");
static_assert(sizeof(UBP_TrailGrassSensorComponent_C) == 0x0002B0, "Wrong size on UBP_TrailGrassSensorComponent_C");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, UberGraphFrame) == 0x000230, "Member 'UBP_TrailGrassSensorComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, LastPosition) == 0x000238, "Member 'UBP_TrailGrassSensorComponent_C::LastPosition' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, CurrentPosition) == 0x000244, "Member 'UBP_TrailGrassSensorComponent_C::CurrentPosition' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, PositionUpdateFirst) == 0x000250, "Member 'UBP_TrailGrassSensorComponent_C::PositionUpdateFirst' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, RT_Draw) == 0x000258, "Member 'UBP_TrailGrassSensorComponent_C::RT_Draw' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, RT_Save) == 0x000260, "Member 'UBP_TrailGrassSensorComponent_C::RT_Save' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, RT_Use) == 0x000268, "Member 'UBP_TrailGrassSensorComponent_C::RT_Use' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, Radius) == 0x000270, "Member 'UBP_TrailGrassSensorComponent_C::Radius' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, CurDrawers) == 0x000278, "Member 'UBP_TrailGrassSensorComponent_C::CurDrawers' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, DMI_DrawMat) == 0x000288, "Member 'UBP_TrailGrassSensorComponent_C::DMI_DrawMat' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, MI_DrawMat) == 0x000290, "Member 'UBP_TrailGrassSensorComponent_C::MI_DrawMat' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, DMI_BlitMat) == 0x000298, "Member 'UBP_TrailGrassSensorComponent_C::DMI_BlitMat' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, MI_BlitMat) == 0x0002A0, "Member 'UBP_TrailGrassSensorComponent_C::MI_BlitMat' has a wrong offset!");
static_assert(offsetof(UBP_TrailGrassSensorComponent_C, WorldSize) == 0x0002A8, "Member 'UBP_TrailGrassSensorComponent_C::WorldSize' has a wrong offset!");

}

