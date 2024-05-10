#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "AbioticWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ABIOTICFACTOR_API UAbioticWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UAbioticWidget();

    UFUNCTION(BlueprintCallable)
    FEventReply ProcessKeybindOnKeyUp(const FKeyEvent& Key, bool& bHandled);
    
    UFUNCTION(BlueprintCallable)
    FEventReply ProcessKeybindOnKeyDown(const FKeyEvent& Key, bool& bHandled);
    
};

