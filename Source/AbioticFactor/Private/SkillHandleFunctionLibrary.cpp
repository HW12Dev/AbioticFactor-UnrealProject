#include "SkillHandleFunctionLibrary.h"

USkillHandleFunctionLibrary::USkillHandleFunctionLibrary() {
}

FSkillRowHandle USkillHandleFunctionLibrary::MakeSkillRowHandle(const FName RowName) {
    return FSkillRowHandle{};
}

FSkillRowHandle USkillHandleFunctionLibrary::MakeLiteralSkillRowHandle(FSkillRowHandle RowHandle) {
    return FSkillRowHandle{};
}

void USkillHandleFunctionLibrary::GetSkillRow(FSkillRowHandle RowHandle, FSkillData& Data, ERowValid& ReturnPath) {
}

void USkillHandleFunctionLibrary::GetAllSkillRowNames(TArray<FName>& OutRowNames) {
}

void USkillHandleFunctionLibrary::GetAllSkillRowHandles(TArray<FSkillRowHandle>& OutRowHandles) {
}

bool USkillHandleFunctionLibrary::Equal_SkillRowHandle(FSkillRowHandle A, FSkillRowHandle B) {
    return false;
}

bool USkillHandleFunctionLibrary::DoesSkillRowExist(FName RowName) {
    return false;
}

FName USkillHandleFunctionLibrary::BreakSkillRowHandle(const FSkillRowHandle RowHandle) {
    return NAME_None;
}


