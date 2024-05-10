#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamInventoryStartPurchaseResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamInventoryStartPurchaseResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransactionId;
    
    STEAMCORE_API FSteamInventoryStartPurchaseResult();
};

