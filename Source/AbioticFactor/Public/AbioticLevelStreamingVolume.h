#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AbioticLevelStreamingVolume.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticLevelStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> LevelToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabledForDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Z;
    
    AAbioticLevelStreamingVolume(const FObjectInitializer& ObjectInitializer);

};

