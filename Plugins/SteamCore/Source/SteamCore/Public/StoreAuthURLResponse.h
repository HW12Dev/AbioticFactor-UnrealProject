#pragma once
#include "CoreMinimal.h"
#include "StoreAuthURLResponse.generated.h"

USTRUCT(BlueprintType)
struct FStoreAuthURLResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    STEAMCORE_API FStoreAuthURLResponse();
};

