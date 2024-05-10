#pragma once
#include "CoreMinimal.h"
#include "DelegateNewVoiceChatActorDelegate.generated.h"

class APlayerVoiceChatActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateNewVoiceChatActor, const APlayerVoiceChatActor*, VoiceChatActor);

