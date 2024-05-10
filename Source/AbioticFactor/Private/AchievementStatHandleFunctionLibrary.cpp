#include "AchievementStatHandleFunctionLibrary.h"

UAchievementStatHandleFunctionLibrary::UAchievementStatHandleFunctionLibrary() {
}

FAchievementStatRowHandle UAchievementStatHandleFunctionLibrary::MakeLiteralAchievementStatRowHandle(FAchievementStatRowHandle RowHandle) {
    return FAchievementStatRowHandle{};
}

FAchievementStatRowHandle UAchievementStatHandleFunctionLibrary::MakeAchievementStatRowHandle(const FName RowName) {
    return FAchievementStatRowHandle{};
}

void UAchievementStatHandleFunctionLibrary::GetAllAchievementStatRowNames(TArray<FName>& OutRowNames) {
}

void UAchievementStatHandleFunctionLibrary::GetAllAchievementStatRowHandles(TArray<FAchievementStatRowHandle>& OutRowHandles) {
}

void UAchievementStatHandleFunctionLibrary::GetAchievementStatRow(FAchievementStatRowHandle RowHandle, FAchievementStat& Data, ERowValid& ReturnPath) {
}

bool UAchievementStatHandleFunctionLibrary::Equal_AchievementStatRowHandle(FAchievementStatRowHandle A, FAchievementStatRowHandle B) {
    return false;
}

bool UAchievementStatHandleFunctionLibrary::DoesAchievementStatRowExist(FName RowName) {
    return false;
}

FName UAchievementStatHandleFunctionLibrary::BreakAchievementStatRowHandle(const FAchievementStatRowHandle RowHandle) {
    return NAME_None;
}


