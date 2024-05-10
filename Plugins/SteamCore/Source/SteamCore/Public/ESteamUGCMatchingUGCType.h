#pragma once
#include "CoreMinimal.h"
#include "ESteamUGCMatchingUGCType.generated.h"

UENUM(BlueprintType)
enum class ESteamUGCMatchingUGCType : uint8 {
    Items,
    Items_Mtx,
    Items_ReadyToUse,
    Collections,
    Artwork,
    Videos,
    Screenshots,
    AllGuides,
    WebGuides,
    IntegratedGuides,
    UsableInGame,
    ControllerBindings,
    GameManagedItems,
    All,
};

