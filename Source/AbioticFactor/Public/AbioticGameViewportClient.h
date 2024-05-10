#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "OnUsingGamepadChangedDelegate.h"
#include "AbioticGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABIOTICFACTOR_API UAbioticGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUsingGamepadChanged OnUsingGamepadChanged;
    
    UAbioticGameViewportClient();

};

