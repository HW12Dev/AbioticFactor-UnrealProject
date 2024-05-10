#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DovracBPLibrary.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable)
class DOVRAC_API UDovracBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDovracBPLibrary();

    UFUNCTION(BlueprintCallable)
    static int32 WeightedRandomRoll(const TArray<float>& Weights);
    
    UFUNCTION(BlueprintCallable)
    static void SortTextArray(UPARAM(Ref) TArray<FText>& TextArray, bool bAscendingOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SortStringArray(UPARAM(Ref) TArray<FString>& StringArray, bool bAscendingOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SortNameArray(UPARAM(Ref) TArray<FName>& NameArray, bool bAscendingOrder);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortActorsByDistanceFromOrigin(const TArray<AActor*>& Actors, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllFoldersFromDirectory(const FString& FolderPath, int32& Count, TArray<FString>& Folders);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFolder(const FString& FolderPath);
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertWorldLocationToScreenSpace(const APlayerController* Controller, const FVector& WorldLocation, FVector2D& ScreenSpaceLocation, FVector2D& ScreenDirection, bool& bNotOnScreen, bool& bBehindView);
    
};

