#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioSettingRowHandle.h"
#include "ERowValid.h"
#include "GameSetting.h"
#include "AudioSettingHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAudioSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioSettingHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioSettingRowHandle MakeLiteralAudioSettingRowHandle(FAudioSettingRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioSettingRowHandle MakeAudioSettingRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetAudioSettingRow(FAudioSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAudioSettingRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAudioSettingRowHandles(TArray<FAudioSettingRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AudioSettingRowHandle(FAudioSettingRowHandle A, FAudioSettingRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesAudioSettingRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakAudioSettingRowHandle(const FAudioSettingRowHandle RowHandle);
    
};

