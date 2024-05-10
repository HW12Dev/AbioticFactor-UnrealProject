#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "LevelStreamingCustom.generated.h"

class AActor;
class ULevelStreaming;
class UObject;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API ULevelStreamingCustom : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelStreamingCustom();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* UnloadStreamLevel(const UObject* WorldContextObject, const FString& LevelName, bool bShouldBlockOnUnload, bool& bSuccess, bool& bNotLoaded);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadlLevelStreamVisibility(const UObject* WorldContextObject, const FString& LevelName, bool bShown, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* LoadStreamLevel(const UObject* WorldContextObject, const FString& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool& bSuccess, bool& bAlreadyLoaded);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationInsideAnyLoadedLevelStreamingVolume(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetWorldLevels(const UObject* WorldContextObject, TArray<ULevelStreaming*>& NamesOfWorldLevels);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* GetStreamingLevel(const UObject* WorldContextObject, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetNamesOfWorldLevels(const UObject* WorldContextObject, TArray<FString>& NamesOfWorldLevels);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassInLevel(const UObject* WorldContextObject, const FString& LevelName, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsInLevel(const UObject* WorldContextObject, const FString& LevelName, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetActorLevelName(const UObject* WorldContextObject, AActor* Actor);
    
};

