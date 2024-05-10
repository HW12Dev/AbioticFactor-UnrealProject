#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BuffDebuffRowHandle.h"
#include "BuffReceivedDelegate.h"
#include "BuffRemovedDelegate.h"
#include "CraftingBenchCreatedDelegate.h"
#include "CraftingBenchDestroyedDelegate.h"
#include "DeployableConstructedDelegate.h"
#include "DeployablePlacedDelegate.h"
#include "DeployablePluggedInDelegate.h"
#include "ItemCraftedDelegate.h"
#include "ItemEquippedDelegate.h"
#include "ItemReceivedDelegate.h"
#include "PlayerDeathDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameplayObserverSubsystem.generated.h"

class AAbioticCharacter;
class AActor;
class UDamageType;

UCLASS(Blueprintable)
class UGameplayObserverSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCrafted OnItemCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEquipped OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeath OnPlayerDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemReceived OnItemReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffReceived OnBuffReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffRemoved OnBuffRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeployablePlaced OnDeployablePlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeployableConstructed OnDeployableConstructed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeployablePluggedIn OnDeployablePluggedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingBenchCreated OnCraftingBenchCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingBenchDestroyed OnCraftingBenchDestroyed;
    
    UGameplayObserverSubsystem();

    UFUNCTION(BlueprintCallable)
    void TriggerPlayerDeath(AAbioticCharacter* Player, TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerItemReceived(AAbioticCharacter* Player, FName ItemName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void TriggerItemEquipped(AAbioticCharacter* Player, FName ItemName, int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void TriggerItemCrafted(AAbioticCharacter* Player, FName ItemName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void TriggerDeployablePluggedIn(AAbioticCharacter* Player, AActor* Deployable);
    
    UFUNCTION(BlueprintCallable)
    void TriggerDeployablePlaced(AAbioticCharacter* Player, AActor* Deployable);
    
    UFUNCTION(BlueprintCallable)
    void TriggerDeployableConstructed(AAbioticCharacter* Player, AActor* Deployable);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCraftingBenchDestroyed(AActor* CraftingBench);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCraftingBenchCreated(AActor* CraftingBench);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBuffRemoved(AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBuffReceived(AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle);
    
};

