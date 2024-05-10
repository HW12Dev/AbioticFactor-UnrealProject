#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SettingOption.h"
#include "SettingOptionFactory.generated.h"

UCLASS(Abstract, Blueprintable)
class AUTOSETTINGS_API USettingOptionFactory : public UObject {
    GENERATED_BODY()
public:
    USettingOptionFactory();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FSettingOption> ConstructOptions() const;
    
};

