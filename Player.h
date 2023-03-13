#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name;

public:
    Player();
    Player(string name);
    virtual Move *makeMove() = 0;
    string getName();
    void SetName(string name);
    Move *returnMove(string moveName);

};

#endif