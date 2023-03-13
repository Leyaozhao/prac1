#include"Referee.h"
#include<iostream>

Referee::Referee(){

}

Player *Referee::refGame(Player * player1, Player * player2){
    Move *p1 = player1->makeMove();
    Move *p2 = player2->makeMove();
    p1->compare(p2);
    if(p1->getFlag()==1){
        return player1;
    }
    else if(p1->getFlag()==2)return nullptr;
    else return player2;
}