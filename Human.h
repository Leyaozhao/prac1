#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include<string>


class Human: public Player{
public:
    char makeMove();
    std::string getName();
    Human(std::string x);
    Human();

};

#endif