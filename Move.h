#ifndef MOVE_H
#define MOVE_H

#include <iostream>

class Move
{
private:
    std::string name;
protected:
    int flag;
public:
    Move();
    Move(std::string name);
    std::string getName();
    int getFlag();
    virtual void compare(Move *move) = 0;

};

#endif