#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SettingValueMask.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class AUTOSETTINGS_API USettingValueMask : public UObject {
    GENERATED_BODY()
public:
    USettingValueMask();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString RecombineValues(const FString& SettingValue, const FString& ConsoleValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString MaskValue(const FString& ConsoleValue) const;
    
};

