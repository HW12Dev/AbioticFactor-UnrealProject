#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Achievement.h"
#include "AchievementRowHandle.h"
#include "ERowValid.h"
#include "AchievementHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAchievementHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAchievementHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementRowHandle MakeLiteralAchievementRowHandle(FAchievementRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementRowHandle MakeAchievementRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAchievementRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAchievementRowHandles(TArray<FAchievementRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable)
    static void GetAchievementRow(FAchievementRowHandle RowHandle, FAchievement& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AchievementRowHandle(FAchievementRowHandle A, FAchievementRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesAchievementRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakAchievementRowHandle(const FAchievementRowHandle RowHandle);
    
};

