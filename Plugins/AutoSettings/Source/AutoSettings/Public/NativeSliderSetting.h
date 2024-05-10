#pragma once
#include "CoreMinimal.h"
#include "SliderSetting.h"
#include "NativeSliderSetting.generated.h"

class USlider;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API UNativeSliderSetting : public USliderSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseCaptureInProgress;
    
public:
    UNativeSliderSetting();

private:
    UFUNCTION(BlueprintCallable)
    void SliderValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SliderMouseCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    void SliderMouseCaptureBegin();
    
};

