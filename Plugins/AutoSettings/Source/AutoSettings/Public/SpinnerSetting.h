#pragma once
#include "CoreMinimal.h"
#include "SelectSetting.h"
#include "SpinnerSetting.generated.h"

class USpinner;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API USpinnerSetting : public USelectSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpinner* Spinner;
    
public:
    USpinnerSetting();

private:
    UFUNCTION(BlueprintCallable)
    void SpinnerSelectionChanged(const FString& Value);
    
};

