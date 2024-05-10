#include "KeybindSettingHandleFunctionLibrary.h"

UKeybindSettingHandleFunctionLibrary::UKeybindSettingHandleFunctionLibrary() {
}

FKeybindSettingRowHandle UKeybindSettingHandleFunctionLibrary::MakeLiteralKeybindSettingRowHandle(FKeybindSettingRowHandle RowHandle) {
    return FKeybindSettingRowHandle{};
}

FKeybindSettingRowHandle UKeybindSettingHandleFunctionLibrary::MakeKeybindSettingRowHandle(const FName RowName) {
    return FKeybindSettingRowHandle{};
}

void UKeybindSettingHandleFunctionLibrary::GetKeybindSettingRow(FKeybindSettingRowHandle RowHandle, FKeybindSetting& Data, ERowValid& ReturnPath) {
}

void UKeybindSettingHandleFunctionLibrary::GetAllKeybindSettingRowNames(TArray<FName>& OutRowNames) {
}

void UKeybindSettingHandleFunctionLibrary::GetAllKeybindSettingRowHandles(TArray<FKeybindSettingRowHandle>& OutRowHandles) {
}

bool UKeybindSettingHandleFunctionLibrary::Equal_KeybindSettingRowHandle(FKeybindSettingRowHandle A, FKeybindSettingRowHandle B) {
    return false;
}

bool UKeybindSettingHandleFunctionLibrary::DoesKeybindSettingRowExist(FName RowName) {
    return false;
}

FName UKeybindSettingHandleFunctionLibrary::BreakKeybindSettingRowHandle(const FKeybindSettingRowHandle RowHandle) {
    return NAME_None;
}


