#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "EModifiedRuleset.h"
#include "SandboxData.h"
#include "AbioticWorldSettings.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SandboxValues, meta=(AllowPrivateAccess=true))
    TArray<FSandboxData> SandboxValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EModifiedRuleset ModifiedRuleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> SandboxValues_Bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> SandboxValues_Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SandboxValues_Int;
    
    AAbioticWorldSettings(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SandboxValues();
    
public:
    UFUNCTION(BlueprintCallable)
    TMap<FName, FString> GetSandboxValues();
    
};

