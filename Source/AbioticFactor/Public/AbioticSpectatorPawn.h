#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "AbioticSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensitivityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensitivityY;
    
    AAbioticSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

