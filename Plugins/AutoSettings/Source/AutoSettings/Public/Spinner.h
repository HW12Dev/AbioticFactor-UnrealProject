#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingOption.h"
#include "SpinnerSelectionChangedDelegate.h"
#include "Spinner.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API USpinner : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowWrapping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinnerSelectionChanged SelectionChangedEvent;
    
    USpinner();

    UFUNCTION(BlueprintCallable)
    void SelectValue(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SelectIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Previous();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectionChanged(FSettingOption SelectedOption);
    
    UFUNCTION(BlueprintCallable)
    void Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidPrevious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSettingOption GetCurrentOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex() const;
    
};

