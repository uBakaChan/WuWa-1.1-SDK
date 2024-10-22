#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroProjectilePathTracer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KuroProjectilePathTracer.BP_KuroProjectilePathTracer_C
// 0x00B0 (0x0358 - 0x02A8)
class ABP_KuroProjectilePathTracer_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh;                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            DistanceRecordMesh;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DisplayDistancePerRecord;                          // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPlaceCount;                                     // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecordDeltaAngle;                                  // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationDelta;                                    // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationSpeed;                                    // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CachedPathPositions;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                CachedLastTraceDestination;                        // 0x0308(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedReturnValue;                                 // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CachedImpactPoint;                                 // 0x0318(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CachedImpactNormal;                                // 0x0324(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedEnable;                                      // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_331[0x3];                                      // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetDeltaAngle;                                  // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetSize;                                        // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetThreshold;                                   // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPD_KuroProjectileAsset_C*              KuroProjectileAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecordSize;                                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseTargetDecal;                                    // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      TargetDecalMat;                                    // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateDataAsset();
	void SetPredictProjectileInfo(bool ReturnValue, TArray<struct FVector>& OutPathPosition, const struct FVector& OutLastTraceDestination, const struct FHitResult& OutHit);
	void UpdateDisplay();
	void ClearCache();
	void SetVisible(bool IsVisible);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_KuroProjectilePathTracer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KuroProjectilePathTracer_C">();
	}
	static class ABP_KuroProjectilePathTracer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KuroProjectilePathTracer_C>();
	}
};
static_assert(alignof(ABP_KuroProjectilePathTracer_C) == 0x000008, "Wrong alignment on ABP_KuroProjectilePathTracer_C");
static_assert(sizeof(ABP_KuroProjectilePathTracer_C) == 0x000358, "Wrong size on ABP_KuroProjectilePathTracer_C");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_KuroProjectilePathTracer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, Decal) == 0x0002B0, "Member 'ABP_KuroProjectilePathTracer_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, HierarchicalInstancedStaticMesh) == 0x0002B8, "Member 'ABP_KuroProjectilePathTracer_C::HierarchicalInstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, Spline) == 0x0002C0, "Member 'ABP_KuroProjectilePathTracer_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_KuroProjectilePathTracer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, Visible) == 0x0002D0, "Member 'ABP_KuroProjectilePathTracer_C::Visible' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, DistanceRecordMesh) == 0x0002D8, "Member 'ABP_KuroProjectilePathTracer_C::DistanceRecordMesh' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, DisplayDistancePerRecord) == 0x0002E0, "Member 'ABP_KuroProjectilePathTracer_C::DisplayDistancePerRecord' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, MaxPlaceCount) == 0x0002E4, "Member 'ABP_KuroProjectilePathTracer_C::MaxPlaceCount' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, RecordDeltaAngle) == 0x0002E8, "Member 'ABP_KuroProjectilePathTracer_C::RecordDeltaAngle' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, AnimationDelta) == 0x0002EC, "Member 'ABP_KuroProjectilePathTracer_C::AnimationDelta' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, AnimationSpeed) == 0x0002F0, "Member 'ABP_KuroProjectilePathTracer_C::AnimationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, CachedPathPositions) == 0x0002F8, "Member 'ABP_KuroProjectilePathTracer_C::CachedPathPositions' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, CachedLastTraceDestination) == 0x000308, "Member 'ABP_KuroProjectilePathTracer_C::CachedLastTraceDestination' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, CachedReturnValue) == 0x000314, "Member 'ABP_KuroProjectilePathTracer_C::CachedReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, CachedImpactPoint) == 0x000318, "Member 'ABP_KuroProjectilePathTracer_C::CachedImpactPoint' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, CachedImpactNormal) == 0x000324, "Member 'ABP_KuroProjectilePathTracer_C::CachedImpactNormal' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, CachedEnable) == 0x000330, "Member 'ABP_KuroProjectilePathTracer_C::CachedEnable' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, TargetDeltaAngle) == 0x000334, "Member 'ABP_KuroProjectilePathTracer_C::TargetDeltaAngle' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, TargetSize) == 0x000338, "Member 'ABP_KuroProjectilePathTracer_C::TargetSize' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, TargetThreshold) == 0x00033C, "Member 'ABP_KuroProjectilePathTracer_C::TargetThreshold' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, KuroProjectileAsset) == 0x000340, "Member 'ABP_KuroProjectilePathTracer_C::KuroProjectileAsset' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, RecordSize) == 0x000348, "Member 'ABP_KuroProjectilePathTracer_C::RecordSize' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, UseTargetDecal) == 0x00034C, "Member 'ABP_KuroProjectilePathTracer_C::UseTargetDecal' has a wrong offset!");
static_assert(offsetof(ABP_KuroProjectilePathTracer_C, TargetDecalMat) == 0x000350, "Member 'ABP_KuroProjectilePathTracer_C::TargetDecalMat' has a wrong offset!");

}

