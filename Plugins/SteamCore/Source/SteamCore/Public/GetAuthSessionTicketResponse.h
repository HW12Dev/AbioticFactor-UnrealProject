#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamTicketHandle.h"
#include "GetAuthSessionTicketResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetAuthSessionTicketResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamTicketHandle AuthTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FGetAuthSessionTicketResponse();
};

