#pragma once
#include "CoreMinimal.h"
#include "SteamAppInstalled.generated.h"

USTRUCT(BlueprintType)
struct FSteamAppInstalled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCORE_API FSteamAppInstalled();
};

