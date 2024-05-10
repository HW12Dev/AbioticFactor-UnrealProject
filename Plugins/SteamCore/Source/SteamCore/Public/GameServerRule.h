#pragma once
#include "CoreMinimal.h"
#include "GameServerRule.generated.h"

USTRUCT(BlueprintType)
struct STEAMCORE_API FGameServerRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FGameServerRule();
};

