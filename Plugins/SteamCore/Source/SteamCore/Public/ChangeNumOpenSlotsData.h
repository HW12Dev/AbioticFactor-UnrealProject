#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "ChangeNumOpenSlotsData.generated.h"

USTRUCT(BlueprintType)
struct FChangeNumOpenSlotsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FChangeNumOpenSlotsData();
};

