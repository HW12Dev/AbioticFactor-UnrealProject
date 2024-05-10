#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamServersDisconnected.generated.h"

USTRUCT(BlueprintType)
struct FSteamServersDisconnected {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FSteamServersDisconnected();
};

