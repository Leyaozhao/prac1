#include "Human.h"
#include "Move.h"


Human::Human() : Player("Human")
{
}

Human::Human(std::string name) : Player(name)
{
}

Move *Human::makeMove()
{
    string move;
    cin >> move;
    return returnMove(move);
}