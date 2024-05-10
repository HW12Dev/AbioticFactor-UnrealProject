#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "GameSetting.h"
#include "GameplaySettingRowHandle.h"
#include "GameplaySettingHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UGameplaySettingHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplaySettingHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplaySettingRowHandle MakeLiteralGameplaySettingRowHandle(FGameplaySettingRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplaySettingRowHandle MakeGameplaySettingRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameplaySettingRow(FGameplaySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllGameplaySettingRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllGameplaySettingRowHandles(TArray<FGameplaySettingRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_GameplaySettingRowHandle(FGameplaySettingRowHandle A, FGameplaySettingRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesGameplaySettingRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakGameplaySettingRowHandle(const FGameplaySettingRowHandle RowHandle);
    
};

