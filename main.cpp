#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"

#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Player.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    Human *h = new Human();
    Computer *c = new Computer();
    Referee *r = new Referee();
    cout<<"enter: ";
    Player *winner = r->refGame(h, c);
    if (winner != nullptr)
        cout << winner->getName() << endl;

    return 0;
}