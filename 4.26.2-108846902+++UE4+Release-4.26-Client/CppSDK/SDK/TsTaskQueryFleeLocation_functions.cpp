#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskQueryFleeLocation

#include "Basic.hpp"

#include "TsTaskQueryFleeLocation_classes.hpp"
#include "TsTaskQueryFleeLocation_parameters.hpp"


namespace SDK
{

// Function TsTaskQueryFleeLocation.TsTaskQueryFleeLocation_C.ExecuteUbergraph_TsTaskQueryFleeLocation
// (Final, Native, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskQueryFleeLocation_C::ExecuteUbergraph_TsTaskQueryFleeLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskQueryFleeLocation_C", "ExecuteUbergraph_TsTaskQueryFleeLocation");

	Params::TsTaskQueryFleeLocation_C_ExecuteUbergraph_TsTaskQueryFleeLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsTaskQueryFleeLocation.TsTaskQueryFleeLocation_C.ReceiveExecuteAI
// (Native, Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskQueryFleeLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskQueryFleeLocation_C", "ReceiveExecuteAI");

	Params::TsTaskQueryFleeLocation_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
