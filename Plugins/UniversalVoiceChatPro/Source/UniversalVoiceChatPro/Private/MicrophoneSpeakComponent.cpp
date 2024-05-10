#include "MicrophoneSpeakComponent.h"

UMicrophoneSpeakComponent::UMicrophoneSpeakComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->soundAttenuationAsset = NULL;
    this->soundEffectChainAsset = NULL;
    this->latestVolume = 0.00f;
    this->VoiceCaptureAudioComponent = NULL;
    this->VoiceCaptureSoundWaveProcedural = NULL;
}

bool UMicrophoneSpeakComponent::startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useRange, float MaxRange) {
    return false;
}

void UMicrophoneSpeakComponent::SetVoiceVolume(float Volume) {
}

void UMicrophoneSpeakComponent::setSoundEffectChainAssetPath(const FString& _pathToSoundEffectAsset) {
}

void UMicrophoneSpeakComponent::setAttenuationAssetPath(bool enableAttenuation, const FString& _pathToAttenuationAsset) {
}

void UMicrophoneSpeakComponent::RPCServerBroadcastVoiceData_Implementation(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, int32 RepVolume) {
}

void UMicrophoneSpeakComponent::RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, int32 RepVolume) {
}

void UMicrophoneSpeakComponent::RPCClientTransmitVoiceData_Implementation(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange, int32 RepVolume) {
}

void UMicrophoneSpeakComponent::ResetVOIPComponent() {
}

void UMicrophoneSpeakComponent::payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, int32 RepVolume) {
}

void UMicrophoneSpeakComponent::muteAudio(bool _isMuted) {
}

bool UMicrophoneSpeakComponent::isPlayingAudioVoice() {
    return false;
}

bool UMicrophoneSpeakComponent::initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels, int32 opusFramesPerSec) {
    return false;
}

void UMicrophoneSpeakComponent::endSpeaking() {
}


