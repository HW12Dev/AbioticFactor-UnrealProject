#pragma once
#include "CoreMinimal.h"
#include "ESteamTextFilteringContext.generated.h"

UENUM(BlueprintType)
enum class ESteamTextFilteringContext : uint8 {
    k_ETextFilteringContextUnknown,
    k_ETextFilteringContextGameContent,
    k_ETextFilteringContextChat,
    k_ETextFilteringContextName,
};

