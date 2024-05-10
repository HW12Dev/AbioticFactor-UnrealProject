#pragma once
#include "CoreMinimal.h"
#include "AutoSettingWidget.h"
#include "SliderSetting.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API USliderSetting : public UAutoSettingWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightValue;
    
    USliderSetting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSliderValue(float NormalizedValue, float RawValue);
    
    UFUNCTION(BlueprintCallable)
    void SliderValueUpdated(float NormalizedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSaveCurrentValue() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RawValueToNormalized(float RawValue) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSliderValueUpdated(float NormalizedValue, float RawValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float NormalizedValueToRaw(float NormalizedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ClampRawValue(float RawValue) const;
    
};

