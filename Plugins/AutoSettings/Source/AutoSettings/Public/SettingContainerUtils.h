#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SettingContainerUtils.generated.h"

class UAutoSettingWidget;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class AUTOSETTINGS_API USettingContainerUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USettingContainerUtils();

    UFUNCTION(BlueprintCallable)
    static void SaveChildSettings(UUserWidget* UserWidget, UWidget* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAutoSettingWidget*> GetChildSettings(UUserWidget* UserWidget, UWidget* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesAnyChildSettingHaveUnsavedChange(UUserWidget* UserWidget, UWidget* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesAnyChildSettingHaveUnappliedChange(UUserWidget* UserWidget, UWidget* Parent);
    
    UFUNCTION(BlueprintCallable)
    static void CancelChildSettings(UUserWidget* UserWidget, UWidget* Parent);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyChildSettings(UUserWidget* UserWidget, UWidget* Parent);
    
};

