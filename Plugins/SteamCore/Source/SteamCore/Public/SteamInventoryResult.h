#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamInventoryResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    STEAMCORE_API FSteamInventoryResult();
};

