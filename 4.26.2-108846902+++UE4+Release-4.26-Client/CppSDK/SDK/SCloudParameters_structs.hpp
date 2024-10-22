#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCloudParameters

#include "Basic.hpp"

#include "KuroCurve_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCloudParameters.SCloudParameters
// 0x00C8 (0x00C8 - 0x0000)
struct FSCloudParameters final
{
public:
	class UTexture*                               Mask_8_F15855E04FF4BB57CD47D4BD2E0389B4;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          YesUV1NoUV2_24_9EAB91FF46BBE03FC4916C8044566733;   // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UVTiling_27_CA2827D746C96BC6C5BD3BAF6F84F90D;      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloudAngle_11_A4A0E29A4273FD2FC96B80BF46207982;    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloudSpeed_66_BEAF97D341EED8F6BCA62993218B6EBF;    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CloudRotation_74_073D936140252C61167ABABF2EB420F3; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               NoiseMap_81_111842B746A717F706DAFE9282DB74E0;      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseSpeed_77_F8E4B503421091B3D69660ADDD820B7A;    // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseStrength_84_2085AC85465A4E4C896A7A8A944AE088; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseTilling_86_250028C642C8358B5366C7B001F1845B;  // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SDF__98_FF0615434C8BB1E4D024B1890722FDE0;          // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKuroCurveFloat                        SDFTime_101_C436D6E344106E77F486C29C910E4148;      // 0x0038(0x0090)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCloudParameters) == 0x000008, "Wrong alignment on FSCloudParameters");
static_assert(sizeof(FSCloudParameters) == 0x0000C8, "Wrong size on FSCloudParameters");
static_assert(offsetof(FSCloudParameters, Mask_8_F15855E04FF4BB57CD47D4BD2E0389B4) == 0x000000, "Member 'FSCloudParameters::Mask_8_F15855E04FF4BB57CD47D4BD2E0389B4' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, YesUV1NoUV2_24_9EAB91FF46BBE03FC4916C8044566733) == 0x000008, "Member 'FSCloudParameters::YesUV1NoUV2_24_9EAB91FF46BBE03FC4916C8044566733' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, UVTiling_27_CA2827D746C96BC6C5BD3BAF6F84F90D) == 0x00000C, "Member 'FSCloudParameters::UVTiling_27_CA2827D746C96BC6C5BD3BAF6F84F90D' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, CloudAngle_11_A4A0E29A4273FD2FC96B80BF46207982) == 0x000010, "Member 'FSCloudParameters::CloudAngle_11_A4A0E29A4273FD2FC96B80BF46207982' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, CloudSpeed_66_BEAF97D341EED8F6BCA62993218B6EBF) == 0x000014, "Member 'FSCloudParameters::CloudSpeed_66_BEAF97D341EED8F6BCA62993218B6EBF' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, CloudRotation_74_073D936140252C61167ABABF2EB420F3) == 0x000018, "Member 'FSCloudParameters::CloudRotation_74_073D936140252C61167ABABF2EB420F3' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, NoiseMap_81_111842B746A717F706DAFE9282DB74E0) == 0x000020, "Member 'FSCloudParameters::NoiseMap_81_111842B746A717F706DAFE9282DB74E0' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, NoiseSpeed_77_F8E4B503421091B3D69660ADDD820B7A) == 0x000028, "Member 'FSCloudParameters::NoiseSpeed_77_F8E4B503421091B3D69660ADDD820B7A' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, NoiseStrength_84_2085AC85465A4E4C896A7A8A944AE088) == 0x00002C, "Member 'FSCloudParameters::NoiseStrength_84_2085AC85465A4E4C896A7A8A944AE088' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, NoiseTilling_86_250028C642C8358B5366C7B001F1845B) == 0x000030, "Member 'FSCloudParameters::NoiseTilling_86_250028C642C8358B5366C7B001F1845B' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, SDF__98_FF0615434C8BB1E4D024B1890722FDE0) == 0x000034, "Member 'FSCloudParameters::SDF__98_FF0615434C8BB1E4D024B1890722FDE0' has a wrong offset!");
static_assert(offsetof(FSCloudParameters, SDFTime_101_C436D6E344106E77F486C29C910E4148) == 0x000038, "Member 'FSCloudParameters::SDFTime_101_C436D6E344106E77F486C29C910E4148' has a wrong offset!");

}

