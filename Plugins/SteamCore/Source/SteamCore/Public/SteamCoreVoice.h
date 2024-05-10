#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundWaveProcedural.h"
#include "SteamCoreVoice.generated.h"

class USteamCoreVoice;

UCLASS(Blueprintable, EditInlineNew)
class STEAMCORE_API USteamCoreVoice : public USoundWaveProcedural {
    GENERATED_BODY()
public:
    USteamCoreVoice();

    UFUNCTION(BlueprintCallable)
    static void DestroySteamCoreVoice(USteamCoreVoice* Obj);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreVoice* ConstructSteamCoreVoice(int32 AudioSampleRate);
    
    UFUNCTION(BlueprintCallable)
    void AddAudioBuffer(const TArray<uint8>& Buffer);
    
};

