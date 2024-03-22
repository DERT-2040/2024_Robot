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
    static std::vector<Component> AllCreatedComponents; 
    
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