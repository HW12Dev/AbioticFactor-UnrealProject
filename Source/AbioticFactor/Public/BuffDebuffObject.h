#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BuffDebuffRowHandle.h"
#include "BuffDebuffObject.generated.h"

class AAbioticCharacter;
class AActor;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UBuffDebuffObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffDebuffRowHandle BuffRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float tickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LinkedActor;
    
    UBuffDebuffObject();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_UpdateRemainingTime(float NewRemainingTime, float& PreviousRemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Server_OnBuffTick(AAbioticCharacter* Character, int32 Stack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Server_OnBuffRemove(AAbioticCharacter* Character, bool bExpiredByTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Server_OnBuffApply(AAbioticCharacter* Character);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_BeginBuffRemoval();
    
};

