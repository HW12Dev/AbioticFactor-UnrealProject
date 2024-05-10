#include "AccessibilitySettingHandleFunctionLibrary.h"

UAccessibilitySettingHandleFunctionLibrary::UAccessibilitySettingHandleFunctionLibrary() {
}

FAccessibilitySettingRowHandle UAccessibilitySettingHandleFunctionLibrary::MakeLiteralAccessibilitySettingRowHandle(FAccessibilitySettingRowHandle RowHandle) {
    return FAccessibilitySettingRowHandle{};
}

FAccessibilitySettingRowHandle UAccessibilitySettingHandleFunctionLibrary::MakeAccessibilitySettingRowHandle(const FName RowName) {
    return FAccessibilitySettingRowHandle{};
}

void UAccessibilitySettingHandleFunctionLibrary::GetAllAccessibilitySettingRowNames(TArray<FName>& OutRowNames) {
}

void UAccessibilitySettingHandleFunctionLibrary::GetAllAccessibilitySettingRowHandles(TArray<FAccessibilitySettingRowHandle>& OutRowHandles) {
}

void UAccessibilitySettingHandleFunctionLibrary::GetAccessibilitySettingRow(FAccessibilitySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath) {
}

bool UAccessibilitySettingHandleFunctionLibrary::Equal_AccessibilitySettingRowHandle(FAccessibilitySettingRowHandle A, FAccessibilitySettingRowHandle B) {
    return false;
}

bool UAccessibilitySettingHandleFunctionLibrary::DoesAccessibilitySettingRowExist(FName RowName) {
    return false;
}

FName UAccessibilitySettingHandleFunctionLibrary::BreakAccessibilitySettingRowHandle(const FAccessibilitySettingRowHandle RowHandle) {
    return NAME_None;
}


