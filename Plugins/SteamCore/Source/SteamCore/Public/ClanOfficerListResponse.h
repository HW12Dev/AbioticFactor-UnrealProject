#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "ClanOfficerListResponse.generated.h"

USTRUCT(BlueprintType)
struct FClanOfficerListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDClan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Officers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    STEAMCORE_API FClanOfficerListResponse();
};

