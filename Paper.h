#ifndef PAPER_H
#define PAPER_H

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

class Paper : public Move
{
public:
    Paper();
    void compare(Move *move);
};

#endif