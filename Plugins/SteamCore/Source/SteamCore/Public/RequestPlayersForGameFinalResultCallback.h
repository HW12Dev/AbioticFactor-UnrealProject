#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "RequestPlayersForGameFinalResultCallback.generated.h"

USTRUCT(BlueprintType)
struct FRequestPlayersForGameFinalResultCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueGameID;
    
    STEAMCORE_API FRequestPlayersForGameFinalResultCallback();
};

