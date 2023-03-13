#include "Rock.h"

Rock::Rock() : Move("Rock")
{
}

void Rock::compare(Move *move)
{
    if (move->getName() == "Scissors")
        flag = 1;
    else if(move->getName() == "Rock")
        flag = 2;
}