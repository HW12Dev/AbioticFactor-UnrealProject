#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "OnInputTypeChangedDelegate.h"
#include "AbioticUIActionRouter.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAbioticUIActionRouter : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputTypeChanged OnInputTypeChanged;
    
    UAbioticUIActionRouter();

protected:
    UFUNCTION(BlueprintCallable)
    void ViewportOnInputTypeChanged(bool bUsingGamepad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
};

