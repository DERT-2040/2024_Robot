#include "lib/include/Component.h"

Component::Component()
{
    PreStepCallbacks.push_back(&PreStepCallback);
    PostStepCallbacks.push_back(&PostStepCallback);
    SmartDashboardCallbacks.push_back(&SmartDashboardCallback);
    GameStateChangeCallbacks.push_back(&GameStateChangeCallback);
    AllCreatedComponents.push_back(*this);
}