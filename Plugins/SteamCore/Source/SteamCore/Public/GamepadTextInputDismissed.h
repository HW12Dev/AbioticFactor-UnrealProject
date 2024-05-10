#pragma once
#include "CoreMinimal.h"
#include "GamepadTextInputDismissed.generated.h"

USTRUCT(BlueprintType)
struct FGamepadTextInputDismissed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubmittedText;
    
    STEAMCORE_API FGamepadTextInputDismissed();
};

