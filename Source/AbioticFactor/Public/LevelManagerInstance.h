#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelManagerInstance.generated.h"

class AAbioticLevelStreamingVolume;
class AActor;
class ULevelStreaming;

UCLASS(Blueprintable)
class ULevelManagerInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* LevelStreaming;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAbioticLevelStreamingVolume*> LevelStreamingVolumes;
    
public:
    ULevelManagerInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeaveLevel(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterLevel(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

