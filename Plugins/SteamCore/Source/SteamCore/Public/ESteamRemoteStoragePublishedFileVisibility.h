#pragma once
#include "CoreMinimal.h"
#include "ESteamRemoteStoragePublishedFileVisibility.generated.h"

UENUM(BlueprintType)
enum class ESteamRemoteStoragePublishedFileVisibility : uint8 {
    Public,
    FriendsOnly,
    Private,
};

