#include "Monkey.h"

Monkey::Monkey() : Move("Monkey")
{
}

void Monkey::compare(Move *move)
{
    if (move->getName() == "Ninja" || move->getName() == "Robot"){
        flag = 1;
    }
}