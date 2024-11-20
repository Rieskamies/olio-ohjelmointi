#include "engine.h"

Engine::Engine() {}

Engine::Engine(int, double)
{

}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}
