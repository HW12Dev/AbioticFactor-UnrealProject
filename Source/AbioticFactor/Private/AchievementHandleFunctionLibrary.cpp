#include "AchievementHandleFunctionLibrary.h"

UAchievementHandleFunctionLibrary::UAchievementHandleFunctionLibrary() {
}

FAchievementRowHandle UAchievementHandleFunctionLibrary::MakeLiteralAchievementRowHandle(FAchievementRowHandle RowHandle) {
    return FAchievementRowHandle{};
}

FAchievementRowHandle UAchievementHandleFunctionLibrary::MakeAchievementRowHandle(const FName RowName) {
    return FAchievementRowHandle{};
}

void UAchievementHandleFunctionLibrary::GetAllAchievementRowNames(TArray<FName>& OutRowNames) {
}

void UAchievementHandleFunctionLibrary::GetAllAchievementRowHandles(TArray<FAchievementRowHandle>& OutRowHandles) {
}

void UAchievementHandleFunctionLibrary::GetAchievementRow(FAchievementRowHandle RowHandle, FAchievement& Data, ERowValid& ReturnPath) {
}

bool UAchievementHandleFunctionLibrary::Equal_AchievementRowHandle(FAchievementRowHandle A, FAchievementRowHandle B) {
    return false;
}

bool UAchievementHandleFunctionLibrary::DoesAchievementRowExist(FName RowName) {
    return false;
}

FName UAchievementHandleFunctionLibrary::BreakAchievementRowHandle(const FAchievementRowHandle RowHandle) {
    return NAME_None;
}


