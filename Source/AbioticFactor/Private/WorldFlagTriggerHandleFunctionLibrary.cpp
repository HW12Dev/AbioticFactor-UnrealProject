#include "WorldFlagTriggerHandleFunctionLibrary.h"

UWorldFlagTriggerHandleFunctionLibrary::UWorldFlagTriggerHandleFunctionLibrary() {
}

FWorldFlagTriggerRowHandle UWorldFlagTriggerHandleFunctionLibrary::MakeWorldFlagTriggerRowHandle(const FName RowName) {
    return FWorldFlagTriggerRowHandle{};
}

FWorldFlagTriggerRowHandle UWorldFlagTriggerHandleFunctionLibrary::MakeLiteralWorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle RowHandle) {
    return FWorldFlagTriggerRowHandle{};
}

void UWorldFlagTriggerHandleFunctionLibrary::GetWorldFlagTriggerRow(FWorldFlagTriggerRowHandle RowHandle, FWorldFlagTrigger& Data, ERowValid& ReturnPath) {
}

void UWorldFlagTriggerHandleFunctionLibrary::GetAllWorldFlagTriggerRowNames(TArray<FName>& OutRowNames) {
}

void UWorldFlagTriggerHandleFunctionLibrary::GetAllWorldFlagTriggerRowHandles(TArray<FWorldFlagTriggerRowHandle>& OutRowHandles) {
}

bool UWorldFlagTriggerHandleFunctionLibrary::Equal_WorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle A, FWorldFlagTriggerRowHandle B) {
    return false;
}

bool UWorldFlagTriggerHandleFunctionLibrary::DoesWorldFlagTriggerRowExist(FName RowName) {
    return false;
}

FName UWorldFlagTriggerHandleFunctionLibrary::BreakWorldFlagTriggerRowHandle(const FWorldFlagTriggerRowHandle RowHandle) {
    return NAME_None;
}


