#include "WorldFlagHandleFunctionLibrary.h"

UWorldFlagHandleFunctionLibrary::UWorldFlagHandleFunctionLibrary() {
}

FWorldFlagRowHandle UWorldFlagHandleFunctionLibrary::MakeWorldFlagRowHandle(const FName RowName) {
    return FWorldFlagRowHandle{};
}

FWorldFlagRowHandle UWorldFlagHandleFunctionLibrary::MakeLiteralWorldFlagRowHandle(FWorldFlagRowHandle RowHandle) {
    return FWorldFlagRowHandle{};
}

void UWorldFlagHandleFunctionLibrary::GetWorldFlagRow(FWorldFlagRowHandle RowHandle, FWorldFlag& Data, ERowValid& ReturnPath) {
}

void UWorldFlagHandleFunctionLibrary::GetAllWorldFlagRowNames(TArray<FName>& OutRowNames) {
}

void UWorldFlagHandleFunctionLibrary::GetAllWorldFlagRowHandles(TArray<FWorldFlagRowHandle>& OutRowHandles) {
}

bool UWorldFlagHandleFunctionLibrary::Equal_WorldFlagRowHandle(FWorldFlagRowHandle A, FWorldFlagRowHandle B) {
    return false;
}

bool UWorldFlagHandleFunctionLibrary::DoesWorldFlagRowExist(FName RowName) {
    return false;
}

FName UWorldFlagHandleFunctionLibrary::BreakWorldFlagRowHandle(const FWorldFlagRowHandle RowHandle) {
    return NAME_None;
}


