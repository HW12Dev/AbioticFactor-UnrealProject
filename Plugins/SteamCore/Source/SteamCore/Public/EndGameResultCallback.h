#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "EndGameResultCallback.generated.h"

USTRUCT(BlueprintType)
struct FEndGameResultCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueGameID;
    
    STEAMCORE_API FEndGameResultCallback();
};

