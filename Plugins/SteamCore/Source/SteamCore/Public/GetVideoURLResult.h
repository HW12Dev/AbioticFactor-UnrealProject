#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "GetVideoURLResult.generated.h"

USTRUCT(BlueprintType)
struct FGetVideoURLResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    STEAMCORE_API FGetVideoURLResult();
};

