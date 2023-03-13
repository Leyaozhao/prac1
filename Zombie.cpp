#include "Zombie.h"

Zombie::Zombie() : Move("Zombie")
{
}

void Zombie::compare(Move *move)
{
    if (move->getName() == "Monkey" ||
    move->getName() == "Pirate")
        proportion = 1;
}