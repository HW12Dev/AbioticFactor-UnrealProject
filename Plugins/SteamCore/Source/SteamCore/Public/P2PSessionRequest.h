#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "P2PSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct FP2PSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDRemote;
    
    STEAMCORE_API FP2PSessionRequest();
};

