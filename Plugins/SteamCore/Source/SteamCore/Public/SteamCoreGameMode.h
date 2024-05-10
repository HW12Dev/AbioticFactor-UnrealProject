#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SteamCoreGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class STEAMCORE_API ASteamCoreGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ASteamCoreGameMode(const FObjectInitializer& ObjectInitializer);

};

