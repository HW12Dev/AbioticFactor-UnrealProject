#pragma once
#include "CoreMinimal.h"
#include "SteamAppUninstalled.generated.h"

USTRUCT(BlueprintType)
struct FSteamAppUninstalled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCORE_API FSteamAppUninstalled();
};

