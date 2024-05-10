#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamInventoryResult.h"
#include "SteamInventoryResultReady.generated.h"

USTRUCT(BlueprintType)
struct FSteamInventoryResultReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamInventoryResult Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FSteamInventoryResultReady();
};

