#pragma once
#include "CoreMinimal.h"
#include "GameOverlayActivated.generated.h"

USTRUCT(BlueprintType)
struct FGameOverlayActivated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    STEAMCORE_API FGameOverlayActivated();
};

