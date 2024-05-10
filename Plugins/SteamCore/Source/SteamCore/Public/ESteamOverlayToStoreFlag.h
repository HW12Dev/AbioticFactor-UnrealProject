#pragma once
#include "CoreMinimal.h"
#include "ESteamOverlayToStoreFlag.generated.h"

UENUM(BlueprintType)
enum class ESteamOverlayToStoreFlag : uint8 {
    None,
    AddToCart,
    AddToCartAndShow,
};

