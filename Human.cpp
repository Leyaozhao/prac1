#include "Human.h"
#include "Move.h"

#include <iostream>
#include <string>
using namespace std;

Human::Human() : Player("Human")
{
}

Human::Human(string name) : Player(name)
{
}

Move *Human::makeMove()
{
    string move;
    cin >> move;
    return returnMove(move);
}