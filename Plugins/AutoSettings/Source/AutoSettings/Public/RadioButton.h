#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RadioSelectedSignatureDelegate.h"
#include "RadioButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API URadioButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadioSelectedSignature OnSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Selected;
    
public:
    URadioButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLabel(const FText& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void TriggerSelection();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValue(const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(FText InLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetValue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLabel() const;
    
};

