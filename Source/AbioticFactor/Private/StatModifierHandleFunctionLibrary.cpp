#include "StatModifierHandleFunctionLibrary.h"

UStatModifierHandleFunctionLibrary::UStatModifierHandleFunctionLibrary() {
}

FStatModifierRowHandle UStatModifierHandleFunctionLibrary::MakeStatModifierRowHandle(const FName RowName) {
    return FStatModifierRowHandle{};
}

FStatModifierRowHandle UStatModifierHandleFunctionLibrary::MakeLiteralStatModifierRowHandle(FStatModifierRowHandle RowHandle) {
    return FStatModifierRowHandle{};
}

void UStatModifierHandleFunctionLibrary::GetStatModifierRow(FStatModifierRowHandle RowHandle, FStatModifier& Data, ERowValid& ReturnPath) {
}

void UStatModifierHandleFunctionLibrary::GetAllStatModifierRowNames(TArray<FName>& OutRowNames) {
}

void UStatModifierHandleFunctionLibrary::GetAllStatModifierRowHandles(TArray<FStatModifierRowHandle>& OutRowHandles) {
}

bool UStatModifierHandleFunctionLibrary::Equal_StatModifierRowHandle(FStatModifierRowHandle A, FStatModifierRowHandle B) {
    return false;
}

bool UStatModifierHandleFunctionLibrary::DoesStatModifierRowExist(FName RowName) {
    return false;
}

FName UStatModifierHandleFunctionLibrary::BreakStatModifierRowHandle(const FStatModifierRowHandle RowHandle) {
    return NAME_None;
}


