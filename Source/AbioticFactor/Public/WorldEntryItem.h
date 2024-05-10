#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveIntegrityState.h"
#include "WorldEntryItem.generated.h"

class UAbioticSave;
class UWorldEntryItem;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UWorldEntryItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SaveFilePaths;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbioticSave* MetaDataSave;
    
public:
    UWorldEntryItem();

    UFUNCTION(BlueprintCallable)
    void ValidateFilesForCorruption();
    
    UFUNCTION(BlueprintCallable)
    bool PerformVersionUpgrade();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWorldEntryItem*> GetWorldEntries();
    
    UFUNCTION(BlueprintCallable)
    ESaveIntegrityState GetSaveIntegrityState();
    
    UFUNCTION(BlueprintCallable)
    UAbioticSave* GetMetaDataSave();
    
};

