#include "LevelStreamingCustom.h"
#include "Templates/SubclassOf.h"

ULevelStreamingCustom::ULevelStreamingCustom() {
}

ULevelStreaming* ULevelStreamingCustom::UnloadStreamLevel(const UObject* WorldContextObject, const FString& LevelName, bool bShouldBlockOnUnload, bool& bSuccess, bool& bNotLoaded) {
    return NULL;
}

void ULevelStreamingCustom::SetLoadlLevelStreamVisibility(const UObject* WorldContextObject, const FString& LevelName, bool bShown, bool& bSuccess) {
}

ULevelStreaming* ULevelStreamingCustom::LoadStreamLevel(const UObject* WorldContextObject, const FString& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool& bSuccess, bool& bAlreadyLoaded) {
    return NULL;
}

bool ULevelStreamingCustom::IsLocationInsideAnyLoadedLevelStreamingVolume(const UObject* WorldContextObject, FVector Location) {
    return false;
}

void ULevelStreamingCustom::GetWorldLevels(const UObject* WorldContextObject, TArray<ULevelStreaming*>& NamesOfWorldLevels) {
}

ULevelStreaming* ULevelStreamingCustom::GetStreamingLevel(const UObject* WorldContextObject, const FString& LevelName) {
    return NULL;
}

void ULevelStreamingCustom::GetNamesOfWorldLevels(const UObject* WorldContextObject, TArray<FString>& NamesOfWorldLevels) {
}

void ULevelStreamingCustom::GetAllActorsOfClassInLevel(const UObject* WorldContextObject, const FString& LevelName, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

void ULevelStreamingCustom::GetAllActorsInLevel(const UObject* WorldContextObject, const FString& LevelName, TArray<AActor*>& OutActors) {
}

FString ULevelStreamingCustom::GetActorLevelName(const UObject* WorldContextObject, AActor* Actor) {
    return TEXT("");
}


