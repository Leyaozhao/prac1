#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Player.h"

#include <iostream>
#include <string>

int main()
{
    Human *h = new Human();
    Computer *c = new Computer();
    Referee *r = new Referee();
    cout<<"enter: ";
    Player *winner = r->refGame(h, c);
    if (winner != nullptr){
        std::cout << winner->getName() << endl;
    }
    else std::cout<<"Tie"<<endl;
    return 0;
}