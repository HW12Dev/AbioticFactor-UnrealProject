#include "SessionResultItem.h"

USessionResultItem::USessionResultItem() {
    this->Ping = 9999;
    this->bDedicated = false;
    this->bLocked = false;
    this->PlayerCount = 0;
    this->MaxPlayers = 0;
    this->ModifiedRuleset = 0;
}

TArray<USessionResultItem*> USessionResultItem::GetSessionResultEntries(const TArray<FBlueprintSessionResult>& Results) {
    return TArray<USessionResultItem*>();
}

TArray<USessionResultItem*> USessionResultItem::FilterSessionResultEntries(const TArray<USessionResultItem*>& Results, const FString& FilterString, EFilterState Dedicated, EFilterState Locked, EFilterState Empty, EModifiedRuleset Ruleset) {
    return TArray<USessionResultItem*>();
}


