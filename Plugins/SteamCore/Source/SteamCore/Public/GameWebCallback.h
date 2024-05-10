#pragma once
#include "CoreMinimal.h"
#include "GameWebCallback.generated.h"

USTRUCT(BlueprintType)
struct FGameWebCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    STEAMCORE_API FGameWebCallback();
};

