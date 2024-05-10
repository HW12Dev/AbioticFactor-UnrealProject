#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbioticPlayerController.generated.h"

class AAbioticCharacter;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAbioticCharacter* PlayerCharacter;
    
    AAbioticPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleLoadingScreen(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSoftwareCursor(bool bEnabled);
    
};

