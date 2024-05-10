#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GSClientApprove.generated.h"

USTRUCT(BlueprintType)
struct FGSClientApprove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID OwnerSteamID;
    
    STEAMCORE_API FGSClientApprove();
};

