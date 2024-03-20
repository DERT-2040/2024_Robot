#include "lib/include/Component.h"

Component::Component()
{
    PreStepCallbacks.push_back(&Component::PreStepCallback);
    PostStepCallbacks.push_back(&Component::PostStepCallback);
    SmartDashboardCallbacks.push_back(&Component::SmartDashboardCallback);
    GameStateChangeCallbacks.push_back(&Component::GameStateChangeCallback);
    AllCreatedComponents.push_back(*this);
}