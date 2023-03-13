#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <vector>
#include <numeric>
#include <bitset>
#include <cstdlib>
#include <fstream>
using namespace std;

class Rock : public Move
{
public:
    Rock();
    void compare(Move *move);
};

#endif