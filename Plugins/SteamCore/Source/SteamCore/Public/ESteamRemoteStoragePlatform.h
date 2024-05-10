#pragma once
#include "CoreMinimal.h"
#include "ESteamRemoteStoragePlatform.generated.h"

UENUM(BlueprintType)
enum class ESteamRemoteStoragePlatform : uint8 {
    None,
    Windows,
    OSX,
    PS3 = 4,
    Linux = 8,
    Reserved2 = 16,
    All = 254,
};

