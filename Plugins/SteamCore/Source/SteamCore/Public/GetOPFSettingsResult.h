#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "GetOPFSettingsResult.generated.h"

USTRUCT(BlueprintType)
struct FGetOPFSettingsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCORE_API FGetOPFSettingsResult();
};

