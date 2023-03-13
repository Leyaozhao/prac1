#include "Pirate.h"

Pirate::Pirate() : Move("Pirate")
{
}

void Pirate::compare(Move *move)
{
    if (move->getName() == "Robot" ||
    move->getName() == "Monkey")
        proportion = 1;
}