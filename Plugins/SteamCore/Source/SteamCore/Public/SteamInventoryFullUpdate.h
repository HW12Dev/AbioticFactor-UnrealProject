#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryResult.h"
#include "SteamInventoryFullUpdate.generated.h"

USTRUCT(BlueprintType)
struct FSteamInventoryFullUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamInventoryResult Handle;
    
    STEAMCORE_API FSteamInventoryFullUpdate();
};

