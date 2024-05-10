#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "PlantData.h"
#include "PlantRowHandle.h"
#include "PlantHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UPlantHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlantHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlantRowHandle MakePlantRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlantRowHandle MakeLiteralPlantRowHandle(FPlantRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlantRow(FPlantRowHandle RowHandle, FPlantData& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPlantRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPlantRowHandles(TArray<FPlantRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_PlantRowHandle(FPlantRowHandle A, FPlantRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPlantRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakPlantRowHandle(const FPlantRowHandle RowHandle);
    
};

