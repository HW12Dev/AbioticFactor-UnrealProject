#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "SkillPerk.h"
#include "SkillPerkRowHandle.h"
#include "SkillPerkHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USkillPerkHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USkillPerkHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillPerkRowHandle MakeSkillPerkRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillPerkRowHandle MakeLiteralSkillPerkRowHandle(FSkillPerkRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillPerkRow(FSkillPerkRowHandle RowHandle, FSkillPerk& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSkillPerkRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSkillPerkRowHandles(TArray<FSkillPerkRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_SkillPerkRowHandle(FSkillPerkRowHandle A, FSkillPerkRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSkillPerkRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakSkillPerkRowHandle(const FSkillPerkRowHandle RowHandle);
    
};

