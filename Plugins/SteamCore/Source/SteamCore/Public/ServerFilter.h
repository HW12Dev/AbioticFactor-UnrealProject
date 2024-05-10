#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ServerFilter.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UServerFilter : public UObject {
    GENERATED_BODY()
public:
    UServerFilter();

    UFUNCTION(BlueprintCallable)
    TMap<FString, FString> GetFilters();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterWhitelisted();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterVersion(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterSecure();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterProxy();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterPassword();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterOr(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNotFull();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNotAppId(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNor(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNoPlayers();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNand(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterName(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterMap(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterLinux();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterHasPlayers();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameTagsNor(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameTagsAnd(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameDataOr(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameDataNor(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameDataAnd(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameAddr(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterDedicated();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterAnd(const FString& Value);
    
};

