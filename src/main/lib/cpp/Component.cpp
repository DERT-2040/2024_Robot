#include "lib/include/Component.h"

Component::Component()
{
    AllCreatedComponents.push_back(*this);
}