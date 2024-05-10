#pragma once
#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "Templates/SubclassOf.h"
#include "AbioticGameInstance.generated.h"

class APlayerController;
class UAbioticSave;

UCLASS(Blueprintable, NonTransient)
class ABIOTICFACTOR_API UAbioticGameInstance : public UAdvancedFriendsGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentSessionPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingJoinPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CurrentBannedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActiveWorldSaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbioticSave*> PendingWorldSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbioticSave*> PendingPlayerSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAbioticSave*> PlayerSaveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAbioticSave*> WorldSaveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbioticSave> WorldSaveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbioticSave> MetaDataSaveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbioticSave> PlayerSaveClass;
    
    UAbioticGameInstance();

    UFUNCTION(BlueprintCallable)
    void ToggleStatUnit(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ToggleStatFPS(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUnfocusedVolumeMultiplier(float NewVolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    bool RestoreSaveBackup(const FString& WorldSaveName, FString& ErrorString);
    
private:
    UFUNCTION(BlueprintCallable)
    void MappingsChanged(APlayerController* Player);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingSaves() const;
    
    UFUNCTION(BlueprintCallable)
    UAbioticSave* GetWorldSave(const FString& LevelSuffix, bool& bNewSave);
    
    UFUNCTION(BlueprintCallable)
    UAbioticSave* GetPlayerSave(const FString& PlayerId, bool bCreateIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    UAbioticSave* GetMetaDataSave(bool& bNewSave);
    
    UFUNCTION(BlueprintCallable)
    bool DoesWorldSaveExist(const FString& LevelSuffix);
    
    UFUNCTION(BlueprintCallable)
    bool DoesSaveBackupExist(const FString& WorldSaveName);
    
    UFUNCTION(BlueprintCallable)
    bool DoesPlayerSaveExist(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void CreateSaveBackup(const FString& WorldSaveName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientWasKicked(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldSaveToQueue(UAbioticSave* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerSaveToQueue(UAbioticSave* SaveGame);
    
};

