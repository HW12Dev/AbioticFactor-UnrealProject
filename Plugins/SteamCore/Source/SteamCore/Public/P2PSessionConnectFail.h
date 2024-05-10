#pragma once
#include "CoreMinimal.h"
#include "ESteamP2PSessionError.h"
#include "SteamID.h"
#include "P2PSessionConnectFail.generated.h"

USTRUCT(BlueprintType)
struct FP2PSessionConnectFail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDRemote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamP2PSessionError P2PSessionError;
    
    STEAMCORE_API FP2PSessionConnectFail();
};

