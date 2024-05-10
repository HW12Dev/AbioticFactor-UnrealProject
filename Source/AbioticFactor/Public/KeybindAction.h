#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KeybindAction.generated.h"

class UAbioticWidget;

UCLASS(Abstract, Blueprintable)
class ABIOTICFACTOR_API UKeybindAction : public UObject {
    GENERATED_BODY()
public:
    UKeybindAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnKeyUp(UAbioticWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnKeyDown(UAbioticWidget* Widget);
    
};

