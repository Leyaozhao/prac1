#include "Move.h"

#include <iostream>
#include<string>
using namespace std;

Move::Move()
{
    flag = 0;
}

Move::Move(string name) : name(name)
{
    flag = 0;
}

string Move::getName()
{
    return name;
}

int Move::getFlag()
{
    return flag;
}