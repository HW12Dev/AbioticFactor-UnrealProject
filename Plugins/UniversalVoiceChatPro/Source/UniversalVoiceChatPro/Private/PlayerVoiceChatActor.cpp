#include "PlayerVoiceChatActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

APlayerVoiceChatActor::APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->MicrophoneSpeakComponent = NULL;
    this->ownerPlayerState = NULL;
    this->idVoiceChat = 0;
    this->playerName = TEXT("Player");
    this->IsMicrophoneOn = false;
    this->isUsingRadio = false;
    this->bOwnsRadio = false;
    this->voiceVolume = 5.00f;
    this->ServerPerformAntiCheat = false;
    this->AntiCheatAllowUseProximity = true;
    this->AntiCheatAllowUseGlobal = true;
    this->AntiCheatMaxProximityRange = 1000.00f;
}

void APlayerVoiceChatActor::ServerSetMaxProximityRange(float _maxProximityRange) {
}

void APlayerVoiceChatActor::ServerSetAttenuation(bool enableAttenuation, const FString& _pathToAttenuationAsset) {
}

void APlayerVoiceChatActor::ServerSetAllowUseProximity(bool _allowUseRange) {
}

void APlayerVoiceChatActor::ServerSetAllowUseGlobal(bool _allowUseGlobal) {
}

void APlayerVoiceChatActor::ServerRemoveChannel(int32 channelToRemove) {
}

void APlayerVoiceChatActor::ServerAddChannel(int32 channelToAdd) {
}

void APlayerVoiceChatActor::RPCServerUpdatePosAudioComp_Implementation(FVector worldPos, FRotator worldRotation) {
}

void APlayerVoiceChatActor::RPCClientSetPlayerName_Implementation(const FString& Name) {
}

void APlayerVoiceChatActor::RPCClientSetMicrophoneVolume_Implementation(float Volume) {
}

void APlayerVoiceChatActor::RPCClientSetIsMicrophoneOn_Implementation(bool _isMicrophoneOn, bool bRadio) {
}

void APlayerVoiceChatActor::RPCClientAskRemoveChannel_Implementation(int32 channelToRemove) {
}

void APlayerVoiceChatActor::RPCClientAskAddChannel_Implementation(int32 channelToAdd) {
}

void APlayerVoiceChatActor::RepNotifyVoiceVolume() {
}

void APlayerVoiceChatActor::RepNotifySoundEffectAsset() {
}

void APlayerVoiceChatActor::RepNotifyPlayerName() {
}

void APlayerVoiceChatActor::RepNotifyMicComp() {
}

void APlayerVoiceChatActor::RepNotifyIsUsingRadio() {
}

void APlayerVoiceChatActor::RepNotifyIsMicrophoneOn() {
}

void APlayerVoiceChatActor::RepNotifyAttenuationAsset() {
}

void APlayerVoiceChatActor::muteAudio(bool isMute) {
}

void APlayerVoiceChatActor::DelegateEndPlayOwner(AActor* act, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void APlayerVoiceChatActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerVoiceChatActor, MicrophoneSpeakComponent);
    DOREPLIFETIME(APlayerVoiceChatActor, ownerPlayerState);
    DOREPLIFETIME(APlayerVoiceChatActor, idVoiceChat);
    DOREPLIFETIME(APlayerVoiceChatActor, playerName);
    DOREPLIFETIME(APlayerVoiceChatActor, IsMicrophoneOn);
    DOREPLIFETIME(APlayerVoiceChatActor, isUsingRadio);
    DOREPLIFETIME(APlayerVoiceChatActor, bOwnsRadio);
    DOREPLIFETIME(APlayerVoiceChatActor, voiceVolume);
    DOREPLIFETIME(APlayerVoiceChatActor, radioChannelSubscribed);
    DOREPLIFETIME(APlayerVoiceChatActor, pathToAttenuationAsset);
    DOREPLIFETIME(APlayerVoiceChatActor, pathToSoundEffectAsset);
}


