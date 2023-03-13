#include "Ninja.h"

Ninja::Ninja() : Move("Ninja")
{
}

void Ninja::compare(Move *move)
{
    if (move->getName() == "Pirate" ||
    move->getName() == "Zombie")
        proportion = 1;
}