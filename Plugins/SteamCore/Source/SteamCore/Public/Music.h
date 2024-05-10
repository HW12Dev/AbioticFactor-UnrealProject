#pragma once
#include "CoreMinimal.h"
#include "ESteamAudioPlaybackStatus.h"
#include "OnPlaybackStatusHasChangedDelegate.h"
#include "OnVolumeHasChangedDelegate.h"
#include "SteamCoreSubsystem.h"
#include "Music.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UMusic : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaybackStatusHasChanged PlaybackStatusHasChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVolumeHasChanged VolumeHasChanged;
    
    UMusic();

    UFUNCTION(BlueprintCallable)
    void SetVolume(float flVolume);
    
    UFUNCTION(BlueprintCallable)
    void PlayPrevious();
    
    UFUNCTION(BlueprintCallable)
    void PlayNext();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable)
    ESteamAudioPlaybackStatus GetPlaybackStatus();
    
    UFUNCTION(BlueprintCallable)
    bool BIsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool bIsEnabled();
    
};

