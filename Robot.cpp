#include "Robot.h"

Robot::Robot() : Move("Robot")
{
}

void Robot::compare(Move *move)
{
    if (move->getName() == "Zombie" ||
    move->getName() == "Ninja")
        flag = 1;
}