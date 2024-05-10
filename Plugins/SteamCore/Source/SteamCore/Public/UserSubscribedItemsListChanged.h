#pragma once
#include "CoreMinimal.h"
#include "UserSubscribedItemsListChanged.generated.h"

USTRUCT(BlueprintType)
struct FUserSubscribedItemsListChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCORE_API FUserSubscribedItemsListChanged();
};

