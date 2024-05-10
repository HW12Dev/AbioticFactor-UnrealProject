#include "GameplaySettingHandleFunctionLibrary.h"

UGameplaySettingHandleFunctionLibrary::UGameplaySettingHandleFunctionLibrary() {
}

FGameplaySettingRowHandle UGameplaySettingHandleFunctionLibrary::MakeLiteralGameplaySettingRowHandle(FGameplaySettingRowHandle RowHandle) {
    return FGameplaySettingRowHandle{};
}

FGameplaySettingRowHandle UGameplaySettingHandleFunctionLibrary::MakeGameplaySettingRowHandle(const FName RowName) {
    return FGameplaySettingRowHandle{};
}

void UGameplaySettingHandleFunctionLibrary::GetGameplaySettingRow(FGameplaySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath) {
}

void UGameplaySettingHandleFunctionLibrary::GetAllGameplaySettingRowNames(TArray<FName>& OutRowNames) {
}

void UGameplaySettingHandleFunctionLibrary::GetAllGameplaySettingRowHandles(TArray<FGameplaySettingRowHandle>& OutRowHandles) {
}

bool UGameplaySettingHandleFunctionLibrary::Equal_GameplaySettingRowHandle(FGameplaySettingRowHandle A, FGameplaySettingRowHandle B) {
    return false;
}

bool UGameplaySettingHandleFunctionLibrary::DoesGameplaySettingRowExist(FName RowName) {
    return false;
}

FName UGameplaySettingHandleFunctionLibrary::BreakGameplaySettingRowHandle(const FGameplaySettingRowHandle RowHandle) {
    return NAME_None;
}


