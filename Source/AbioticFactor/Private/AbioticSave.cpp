#include "AbioticSave.h"

UAbioticSave::UAbioticSave() {
    this->SaveVersion = 1;
}

bool UAbioticSave::ApplyVersionUpgrade(int32 OldVersion, int32 NewVersion, const FString& Identifier) {
    return false;
}



