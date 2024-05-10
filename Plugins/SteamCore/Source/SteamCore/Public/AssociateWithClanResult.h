#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "AssociateWithClanResult.generated.h"

USTRUCT(BlueprintType)
struct FAssociateWithClanResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FAssociateWithClanResult();
};

