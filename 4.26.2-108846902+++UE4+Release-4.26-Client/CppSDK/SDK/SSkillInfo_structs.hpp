#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSkillInfo

#include "Basic.hpp"

#include "SSkillCooldownInfo_structs.hpp"
#include "SSkillBehavior_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ESkillMode_structs.hpp"
#include "ESkillGenre_structs.hpp"
#include "ESkillLoadType_structs.hpp"
#include "SSkillTarget_structs.hpp"
#include "ESkillType_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ESkillOverrideType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSkillInfo.SSkillInfo
// 0x0148 (0x0148 - 0x0000)
struct FSSkillInfo final
{
public:
	class FName                                   SkillName_236_CC31932A4D72CB83AD07F49CAA66531D;    // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        SkillIcon_197_2BF3BB3144DFB00F4B135CA6A25894FD;    // 0x0010(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESkillMode                                    SkillMode_263_700294234859C1051A2CCABFD9291CBF;    // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillType                                    LimitCountMode_237_5062339C40E55400FCD3BDB940574865; // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSSkillBehavior>                SkillBehaviorGroup_271_092A9D7D4439AC3AB24993A6F3C3C7FD; // 0x0038(0x0010)(Edit, BlueprintVisible)
	struct FSoftClassPath                         SkillGA_258_DBD75290442DE8B7E7E1A8BA76125F7F;      // 0x0048(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   SkillTag_238_9E35A66145662BAC6D89D2A9CE0F4CB2;     // 0x0068(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSoftObjectPath>                Animations_206_AD61DB794C2F606B7B16D789BAFD52F0;   // 0x0078(0x0010)(Edit, BlueprintVisible)
	int32                                         InterruptLevel_239_E071C85A4A9B78F43079578DD4EF5BBE; // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSkillTarget                          SkillTarget_283_795C9ACB4377D1401D3CC3977C1FB322;  // 0x008C(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StrengthCost_241_8DDC6A4643C65E8CA4B5A48AA65C0657; // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSkillCooldownInfo                    CooldownConfig_243_CB1459A242DF34AE3F92FA9072DD2B39; // 0x009C(0x002C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WalkOffLedge_247_48F816A340444353040EA08425D3DF62; // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ToughRatio_248_505390BC44202CA0730CAEA4B2A9D438;   // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GroupId_256_755BC9804168DB1BC77213BE3371F0D9;      // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         MontagePaths_209_837F67CB4D4945ECB86D22971E247382; // 0x00D8(0x0010)(Edit, BlueprintVisible)
	ESkillLoadType                                SkillLoadType_273_989019264CF5EE5DD6F4EFAA44BB700D; // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int64>                                 SkillStartBuff_250_24A0EF3F4A3AA940A64D57AD87670B32; // 0x00F0(0x0010)(Edit, BlueprintVisible)
	TArray<int64>                                 SkillEndBuff_251_A5B793A745BC193DD976889B018E090E; // 0x0100(0x0010)(Edit, BlueprintVisible)
	ESkillGenre                                   SkillGenre_252_C61201B24724AD2CF4129EBE6978DD63;   // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFullBodySkill_257_87A2542343A253D2903D5396668A9A82; // 0x0111(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int64>                                 SkillBuff_253_04317C1041148C5E5CFED8B6B60BF7ED;    // 0x0118(0x0010)(Edit, BlueprintVisible)
	bool                                          AutonomouslyBySimulate_214_FE883CA049FE760F8726F88E8FFDC7CF; // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OverrideHit_215_ABBDBA0E47F33607DBF5B8B561ED43CA;  // 0x0129(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12A[0x2];                                      // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MoveControllerTime_219_4EFBCF714CDDCFEA57C75CBB68F35855; // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ImmuneFallDamageTime_254_30E9B0B44896C7E042215E9157EAD285; // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillOverrideType                            OverrideType_276_9E4DE49042E6EB8A684440B4F78E1CBF; // 0x0134(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSoftObjectPath>                ExportSpecialAnim_287_9181271C401FEB3D8A026C9ED3DA5752; // 0x0138(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSSkillInfo) == 0x000008, "Wrong alignment on FSSkillInfo");
static_assert(sizeof(FSSkillInfo) == 0x000148, "Wrong size on FSSkillInfo");
static_assert(offsetof(FSSkillInfo, SkillName_236_CC31932A4D72CB83AD07F49CAA66531D) == 0x000000, "Member 'FSSkillInfo::SkillName_236_CC31932A4D72CB83AD07F49CAA66531D' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillIcon_197_2BF3BB3144DFB00F4B135CA6A25894FD) == 0x000010, "Member 'FSSkillInfo::SkillIcon_197_2BF3BB3144DFB00F4B135CA6A25894FD' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillMode_263_700294234859C1051A2CCABFD9291CBF) == 0x000030, "Member 'FSSkillInfo::SkillMode_263_700294234859C1051A2CCABFD9291CBF' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, LimitCountMode_237_5062339C40E55400FCD3BDB940574865) == 0x000031, "Member 'FSSkillInfo::LimitCountMode_237_5062339C40E55400FCD3BDB940574865' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillBehaviorGroup_271_092A9D7D4439AC3AB24993A6F3C3C7FD) == 0x000038, "Member 'FSSkillInfo::SkillBehaviorGroup_271_092A9D7D4439AC3AB24993A6F3C3C7FD' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillGA_258_DBD75290442DE8B7E7E1A8BA76125F7F) == 0x000048, "Member 'FSSkillInfo::SkillGA_258_DBD75290442DE8B7E7E1A8BA76125F7F' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillTag_238_9E35A66145662BAC6D89D2A9CE0F4CB2) == 0x000068, "Member 'FSSkillInfo::SkillTag_238_9E35A66145662BAC6D89D2A9CE0F4CB2' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, Animations_206_AD61DB794C2F606B7B16D789BAFD52F0) == 0x000078, "Member 'FSSkillInfo::Animations_206_AD61DB794C2F606B7B16D789BAFD52F0' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, InterruptLevel_239_E071C85A4A9B78F43079578DD4EF5BBE) == 0x000088, "Member 'FSSkillInfo::InterruptLevel_239_E071C85A4A9B78F43079578DD4EF5BBE' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillTarget_283_795C9ACB4377D1401D3CC3977C1FB322) == 0x00008C, "Member 'FSSkillInfo::SkillTarget_283_795C9ACB4377D1401D3CC3977C1FB322' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, StrengthCost_241_8DDC6A4643C65E8CA4B5A48AA65C0657) == 0x000098, "Member 'FSSkillInfo::StrengthCost_241_8DDC6A4643C65E8CA4B5A48AA65C0657' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, CooldownConfig_243_CB1459A242DF34AE3F92FA9072DD2B39) == 0x00009C, "Member 'FSSkillInfo::CooldownConfig_243_CB1459A242DF34AE3F92FA9072DD2B39' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, WalkOffLedge_247_48F816A340444353040EA08425D3DF62) == 0x0000C8, "Member 'FSSkillInfo::WalkOffLedge_247_48F816A340444353040EA08425D3DF62' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, ToughRatio_248_505390BC44202CA0730CAEA4B2A9D438) == 0x0000CC, "Member 'FSSkillInfo::ToughRatio_248_505390BC44202CA0730CAEA4B2A9D438' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, GroupId_256_755BC9804168DB1BC77213BE3371F0D9) == 0x0000D0, "Member 'FSSkillInfo::GroupId_256_755BC9804168DB1BC77213BE3371F0D9' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, MontagePaths_209_837F67CB4D4945ECB86D22971E247382) == 0x0000D8, "Member 'FSSkillInfo::MontagePaths_209_837F67CB4D4945ECB86D22971E247382' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillLoadType_273_989019264CF5EE5DD6F4EFAA44BB700D) == 0x0000E8, "Member 'FSSkillInfo::SkillLoadType_273_989019264CF5EE5DD6F4EFAA44BB700D' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillStartBuff_250_24A0EF3F4A3AA940A64D57AD87670B32) == 0x0000F0, "Member 'FSSkillInfo::SkillStartBuff_250_24A0EF3F4A3AA940A64D57AD87670B32' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillEndBuff_251_A5B793A745BC193DD976889B018E090E) == 0x000100, "Member 'FSSkillInfo::SkillEndBuff_251_A5B793A745BC193DD976889B018E090E' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillGenre_252_C61201B24724AD2CF4129EBE6978DD63) == 0x000110, "Member 'FSSkillInfo::SkillGenre_252_C61201B24724AD2CF4129EBE6978DD63' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, IsFullBodySkill_257_87A2542343A253D2903D5396668A9A82) == 0x000111, "Member 'FSSkillInfo::IsFullBodySkill_257_87A2542343A253D2903D5396668A9A82' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, SkillBuff_253_04317C1041148C5E5CFED8B6B60BF7ED) == 0x000118, "Member 'FSSkillInfo::SkillBuff_253_04317C1041148C5E5CFED8B6B60BF7ED' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, AutonomouslyBySimulate_214_FE883CA049FE760F8726F88E8FFDC7CF) == 0x000128, "Member 'FSSkillInfo::AutonomouslyBySimulate_214_FE883CA049FE760F8726F88E8FFDC7CF' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, OverrideHit_215_ABBDBA0E47F33607DBF5B8B561ED43CA) == 0x000129, "Member 'FSSkillInfo::OverrideHit_215_ABBDBA0E47F33607DBF5B8B561ED43CA' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, MoveControllerTime_219_4EFBCF714CDDCFEA57C75CBB68F35855) == 0x00012C, "Member 'FSSkillInfo::MoveControllerTime_219_4EFBCF714CDDCFEA57C75CBB68F35855' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, ImmuneFallDamageTime_254_30E9B0B44896C7E042215E9157EAD285) == 0x000130, "Member 'FSSkillInfo::ImmuneFallDamageTime_254_30E9B0B44896C7E042215E9157EAD285' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, OverrideType_276_9E4DE49042E6EB8A684440B4F78E1CBF) == 0x000134, "Member 'FSSkillInfo::OverrideType_276_9E4DE49042E6EB8A684440B4F78E1CBF' has a wrong offset!");
static_assert(offsetof(FSSkillInfo, ExportSpecialAnim_287_9181271C401FEB3D8A026C9ED3DA5752) == 0x000138, "Member 'FSSkillInfo::ExportSpecialAnim_287_9181271C401FEB3D8A026C9ED3DA5752' has a wrong offset!");

}
