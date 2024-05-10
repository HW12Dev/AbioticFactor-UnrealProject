#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "RequestPlayersForGameProgressCallback.generated.h"

USTRUCT(BlueprintType)
struct FRequestPlayersForGameProgressCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchID;
    
    STEAMCORE_API FRequestPlayersForGameProgressCallback();
};

