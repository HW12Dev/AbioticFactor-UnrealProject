#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SteamCoreWebSubsystem.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USteamCoreWebSubsystem();

};

