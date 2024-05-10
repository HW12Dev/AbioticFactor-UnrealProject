#pragma once
#include "CoreMinimal.h"
#include "SelectSetting.h"
#include "Templates/SubclassOf.h"
#include "RadioSelectSetting.generated.h"

class URadioButton;
class URadioSelect;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API URadioSelectSetting : public USelectSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadioButton> RadioButtonClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadioSelect* RadioSelect;
    
public:
    URadioSelectSetting();

private:
    UFUNCTION(BlueprintCallable)
    void RadioSelectionChanged(const FString& Value);
    
};

