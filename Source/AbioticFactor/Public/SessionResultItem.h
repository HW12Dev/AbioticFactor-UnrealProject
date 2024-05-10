#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FindSessionsCallbackProxy.h"
#include "EFilterState.h"
#include "EModifiedRuleset.h"
#include "SessionResultItem.generated.h"

class USessionResultItem;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USessionResultItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSessionResult SessionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDedicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoryProgressionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModifiedRuleset;
    
    USessionResultItem();

    UFUNCTION(BlueprintCallable)
    static TArray<USessionResultItem*> GetSessionResultEntries(const TArray<FBlueprintSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USessionResultItem*> FilterSessionResultEntries(const TArray<USessionResultItem*>& Results, const FString& FilterString, EFilterState Dedicated, EFilterState Locked, EFilterState Empty, EModifiedRuleset Ruleset);
    
};

