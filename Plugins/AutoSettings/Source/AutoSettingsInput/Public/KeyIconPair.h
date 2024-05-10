#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyIconPair.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FKeyIconPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Icon;
    
    AUTOSETTINGSINPUT_API FKeyIconPair();
};

