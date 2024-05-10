#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "CapturedInput.h"
#include "InputMapping.generated.h"

class UBindCaptureButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UInputMapping : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MappingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KeyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IconTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBindCaptureButton* BindCaptureButton;
    
public:
    UInputMapping();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMapping();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLabel();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChordCaptured(FCapturedInput CapturedInput);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindChord(FCapturedInput CapturedInput);
    
};

