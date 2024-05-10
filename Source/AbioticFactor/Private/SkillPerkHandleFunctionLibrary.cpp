#include "SkillPerkHandleFunctionLibrary.h"

USkillPerkHandleFunctionLibrary::USkillPerkHandleFunctionLibrary() {
}

FSkillPerkRowHandle USkillPerkHandleFunctionLibrary::MakeSkillPerkRowHandle(const FName RowName) {
    return FSkillPerkRowHandle{};
}

FSkillPerkRowHandle USkillPerkHandleFunctionLibrary::MakeLiteralSkillPerkRowHandle(FSkillPerkRowHandle RowHandle) {
    return FSkillPerkRowHandle{};
}

void USkillPerkHandleFunctionLibrary::GetSkillPerkRow(FSkillPerkRowHandle RowHandle, FSkillPerk& Data, ERowValid& ReturnPath) {
}

void USkillPerkHandleFunctionLibrary::GetAllSkillPerkRowNames(TArray<FName>& OutRowNames) {
}

void USkillPerkHandleFunctionLibrary::GetAllSkillPerkRowHandles(TArray<FSkillPerkRowHandle>& OutRowHandles) {
}

bool USkillPerkHandleFunctionLibrary::Equal_SkillPerkRowHandle(FSkillPerkRowHandle A, FSkillPerkRowHandle B) {
    return false;
}

bool USkillPerkHandleFunctionLibrary::DoesSkillPerkRowExist(FName RowName) {
    return false;
}

FName USkillPerkHandleFunctionLibrary::BreakSkillPerkRowHandle(const FSkillPerkRowHandle RowHandle) {
    return NAME_None;
}


