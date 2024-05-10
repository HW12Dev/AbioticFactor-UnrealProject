#include "ControlSettingHandleFunctionLibrary.h"

UControlSettingHandleFunctionLibrary::UControlSettingHandleFunctionLibrary() {
}

FControlSettingRowHandle UControlSettingHandleFunctionLibrary::MakeLiteralControlSettingRowHandle(FControlSettingRowHandle RowHandle) {
    return FControlSettingRowHandle{};
}

FControlSettingRowHandle UControlSettingHandleFunctionLibrary::MakeControlSettingRowHandle(const FName RowName) {
    return FControlSettingRowHandle{};
}

void UControlSettingHandleFunctionLibrary::GetControlSettingRow(FControlSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath) {
}

void UControlSettingHandleFunctionLibrary::GetAllControlSettingRowNames(TArray<FName>& OutRowNames) {
}

void UControlSettingHandleFunctionLibrary::GetAllControlSettingRowHandles(TArray<FControlSettingRowHandle>& OutRowHandles) {
}

bool UControlSettingHandleFunctionLibrary::Equal_ControlSettingRowHandle(FControlSettingRowHandle A, FControlSettingRowHandle B) {
    return false;
}

bool UControlSettingHandleFunctionLibrary::DoesControlSettingRowExist(FName RowName) {
    return false;
}

FName UControlSettingHandleFunctionLibrary::BreakControlSettingRowHandle(const FControlSettingRowHandle RowHandle) {
    return NAME_None;
}


