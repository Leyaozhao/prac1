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

Player::Player()
{
    name = "";
}

Player::Player(string name)
{
    this->name = name;
}

string Player::getName()
{
    return name;
}

void Player::SetName(string name)
{
    this->name = name;
}

bool Player::replace(std::string &str, const std::string &from, const std::string &to)
{
    size_t start_pos = str.find(from);
    if (start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

Move *Player::returnMove(string moveName)
{
    if (moveName == "Rock")
        return new Rock();
    else if (moveName == "Paper")
        return new Paper();
    else if (moveName == "Scissors")
        return new Scissors();
    else if (moveName == "Monkey")
        return new Monkey();
    else if (moveName == "Pirate")
        return new Pirate();
    else if (moveName == "Ninja")
        return new Ninja();
    else if (moveName == "Robot")
        return new Robot();
    else if (moveName == "Zombie")
        return new Zombie();

    // replace(moveName, " ", "");
    // if (moveName == "")
    // {
    //     string m;
    //     cin >> m;
    //     return returnMove(m);
    // }
    // cout << "Invalid moveName {" << moveName << "}" << endl;
    return nullptr;
}
