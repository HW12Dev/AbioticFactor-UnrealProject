#include "GameServerItem.h"

FGameServerItem::FGameServerItem() {
    this->Ping = 0;
    this->Players = 0;
    this->MaxPlayers = 0;
    this->BotPlayers = 0;
    this->ServerVersion = 0;
    this->bPassword = false;
    this->BSecure = false;
}

