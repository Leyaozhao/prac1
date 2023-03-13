#include "Scissors.h"

Scissors::Scissors() : Move("Scissors")
{
}

void Scissors::compare(Move *move)
{
    if (move->getName() == "Paper")
        proportion = 1;
}