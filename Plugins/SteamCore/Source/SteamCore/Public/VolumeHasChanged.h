#pragma once
#include "CoreMinimal.h"
#include "VolumeHasChanged.generated.h"

USTRUCT(BlueprintType)
struct FVolumeHasChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    STEAMCORE_API FVolumeHasChanged();
};

