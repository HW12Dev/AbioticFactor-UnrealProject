#pragma once
#include "CoreMinimal.h"
#include "SteamRemotePlaySessionDisconnected.generated.h"

USTRUCT(BlueprintType)
struct FSteamRemotePlaySessionDisconnected {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionID;
    
    STEAMCORE_API FSteamRemotePlaySessionDisconnected();
};

