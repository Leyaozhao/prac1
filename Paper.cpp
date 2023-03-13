#include "Paper.h"

Paper::Paper() : Move("Paper")
{
}

void Paper::compare(Move *move)
{
    if (move->getName() == "Rock")
        flag = 1;
    else if(move->getName() == "Paper")
        flag = 2;
}