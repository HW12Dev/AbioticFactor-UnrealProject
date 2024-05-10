#pragma once
#include "CoreMinimal.h"
#include "ToggleSetting.h"
#include "CheckBoxSetting.generated.h"

class UCheckBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API UCheckBoxSetting : public UToggleSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* CheckBox;
    
public:
    UCheckBoxSetting();

private:
    UFUNCTION(BlueprintCallable)
    void CheckBoxStateChanged(bool IsChecked);
    
};

