#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
#include <iostream>
using namespace std;

class Scissors : public Move
{
public:
    Scissors();
    void compare(Move *move);
};

#endif