#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AchievementStat.h"
#include "AchievementStatRowHandle.h"
#include "ERowValid.h"
#include "AchievementStatHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAchievementStatHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAchievementStatHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementStatRowHandle MakeLiteralAchievementStatRowHandle(FAchievementStatRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementStatRowHandle MakeAchievementStatRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAchievementStatRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAchievementStatRowHandles(TArray<FAchievementStatRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable)
    static void GetAchievementStatRow(FAchievementStatRowHandle RowHandle, FAchievementStat& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AchievementStatRowHandle(FAchievementStatRowHandle A, FAchievementStatRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesAchievementStatRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakAchievementStatRowHandle(const FAchievementStatRowHandle RowHandle);
    
};

