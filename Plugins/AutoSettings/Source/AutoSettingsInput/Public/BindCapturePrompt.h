#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "CapturePromptClosedEventDelegate.h"
#include "ChordCapturedEventDelegate.h"
#include "ChordRejectedEventDelegate.h"
#include "EBindingCaptureMode.h"
#include "BindCapturePrompt.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UBindCapturePrompt : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreGameViewportInputWhileCapturing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictKeyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBindingCaptureMode CaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KeyGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChordCapturedEvent OnChordCaptured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChordRejectedEvent OnChordRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCapturePromptClosedEvent OnCapturePromptClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeysDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreviousIgnoreInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AccumulatedMouseDelta;
    
public:
    UBindCapturePrompt();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsKeyAllowed(FKey PrimaryKey);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetKeyGroup() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

