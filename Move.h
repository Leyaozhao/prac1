#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>



using namespace std;

class Move
{
    string name;
protected:
public:
    Move();
    Move(string name);
    string getName();
    int getFlag();
    virtual void compare(Move *move) = 0;
    int flag;
};

#endif