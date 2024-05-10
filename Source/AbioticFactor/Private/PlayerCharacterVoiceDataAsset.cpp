#include "PlayerCharacterVoiceDataAsset.h"

UPlayerCharacterVoiceDataAsset::UPlayerCharacterVoiceDataAsset() {
    this->DisplayName = FText::FromString(TEXT("Player Voice"));
    this->DisplayDescription = FText::FromString(TEXT("A Player Voice"));
}

void UPlayerCharacterVoiceDataAsset::GetVoiceLinesFromType(EVoiceLineType VoiceLineType, TArray<TSoftObjectPtr<UDialogueWave>>& VoiceLines) {
}

void UPlayerCharacterVoiceDataAsset::GetRandomVoiceLineFromType(EVoiceLineType VoiceLineType, TSoftObjectPtr<UDialogueWave>& VoiceLine) {
}


