#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EModifiedRuleset.h"
#include "SandboxOption.h"
#include "SandboxOptionRowHandle.h"
#include "SandboxOptionSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USandboxOptionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USandboxOptionSubsystem();

    UFUNCTION(BlueprintCallable)
    static bool WriteSandboxSettingsToFile(const FString& FilePath, const TMap<FName, FString>& Settings);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadSandboxSettingsFromFile(const FString& FilePath, TMap<FName, FString>& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, FString> MergeLoadedSandboxSettingsWithDefault(const TMap<FName, FString>& InSettings, EModifiedRuleset& OutModifiedRuleset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSandboxStringValue(const FString& InValue, const FSandboxOption& SandboxData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetSandboxOption_String(const UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSandboxOption_Int(const UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSandboxOption_Float(const UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSandboxOption_Bool(const UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, FString> GetDefaultSandboxSettings();
    
};

