#pragma once
#include "CoreMinimal.h"
#include "AutoSettingWidget.h"
#include "SettingOption.h"
#include "Templates/SubclassOf.h"
#include "SelectSetting.generated.h"

class USettingOptionFactory;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API USelectSetting : public UAutoSettingWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USettingOptionFactory> OptionFactory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatingSettingOptions;
    
public:
    USelectSetting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOptions(const TArray<FSettingOption>& InOptions);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegenerateOptions();
    
};

