#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EBodyLimbs.h"
#include "HealthChangedDelegateDelegate.h"
#include "NearbyCharacterTagsRefreshedDelegate.h"
#include "OnStatModifiersRefreshedDelegate.h"
#include "SkillRowHandle.h"
#include "StaminaChangedDelegateDelegate.h"
#include "StatModifierEntry.h"
#include "StatModifierRowHandle.h"
#include "AbioticCharacter.generated.h"

class AAbioticCharacter;
class AAbioticLevelStreamingVolume;
class AActor;
class UCharacterBuffComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticCharacter : public ACharacter, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* TetheredBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAbioticCharacter*> NearbyCharacters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNearbyCharacterTagsRefreshed OnNearbyCharacterTagsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterBuffComponent* BuffComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StatModifiers, meta=(AllowPrivateAccess=true))
    TArray<FStatModifierEntry> StatModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FStatModifierRowHandle, float> StatModifierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FStatModifierRowHandle, int32> CheatStatModifierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSkillRowHandle, int32> SkillLevelMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatModifiersRefreshed OnStatModifiersRefreshed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStatsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatModifierRowHandle MaxHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatModifierRowHandle MaxHeadHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBodyLimbs, float> DefaultMax_LimbHealthMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth_Torso;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth_LeftArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth_RightArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth_LeftLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth_RightLeg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedDelegate OnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStamina, meta=(AllowPrivateAccess=true))
    float CurrentStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStamina, meta=(AllowPrivateAccess=true))
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRequiredToSprint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaminaChangedDelegate OnStaminaChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalSprintSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalSwimSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCrouchSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSprinting, meta=(AllowPrivateAccess=true))
    uint8 bIsSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAiming, meta=(AllowPrivateAccess=true))
    uint8 bIsAiming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JetpackTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStaminaToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleSprintEnabledTimestamp;
    
    AAbioticCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSkillStatLevel(FSkillRowHandle Skill, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSprint();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCrouch();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAim();
    
    UFUNCTION(BlueprintCallable)
    void StopSprint(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void StopAim(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void Sprint(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetStatUpdateLock(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStamina(float NewMaxStamina);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLimbHealth(EBodyLimbs Limb, float Health);
    
    UFUNCTION(BlueprintCallable)
    void SetInternalStates(bool bDBNO, bool bDead, bool bSitting);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStamina(float NewCurrentStamina);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNearbyCharacter(AAbioticCharacter* Character, UPrimitiveComponent* OverlapPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatModifiersUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSprintUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StatModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxStamina();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSprinting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAiming();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStamina();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelVolumeExit(AAbioticLevelStreamingVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelVolumeEnter(AAbioticLevelStreamingVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAimUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NearbyCharacterTagsUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalAbioticCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatModifierValue(float BaseValue, FStatModifierRowHandle Modifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetNPCAwarenessData(TMap<AActor*, float>& LastSeenPotential, TMap<AActor*, float>& ListOfPerceptionTargets, TMap<AActor*, float>& AttackerList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxTotalHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLimbHealth(EBodyLimbs Limb) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMaxHealthMap(TMap<EBodyLimbs, float>& MaxHealthMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLimbPercentage(EBodyLimbs Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLimbHealth(EBodyLimbs Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetJetpackVelocity(const FVector& InitialVelocity, const FVector& FallingVelocity, const float JetpackStartTime, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentHealthMap(TMap<EBodyLimbs, float>& CurrentHealthMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNearbyCharacterMatchTagQuery(FGameplayTagQuery TagQuery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNearbyCharacterHaveTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearCheatStatModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckForStaminaEvents();
    
    UFUNCTION(BlueprintCallable)
    void Aim(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void AddNearbyCharacter(AAbioticCharacter* Character, UPrimitiveComponent* OverlapPrimitive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddCheatStatModifier(FStatModifierRowHandle Modifier, int32 Value);
    

    // Fix for true pure virtual functions not being implemented
};

