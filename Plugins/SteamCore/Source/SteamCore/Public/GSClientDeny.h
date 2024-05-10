#pragma once
#include "CoreMinimal.h"
#include "ESteamDenyReason.h"
#include "SteamID.h"
#include "GSClientDeny.generated.h"

USTRUCT(BlueprintType)
struct FGSClientDeny {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamDenyReason DenyReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionalText;
    
    STEAMCORE_API FGSClientDeny();
};

