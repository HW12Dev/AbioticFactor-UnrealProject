#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "KeyLabel.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UKeyLabel : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeyInvalidText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IconTags;
    
    UKeyLabel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKeyLabel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGlobalKeyIconTagsModified();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESlateVisibility GetIconVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FSlateBrush GetIconBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESlateVisibility GetDisplayNameVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
};

