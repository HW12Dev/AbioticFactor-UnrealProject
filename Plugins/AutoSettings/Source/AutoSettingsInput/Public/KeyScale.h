#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyScale.generated.h"

USTRUCT(BlueprintType)
struct FKeyScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    AUTOSETTINGSINPUT_API FKeyScale();
};

