#include "Paper.h"

Paper::Paper() : Move("Paper")
{
}

void Paper::compare(Move *move)
{
    if (move->getName() == "Rock")
        proportion = 1;
}