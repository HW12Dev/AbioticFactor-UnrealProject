#pragma once
#include "CoreMinimal.h"
#include "NumberOfCurrentPlayers.generated.h"

USTRUCT(BlueprintType)
struct FNumberOfCurrentPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Players;
    
    STEAMCORE_API FNumberOfCurrentPlayers();
};

