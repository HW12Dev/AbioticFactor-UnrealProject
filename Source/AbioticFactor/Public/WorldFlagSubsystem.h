#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "QuestRowHandle.h"
#include "WorldFlagRowHandle.h"
#include "WorldFlagUpdatedDelegate.h"
#include "WorldFlagsLoadedDelegate.h"
#include "WorldFlagSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class UWorldFlagSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldFlagUpdated OnWorldFlagUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldFlagsLoaded OnWorldFlagsLoaded;
    
    UWorldFlagSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetWorldFlag(FWorldFlagRowHandle WorldFlag, bool bState, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void LoadWorldFlags(TArray<FName> FlagArray, bool bForce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasWorldFlagsLoaded() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasWorldFlag(const UObject* WorldContextObject, FWorldFlagRowHandle WorldFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetWorldFlags(TArray<FName>& FlagArray);
    
    UFUNCTION(BlueprintCallable)
    bool FindCurrentQuest(FQuestRowHandle& QuestRowHandle);
    
};

