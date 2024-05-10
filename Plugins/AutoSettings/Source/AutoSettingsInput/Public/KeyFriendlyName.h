#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyFriendlyName.generated.h"

USTRUCT(BlueprintType)
struct FKeyFriendlyName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FriendlyName;
    
    AUTOSETTINGSINPUT_API FKeyFriendlyName();
};

