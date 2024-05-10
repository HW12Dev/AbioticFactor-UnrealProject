#pragma once
#include "CoreMinimal.h"
#include "HostPingData.generated.h"

USTRUCT(BlueprintType)
struct FHostPingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostString;
    
    STEAMCORE_API FHostPingData();
};

