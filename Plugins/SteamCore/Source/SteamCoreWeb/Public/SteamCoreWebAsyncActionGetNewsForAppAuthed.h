#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetNewsForAppAuthed.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetNewsForAppAuthed;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetNewsForAppAuthed();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
    
};

