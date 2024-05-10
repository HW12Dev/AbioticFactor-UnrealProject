#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CompendiumEntryRowHandle.h"
#include "WorldFlagRowHandle.h"
#include "NPCConversationLine.generated.h"

class UAnimMontage;
class UDialogueWave;

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FNPCConversationLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogueWave> DialogToSpeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> RecipesToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> JournalEntriesToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldFlagRowHandle> WorldFlagsToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompendiumEntryRowHandle> CompendiumEntriesToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DialogMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageDelay;
    
    FNPCConversationLine();
};

