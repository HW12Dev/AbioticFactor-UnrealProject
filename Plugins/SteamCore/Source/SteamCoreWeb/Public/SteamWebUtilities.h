#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESteamJsonResult.h"
#include "SteamCoreJson.h"
#include "SteamWebUtilities.generated.h"

UCLASS(Abstract, Blueprintable)
class STEAMCOREWEB_API USteamWebUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamWebUtilities();

    UFUNCTION(BlueprintCallable)
    static bool ParseJson(const FString& JsonString, TArray<FSteamCoreJson>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProjectAppID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDevSteamID();
    
    UFUNCTION(BlueprintCallable)
    static void FindJsonStrings(const FString& JsonString, const FString& Key, TArray<FString>& Values, ESteamJsonResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FindJsonString(const FString& JsonString, const FString& Key, FString& Value, ESteamJsonResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FindJsonNumbers(const FString& JsonString, const FString& Key, TArray<int32>& Values, ESteamJsonResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FindJsonNumber(const FString& JsonString, const FString& Key, int32& Value, ESteamJsonResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FindJsonBools(const FString& JsonString, const FString& Key, TArray<bool>& bValues, ESteamJsonResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FindJsonBool(const FString& JsonString, const FString& Key, bool& bValue, ESteamJsonResult& Result);
    
};

