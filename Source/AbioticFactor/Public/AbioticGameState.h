#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TeleporterFrequencyUpdatedDelegate.h"
#include "WorldFlagRowHandle.h"
#include "AbioticGameState.generated.h"

class AActor;
class ULevelManagerComponent;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SavedElapsedMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> TeleporterFrequencyMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleporterFrequencyUpdated OnTeleporterFrequencyUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelManagerComponent* LevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldFlags, meta=(AllowPrivateAccess=true))
    TArray<FWorldFlagRowHandle> WorldFlags;
    
    AAbioticGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTeleporterFrequency(AActor* Teleporter, int32 Frequency, bool bSkipBroadcast);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveTeleporterFrequency(AActor* Teleporter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldFlags();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetElapsedMinutes() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool DoesFrequencyHaveMatchingTeleporter(int32 Frequency, AActor* Teleporter);
    
};

