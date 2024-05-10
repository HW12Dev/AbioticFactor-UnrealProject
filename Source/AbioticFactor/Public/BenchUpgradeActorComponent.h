#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "GameplayTagContainer.h"
#include "BenchUpgradeRowHandle.h"
#include "BenchUpgradeActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABIOTICFACTOR_API UBenchUpgradeActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBenchUpgradeRowHandle BenchUpgrade;
    
    UBenchUpgradeActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshUpgradeState(const FGameplayTagContainer& TagContainer);
    
};

