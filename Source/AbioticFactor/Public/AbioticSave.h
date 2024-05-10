#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AbioticSave.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAbioticSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SaveIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveVersion;
    
    UAbioticSave();

    UFUNCTION(BlueprintCallable)
    bool ApplyVersionUpgrade(int32 OldVersion, int32 NewVersion, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ApplyVersion2Upgrade();
    
};

