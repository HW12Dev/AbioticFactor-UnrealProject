#pragma once
#include "CoreMinimal.h"
#include "GameServerChangeRequested.generated.h"

USTRUCT(BlueprintType)
struct FGameServerChangeRequested {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Server;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    STEAMCORE_API FGameServerChangeRequested();
};

