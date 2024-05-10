#pragma once
#include "CoreMinimal.h"
#include "ESteamItemUpdateStatus.generated.h"

UENUM(BlueprintType)
enum class ESteamItemUpdateStatus : uint8 {
    Invalid,
    PreparingConfig,
    PreparingContent,
    UploadingContent,
    UploadingPreviewFile,
    CommittingChanges,
};

