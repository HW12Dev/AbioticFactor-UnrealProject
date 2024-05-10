#include "RepGraphActorClassSettings.h"

FRepGraphActorClassSettings::FRepGraphActorClassSettings() {
    this->bAddClassRepInfoToMap = false;
    this->ClassNodeMapping = EClassRepNodeMapping::NotRouted;
    this->bAddToRPC_Multicast_OpenChannelForClassMap = false;
    this->bRPC_Multicast_OpenChannelForClass = false;
}

