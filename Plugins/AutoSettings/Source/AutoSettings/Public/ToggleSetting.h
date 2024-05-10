#pragma once
#include "CoreMinimal.h"
#include "AutoSettingWidget.h"
#include "ToggleSetting.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API UToggleSetting : public UAutoSettingWidget {
    GENERATED_BODY()
public:
    UToggleSetting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateToggleState(bool State);
    
    UFUNCTION(BlueprintCallable)
    void ToggleStateUpdated(bool State);
    
};

