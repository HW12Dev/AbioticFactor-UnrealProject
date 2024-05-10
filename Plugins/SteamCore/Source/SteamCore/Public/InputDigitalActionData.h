#pragma once
#include "CoreMinimal.h"
#include "InputDigitalActionData.generated.h"

USTRUCT(BlueprintType)
struct FInputDigitalActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    STEAMCORE_API FInputDigitalActionData();
};

