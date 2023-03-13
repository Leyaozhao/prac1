#include "Computer.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"

#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

Computer::Computer() : Player("Computer")
{
}

Computer::Computer(string name) : Player(name)
{
}


Move* Computer::makeMove()
{
    // string RPS[3] = {"R", "P", "S"};
    // string move = RPS[rand() % 3];
    // string move = RPS[0];
    // return move;
    return new Rock();
    // return new Robot();

    // string move;
    // cin >> move;

    // return returnMove(move);
}