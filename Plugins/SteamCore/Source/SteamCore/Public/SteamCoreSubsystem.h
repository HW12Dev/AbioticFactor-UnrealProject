#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SteamCoreSubsystem.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USteamCoreSubsystem();

};

