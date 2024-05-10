#pragma once
#include "CoreMinimal.h"
#include "SteamRemotePlaySessionConnected.generated.h"

USTRUCT(BlueprintType)
struct FSteamRemotePlaySessionConnected {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionID;
    
    STEAMCORE_API FSteamRemotePlaySessionConnected();
};

