#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SInteractionConfig

#include "Basic.hpp"

#include "EInteractionType_structs.hpp"
#include "EinteractionIconType_structs.hpp"
#include "SInteractionOption_structs.hpp"


namespace SDK
{

// UserDefinedStruct SInteractionConfig.SInteractionConfig
// 0x00D0 (0x00D0 - 0x0000)
struct FSInteractionConfig final
{
public:
	class FName                                   ID_4_F9D5FFCE46F084732D40B49A6F053687;             // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   _ID_5_3111FA634A367F5A70DB2CB2A658C436;            // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ______36_D34FAEBF47B7898E83B1568C585CDE24;         // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EInteractionType                              _____38_BD474D7141B0B292CEE92588A0EF2E58;          // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSInteractionOption>            ___y__22_DB990F374D01D0FE67F5A1B342DF1C32;         // 0x0020(0x0010)(Edit, BlueprintVisible)
	class FName                                   __SequenceNetwrokID_27_29037D1E46BC732D0B3D9EA288DE4047; // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UDataTable>              __SequenceNetwrok_30_E2599AD641680E23E4F7D08AC3C225B1; // 0x0040(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   __a__ID_41_5423E110401331C3592FCD87B650AD11;       // 0x0070(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____48_86DCB60F408A5E0AB4BAD9A2DE77121A;          // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ___45_874B9EC0499BA148D53476908C19B16D;            // 0x0080(0x0018)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>              _____66_AB597BB24BCC2666DCB35CAA23CA4B88;          // 0x0098(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EInteractionIconType                          _____56_5BD4272C4CDE347B3BF3F9B2F8C339F8;          // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ______y_62_0436215F4BFF973DA373549A94F80073;       // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSInteractionConfig) == 0x000008, "Wrong alignment on FSInteractionConfig");
static_assert(sizeof(FSInteractionConfig) == 0x0000D0, "Wrong size on FSInteractionConfig");
static_assert(offsetof(FSInteractionConfig, ID_4_F9D5FFCE46F084732D40B49A6F053687) == 0x000000, "Member 'FSInteractionConfig::ID_4_F9D5FFCE46F084732D40B49A6F053687' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, _ID_5_3111FA634A367F5A70DB2CB2A658C436) == 0x00000C, "Member 'FSInteractionConfig::_ID_5_3111FA634A367F5A70DB2CB2A658C436' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, ______36_D34FAEBF47B7898E83B1568C585CDE24) == 0x000018, "Member 'FSInteractionConfig::______36_D34FAEBF47B7898E83B1568C585CDE24' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, _____38_BD474D7141B0B292CEE92588A0EF2E58) == 0x000019, "Member 'FSInteractionConfig::_____38_BD474D7141B0B292CEE92588A0EF2E58' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, ___y__22_DB990F374D01D0FE67F5A1B342DF1C32) == 0x000020, "Member 'FSInteractionConfig::___y__22_DB990F374D01D0FE67F5A1B342DF1C32' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, __SequenceNetwrokID_27_29037D1E46BC732D0B3D9EA288DE4047) == 0x000030, "Member 'FSInteractionConfig::__SequenceNetwrokID_27_29037D1E46BC732D0B3D9EA288DE4047' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, __SequenceNetwrok_30_E2599AD641680E23E4F7D08AC3C225B1) == 0x000040, "Member 'FSInteractionConfig::__SequenceNetwrok_30_E2599AD641680E23E4F7D08AC3C225B1' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, __a__ID_41_5423E110401331C3592FCD87B650AD11) == 0x000070, "Member 'FSInteractionConfig::__a__ID_41_5423E110401331C3592FCD87B650AD11' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, _____48_86DCB60F408A5E0AB4BAD9A2DE77121A) == 0x00007C, "Member 'FSInteractionConfig::_____48_86DCB60F408A5E0AB4BAD9A2DE77121A' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, ___45_874B9EC0499BA148D53476908C19B16D) == 0x000080, "Member 'FSInteractionConfig::___45_874B9EC0499BA148D53476908C19B16D' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, _____66_AB597BB24BCC2666DCB35CAA23CA4B88) == 0x000098, "Member 'FSInteractionConfig::_____66_AB597BB24BCC2666DCB35CAA23CA4B88' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, _____56_5BD4272C4CDE347B3BF3F9B2F8C339F8) == 0x0000C8, "Member 'FSInteractionConfig::_____56_5BD4272C4CDE347B3BF3F9B2F8C339F8' has a wrong offset!");
static_assert(offsetof(FSInteractionConfig, ______y_62_0436215F4BFF973DA373549A94F80073) == 0x0000C9, "Member 'FSInteractionConfig::______y_62_0436215F4BFF973DA373549A94F80073' has a wrong offset!");

}
