#pragma once
#include "CoreMinimal.h"
#include "UIKeybindActionRowHandle.h"
#include "KeybindActionArray.generated.h"

USTRUCT(BlueprintType)
struct FKeybindActionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIKeybindActionRowHandle> KeybindActions;
    
    ABIOTICFACTOR_API FKeybindActionArray();
};

