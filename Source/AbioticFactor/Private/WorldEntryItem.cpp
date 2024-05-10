#include "WorldEntryItem.h"

UWorldEntryItem::UWorldEntryItem() {
    this->MetaDataSave = NULL;
}

void UWorldEntryItem::ValidateFilesForCorruption() {
}

bool UWorldEntryItem::PerformVersionUpgrade() {
    return false;
}

TArray<UWorldEntryItem*> UWorldEntryItem::GetWorldEntries() {
    return TArray<UWorldEntryItem*>();
}

ESaveIntegrityState UWorldEntryItem::GetSaveIntegrityState() {
    return ESaveIntegrityState::Playable;
}

UAbioticSave* UWorldEntryItem::GetMetaDataSave() {
    return NULL;
}


