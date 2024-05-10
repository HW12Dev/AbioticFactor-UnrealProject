#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "AbioticGameMode.generated.h"

class APlayerController;

UCLASS(Blueprintable, NonTransient)
class ABIOTICFACTOR_API AAbioticGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AAbioticGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SaveModeratorList(const TArray<FString>& InModeratorList);
    
    UFUNCTION(BlueprintCallable)
    bool SaveBannedPlayerList(const TArray<FString>& InBannedPlayerList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerBanned(APlayerController* BannedPlayer, const FText& BanReason);
    
    UFUNCTION(BlueprintCallable)
    bool LoadModeratorList(TArray<FString>& OutModeratorList);
    
    UFUNCTION(BlueprintCallable)
    bool LoadBannedPlayerList(TArray<FString>& OutBannedPlayerList);
    
};

