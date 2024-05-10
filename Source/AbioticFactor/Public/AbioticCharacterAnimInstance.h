#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AbioticCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABIOTICFACTOR_API UAbioticCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenRagdolling;
    
    UAbioticCharacterAnimInstance();

};

