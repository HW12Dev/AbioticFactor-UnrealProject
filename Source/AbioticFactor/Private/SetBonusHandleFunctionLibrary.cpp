#include "SetBonusHandleFunctionLibrary.h"

USetBonusHandleFunctionLibrary::USetBonusHandleFunctionLibrary() {
}

FSetBonusRowHandle USetBonusHandleFunctionLibrary::MakeSetBonusRowHandle(const FName RowName) {
    return FSetBonusRowHandle{};
}

FSetBonusRowHandle USetBonusHandleFunctionLibrary::MakeLiteralSetBonusRowHandle(FSetBonusRowHandle RowHandle) {
    return FSetBonusRowHandle{};
}

void USetBonusHandleFunctionLibrary::GetSetBonusRow(FSetBonusRowHandle RowHandle, FSetBonus& Data, ERowValid& ReturnPath) {
}

void USetBonusHandleFunctionLibrary::GetAllSetBonusRowNames(TArray<FName>& OutRowNames) {
}

void USetBonusHandleFunctionLibrary::GetAllSetBonusRowHandles(TArray<FSetBonusRowHandle>& OutRowHandles) {
}

bool USetBonusHandleFunctionLibrary::Equal_SetBonusRowHandle(FSetBonusRowHandle A, FSetBonusRowHandle B) {
    return false;
}

bool USetBonusHandleFunctionLibrary::DoesSetBonusRowExist(FName RowName) {
    return false;
}

FName USetBonusHandleFunctionLibrary::BreakSetBonusRowHandle(const FSetBonusRowHandle RowHandle) {
    return NAME_None;
}


