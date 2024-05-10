#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "EncryptedAppTicketResponse.generated.h"

USTRUCT(BlueprintType)
struct FEncryptedAppTicketResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FEncryptedAppTicketResponse();
};

