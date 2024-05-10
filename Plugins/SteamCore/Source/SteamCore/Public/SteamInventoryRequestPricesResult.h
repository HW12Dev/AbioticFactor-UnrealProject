#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamInventoryRequestPricesResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamInventoryRequestPricesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Currency;
    
    STEAMCORE_API FSteamInventoryRequestPricesResult();
};

