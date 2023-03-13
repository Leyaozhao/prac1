#include "Scissors.h"

Scissors::Scissors() : Move("Scissors")
{
}

void Scissors::compare(Move *move)
{
    if (move->getName() == "Paper")
        flag = 1;
    else if(move->getName() == "Scissors")
        flag = 2;
}