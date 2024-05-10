#include "SteamCoreVoice.h"

USteamCoreVoice::USteamCoreVoice() : USoundWaveProcedural(FObjectInitializer::Get()) {
    this->FrequenciesToAnalyze.AddDefaulted(4);
}

void USteamCoreVoice::DestroySteamCoreVoice(USteamCoreVoice* Obj) {
}

USteamCoreVoice* USteamCoreVoice::ConstructSteamCoreVoice(int32 AudioSampleRate) {
    return NULL;
}

void USteamCoreVoice::AddAudioBuffer(const TArray<uint8>& Buffer) {
}


