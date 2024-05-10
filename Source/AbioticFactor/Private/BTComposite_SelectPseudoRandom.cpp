#include "BTComposite_SelectPseudoRandom.h"

UBTComposite_SelectPseudoRandom::UBTComposite_SelectPseudoRandom() {
    this->NodeName = TEXT("Select Pseudo Random");
    this->bAlreadyRan = false;
    this->LastChild = -1;
}


