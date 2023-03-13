#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
class Zombie : public Move
{
public:
    Zombie();
    void compare(Move *move);
};

#endif