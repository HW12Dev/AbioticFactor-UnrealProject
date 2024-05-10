#pragma once
#include "CoreMinimal.h"
#include "ESteamCheckFileSignature.h"
#include "CheckFileSignature.generated.h"

USTRUCT(BlueprintType)
struct FCheckFileSignature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamCheckFileSignature CheckFileSignature;
    
    STEAMCORE_API FCheckFileSignature();
};

