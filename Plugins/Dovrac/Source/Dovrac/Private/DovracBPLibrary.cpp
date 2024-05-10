#include "DovracBPLibrary.h"

UDovracBPLibrary::UDovracBPLibrary() {
}

int32 UDovracBPLibrary::WeightedRandomRoll(const TArray<float>& Weights) {
    return 0;
}

void UDovracBPLibrary::SortTextArray(TArray<FText>& TextArray, bool bAscendingOrder) {
}

void UDovracBPLibrary::SortStringArray(TArray<FString>& StringArray, bool bAscendingOrder) {
}

void UDovracBPLibrary::SortNameArray(TArray<FName>& NameArray, bool bAscendingOrder) {
}

TArray<AActor*> UDovracBPLibrary::SortActorsByDistanceFromOrigin(const TArray<AActor*>& Actors, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ) {
    return TArray<AActor*>();
}

void UDovracBPLibrary::GetAllFoldersFromDirectory(const FString& FolderPath, int32& Count, TArray<FString>& Folders) {
}

bool UDovracBPLibrary::DeleteFolder(const FString& FolderPath) {
    return false;
}

bool UDovracBPLibrary::ConvertWorldLocationToScreenSpace(const APlayerController* Controller, const FVector& WorldLocation, FVector2D& ScreenSpaceLocation, FVector2D& ScreenDirection, bool& bNotOnScreen, bool& bBehindView) {
    return false;
}


