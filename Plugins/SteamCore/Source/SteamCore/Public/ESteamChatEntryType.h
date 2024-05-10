#pragma once
#include "CoreMinimal.h"
#include "ESteamChatEntryType.generated.h"

UENUM(BlueprintType)
enum class ESteamChatEntryType : uint8 {
    Invalid,
    ChatMsg,
    Typing,
    InviteGame,
    Emote,
    LeftConversation = 6,
    Entered,
    WasKicked,
    WasBanned,
    Disconnected,
    HistoricalChat,
    LinkBlocked = 14,
};

