#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "ScreenshotHandle.h"
#include "ScreenshotReady.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenshotHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FScreenshotReady();
};

