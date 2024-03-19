#pragma once
#include <functional>
#include <vector>
class Component
{
public:
    Component();

    /**
     * Contains all Pre Step Callbacks for calling in PreStep()
     */
    static std::vector<void(Component::*)()> PreStepCallbacks;

    /**
     * Contains all Post Step Callbacks for calling in PostStep()
     */
    static std::vector<void(Component::*)()> PostStepCallbacks;

    /**
     * Contains all Smart Dashboard Callbacks for calling in UpdateSD()
     */
    static std::vector<void(Component::*)()> SmartDashboardCallbacks;

    /**
     * Contains all Change of Game State Callbacks for calling in ChangeGameState()
     */
    static std::vector<void(Component::*)()> GameStateChangeCallbacks;

    static std::vector<Component> AllCreatedComponents; 

private:
    /**
     * Component specific callback that runs before the simulink step function
     */
    virtual void PreStepCallback();

    /**
     * Component specific callback that runs after the simulink step function
     */
    virtual void PostStepCallback();

    /**
     * Component specific callback that pushes data to smart dashboard
     */
    virtual void SmartDashboardCallback();

    /**
     * Component specific callback that is called when the gamestate changes
     */
    virtual void GameStateChangeCallback();
};