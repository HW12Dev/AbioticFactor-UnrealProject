#pragma once
#include "CoreMinimal.h"
#include "ESteamItemState.generated.h"

UENUM(BlueprintType)
enum class ESteamItemState : uint8 {
    None,
    Subscribed,
    LegacyItem,
    Installed = 4,
    NeedsUpdate = 8,
    Downloading = 16,
    DownloadPending = 32,
};

