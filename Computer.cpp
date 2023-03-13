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
    return new Rock();
}