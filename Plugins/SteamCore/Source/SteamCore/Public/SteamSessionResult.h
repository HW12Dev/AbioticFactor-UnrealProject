#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "SteamSessionSetting.h"
#include "SteamSessionResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamSessionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSessionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamSessionSetting> SessionSettings;
    
    STEAMCORE_API FSteamSessionResult();
};

