#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamID.h"
#include "SubmitPlayerResultResultCallback.generated.h"

USTRUCT(BlueprintType)
struct FSubmitPlayerResultResultCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueGameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDPlayer;
    
    STEAMCORE_API FSubmitPlayerResultResultCallback();
};

