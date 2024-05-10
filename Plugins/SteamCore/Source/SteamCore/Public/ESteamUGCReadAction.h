#pragma once
#include "CoreMinimal.h"
#include "ESteamUGCReadAction.generated.h"

UENUM(BlueprintType)
enum class ESteamUGCReadAction : uint8 {
    k_EUGCRead_ContinueReadingUntilFinished,
    k_EUGCRead_ContinueReading,
    k_EUGCRead_Close,
};

