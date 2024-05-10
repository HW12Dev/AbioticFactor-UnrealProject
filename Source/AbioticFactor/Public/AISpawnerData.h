#pragma once
#include "CoreMinimal.h"
#include "AISpawnerData.generated.h"

class AAbioticCharacter;
class AActor;

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAISpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAbioticCharacter*> SpawnedAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NearbyPlayersOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTotalCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLastCooldownStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOnlySpawnOnce;
    
    FAISpawnerData();
};

