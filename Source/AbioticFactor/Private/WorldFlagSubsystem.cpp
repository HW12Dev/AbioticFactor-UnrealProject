#include "WorldFlagSubsystem.h"

UWorldFlagSubsystem::UWorldFlagSubsystem() {
}

void UWorldFlagSubsystem::SetWorldFlag(FWorldFlagRowHandle WorldFlag, bool bState, UObject* Context) {
}

void UWorldFlagSubsystem::LoadWorldFlags(TArray<FName> FlagArray, bool bForce) {
}

bool UWorldFlagSubsystem::HasWorldFlagsLoaded() const {
    return false;
}

bool UWorldFlagSubsystem::HasWorldFlag(const UObject* WorldContextObject, FWorldFlagRowHandle WorldFlag) {
    return false;
}

bool UWorldFlagSubsystem::GetWorldFlags(TArray<FName>& FlagArray) {
    return false;
}

bool UWorldFlagSubsystem::FindCurrentQuest(FQuestRowHandle& QuestRowHandle) {
    return false;
}


