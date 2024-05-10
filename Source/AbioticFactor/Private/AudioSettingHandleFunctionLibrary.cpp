#include "AudioSettingHandleFunctionLibrary.h"

UAudioSettingHandleFunctionLibrary::UAudioSettingHandleFunctionLibrary() {
}

FAudioSettingRowHandle UAudioSettingHandleFunctionLibrary::MakeLiteralAudioSettingRowHandle(FAudioSettingRowHandle RowHandle) {
    return FAudioSettingRowHandle{};
}

FAudioSettingRowHandle UAudioSettingHandleFunctionLibrary::MakeAudioSettingRowHandle(const FName RowName) {
    return FAudioSettingRowHandle{};
}

void UAudioSettingHandleFunctionLibrary::GetAudioSettingRow(FAudioSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath) {
}

void UAudioSettingHandleFunctionLibrary::GetAllAudioSettingRowNames(TArray<FName>& OutRowNames) {
}

void UAudioSettingHandleFunctionLibrary::GetAllAudioSettingRowHandles(TArray<FAudioSettingRowHandle>& OutRowHandles) {
}

bool UAudioSettingHandleFunctionLibrary::Equal_AudioSettingRowHandle(FAudioSettingRowHandle A, FAudioSettingRowHandle B) {
    return false;
}

bool UAudioSettingHandleFunctionLibrary::DoesAudioSettingRowExist(FName RowName) {
    return false;
}

FName UAudioSettingHandleFunctionLibrary::BreakAudioSettingRowHandle(const FAudioSettingRowHandle RowHandle) {
    return NAME_None;
}


