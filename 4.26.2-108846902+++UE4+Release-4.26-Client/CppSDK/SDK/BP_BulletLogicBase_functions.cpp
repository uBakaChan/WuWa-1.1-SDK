#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletLogicBase

#include "Basic.hpp"

#include "BP_BulletLogicBase_classes.hpp"
#include "BP_BulletLogicBase_parameters.hpp"


namespace SDK
{

// Function BP_BulletLogicBase.BP_BulletLogicBase_C.gL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               ___                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATsBaseCharacter_C*               ____0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBulletDataMain                 P9pn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          P9                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BulletLogicBase_C::GL(class ATsBaseCharacter_C* ___, class ATsBaseCharacter_C* ____0, const struct FSBulletDataMain& P9pn, class UObject* P9)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletLogicBase_C", "gL");

	Params::BP_BulletLogicBase_C_GL Parms{};

	Parms.___ = ___;
	Parms.____0 = ____0;
	Parms.P9pn = std::move(P9pn);
	Parms.P9 = P9;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BulletLogicBase.BP_BulletLogicBase_C.P9�8D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          P9                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EightD__                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BulletLogicBase_C::P9___8D(class UObject* P9, float EightD__)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletLogicBase_C", "P9�8D");

	Params::BP_BulletLogicBase_C_P9___8D Parms{};

	Parms.P9 = P9;
	Parms.EightD__ = EightD__;

	UObject::ProcessEvent(Func, &Parms);
}

}

