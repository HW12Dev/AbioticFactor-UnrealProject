#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BuffDebuffEntry.h"
#include "BuffDebuffRowHandle.h"
#include "EBodyLimbs.h"
#include "OnBuffTagContainerRefreshedDelegate.h"
#include "OnCurrentBuffsUpdatedDelegate.h"
#include "CharacterBuffComponent.generated.h"

class AActor;
class UBuffDebuffObject;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABIOTICFACTOR_API UCharacterBuffComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuffDebuffRowHandle> ImmuneToBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBuffs, meta=(AllowPrivateAccess=true))
    TArray<FBuffDebuffEntry> CurrentBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffParticles, meta=(AllowPrivateAccess=true))
    TArray<FBuffDebuffRowHandle> BuffParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffMaterials, meta=(AllowPrivateAccess=true))
    TArray<FBuffDebuffRowHandle> BuffMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FBuffDebuffRowHandle, UBuffDebuffObject*> BuffObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FBuffDebuffRowHandle> TraitBuffRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuffDebuffObject*> TraitBuffObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffTagContainer, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BuffTagContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuffTagContainerRefreshed OnBuffTagContainerRefreshed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentBuffsUpdated OnCurrentBuffsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FBuffDebuffRowHandle, UActorComponent*> BuffParticleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FBuffDebuffRowHandle, TSoftObjectPtr<UMaterialInterface>> BuffMaterialMap;
    
    UCharacterBuffComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UActorComponent* SpawnBuffParticle(FBuffDebuffRowHandle BuffRow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_RemoveTraitBuff(FBuffDebuffRowHandle BuffRow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_RemoveSpecificBuffs(TArray<FBuffDebuffRowHandle> BuffRows, bool bSpecificLimbs, TArray<EBodyLimbs> Limbs);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_RemoveFullHealthBuffsOnLimb(EBodyLimbs Limb);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_RemoveBuff(FBuffDebuffRowHandle BuffRow, bool bRemoveEntireStack, EBodyLimbs Limb, bool bExpiredByTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_ApplyBuff(FBuffDebuffRowHandle BuffRow, bool bOverrideDefaultDuration, float NewDuration, EBodyLimbs Limb, AActor* LinkedActor, bool bSkipDialog);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_AddTraitBuff(FBuffDebuffRowHandle BuffRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBuffMaterial(FBuffDebuffRowHandle BuffRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDialogLine(FBuffDebuffRowHandle BuffRow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBuffs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffTagContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffParticles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffMaterials();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBuffTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EBodyLimbs> HasBuff(FBuffDebuffRowHandle BuffRow, bool bMustBeOnSameLimb, EBodyLimbs Limb);
    
    UFUNCTION(BlueprintCallable)
    bool GetBuffExpireTime(FBuffDebuffRowHandle BuffRow, float& ExpireTime);
    
    UFUNCTION(BlueprintCallable)
    void GetBuffCountMap(bool bIgnoreSilent, TMap<FBuffDebuffRowHandle, int32>& OutBuffCountMap);
    
    UFUNCTION(BlueprintCallable)
    bool FindBuffInArray(TArray<FBuffDebuffEntry> BuffArray, FBuffDebuffEntry& OutBuffEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesBuffTagQueryMatch(FGameplayTagQuery TagQuery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffRemoved(FBuffDebuffRowHandle BuffRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffReceived(FBuffDebuffRowHandle BuffRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyBuffMaterial(FBuffDebuffRowHandle BuffRow);
    
};

