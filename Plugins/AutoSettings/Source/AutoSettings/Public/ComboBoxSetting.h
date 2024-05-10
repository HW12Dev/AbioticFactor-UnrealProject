#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "SelectSetting.h"
#include "ComboBoxSetting.generated.h"

class UComboBoxString;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API UComboBoxSetting : public USelectSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox;
    
public:
    UComboBoxSetting();

private:
    UFUNCTION(BlueprintCallable)
    void ComboBoxSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

