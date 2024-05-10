#pragma once
#include "CoreMinimal.h"
#include "ESteamParentalFeature.generated.h"

UENUM(BlueprintType)
enum class ESteamParentalFeature : uint8 {
    Invalid,
    Store,
    Community,
    Profile,
    Friends,
    News,
    Trading,
    Settings,
    Console,
    Browser,
    ParentalSetup,
    Library,
    Test,
    Max,
};

