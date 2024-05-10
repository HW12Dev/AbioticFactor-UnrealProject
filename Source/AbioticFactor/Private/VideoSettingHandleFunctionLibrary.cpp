#include "VideoSettingHandleFunctionLibrary.h"

UVideoSettingHandleFunctionLibrary::UVideoSettingHandleFunctionLibrary() {
}

FVideoSettingRowHandle UVideoSettingHandleFunctionLibrary::MakeVideoSettingRowHandle(const FName RowName) {
    return FVideoSettingRowHandle{};
}

FVideoSettingRowHandle UVideoSettingHandleFunctionLibrary::MakeLiteralVideoSettingRowHandle(FVideoSettingRowHandle RowHandle) {
    return FVideoSettingRowHandle{};
}

void UVideoSettingHandleFunctionLibrary::GetVideoSettingRow(FVideoSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath) {
}

void UVideoSettingHandleFunctionLibrary::GetAllVideoSettingRowNames(TArray<FName>& OutRowNames) {
}

void UVideoSettingHandleFunctionLibrary::GetAllVideoSettingRowHandles(TArray<FVideoSettingRowHandle>& OutRowHandles) {
}

bool UVideoSettingHandleFunctionLibrary::Equal_VideoSettingRowHandle(FVideoSettingRowHandle A, FVideoSettingRowHandle B) {
    return false;
}

bool UVideoSettingHandleFunctionLibrary::DoesVideoSettingRowExist(FName RowName) {
    return false;
}

FName UVideoSettingHandleFunctionLibrary::BreakVideoSettingRowHandle(const FVideoSettingRowHandle RowHandle) {
    return NAME_None;
}


