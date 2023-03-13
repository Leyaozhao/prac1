#ifndef SCISSORS_H
#define SCISSORS_H

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

class Scissors : public Move
{
public:
    Scissors();
    void compare(Move *move);
};

#endif