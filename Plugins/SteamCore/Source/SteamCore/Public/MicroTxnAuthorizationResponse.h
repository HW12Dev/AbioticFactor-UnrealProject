#pragma once
#include "CoreMinimal.h"
#include "MicroTxnAuthorizationResponse.generated.h"

USTRUCT(BlueprintType)
struct FMicroTxnAuthorizationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAuthorized;
    
    STEAMCORE_API FMicroTxnAuthorizationResponse();
};

