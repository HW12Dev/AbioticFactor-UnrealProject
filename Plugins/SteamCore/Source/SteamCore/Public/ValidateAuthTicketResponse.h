#pragma once
#include "CoreMinimal.h"
#include "ESteamAuthSessionResponse.h"
#include "SteamID.h"
#include "ValidateAuthTicketResponse.generated.h"

USTRUCT(BlueprintType)
struct FValidateAuthTicketResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamAuthSessionResponse AuthSessionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID OwnerSteamID;
    
    STEAMCORE_API FValidateAuthTicketResponse();
};

