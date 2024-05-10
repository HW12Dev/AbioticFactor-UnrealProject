#pragma once
#include "CoreMinimal.h"
#include "DelegateDeleteVoiceChatActorDelegate.generated.h"

class APlayerVoiceChatActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateDeleteVoiceChatActor, const APlayerVoiceChatActor*, VoiceChatActor);

