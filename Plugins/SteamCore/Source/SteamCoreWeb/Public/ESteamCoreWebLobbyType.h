#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreWebLobbyType.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreWebLobbyType : uint8 {
    Private,
    FriendsOnly,
    TypePublic,
    TypeInvisible,
};

