#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "CapturedInput.h"
#include "Templates/SubclassOf.h"
#include "BindCaptureButton.generated.h"

class UBindCapturePrompt;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UBindCaptureButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KeyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBindCapturePrompt> BindCapturePromptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapturePromptZOrder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBindCapturePrompt* Prompt;
    
public:
    UBindCaptureButton();

    UFUNCTION(BlueprintCallable)
    UBindCapturePrompt* StartCapture();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializePrompt(UBindCapturePrompt* PromptWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChordCaptured(FCapturedInput CapturedInput);
    
};

