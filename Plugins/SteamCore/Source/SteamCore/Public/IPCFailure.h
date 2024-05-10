#pragma once
#include "CoreMinimal.h"
#include "ESteamFailureType.h"
#include "IPCFailure.generated.h"

USTRUCT(BlueprintType)
struct FIPCFailure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamFailureType FailureType;
    
    STEAMCORE_API FIPCFailure();
};

