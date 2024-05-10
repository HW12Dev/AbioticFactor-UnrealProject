#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamServerConnectFailure.generated.h"

USTRUCT(BlueprintType)
struct FSteamServerConnectFailure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStillRetrying;
    
    STEAMCORE_API FSteamServerConnectFailure();
};

