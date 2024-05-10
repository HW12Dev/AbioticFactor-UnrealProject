#include "CompendiumEntryItem.h"

UCompendiumEntryItem::UCompendiumEntryItem() {
}

FText UCompendiumEntryItem::RedactText(const FText& SourceString, const FString& RedactSymbol) {
    return FText::GetEmpty();
}

TArray<UCompendiumEntryItem*> UCompendiumEntryItem::GetCompendiumEntries() {
    return TArray<UCompendiumEntryItem*>();
}


