#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "CurrentValueUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "AutoSettingWidget.generated.h"

class USettingValueMask;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API UAutoSettingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USettingValueMask> ValueMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SettingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSandboxSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentValueUpdated OnCurrentValueUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUnappliedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUnsavedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatingSettingSelection;
    
public:
    UAutoSettingWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSelection(const FString& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void Save();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SandboxSettingsUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnsavedChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnappliedChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel(bool bResetToDefaultValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplySettingValue(const FString& Value, bool bSaveIfPossible);
    
public:
    UFUNCTION(BlueprintCallable)
    void Apply();
    
};

