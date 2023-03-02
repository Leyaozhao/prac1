#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<string>

class Player{
public:
    virtual char makeMove();
    std::string getName();
    Player();
    char move;
    std::string name;
};

#endif
