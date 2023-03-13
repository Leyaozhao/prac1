#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <iostream>
#include <string>
using namespace std;

class Player
{
    string name;
    bool replace(std::string &str, const std::string &from, const std::string &to);

public:
    Player();
    Player(string name);
    virtual Move *makeMove() = 0;
    string getName();
    void SetName(string name);
    Move *returnMove(string moveName);

private:
};

#endif