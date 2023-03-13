#include"Referee.h"
#include<iostream>

Referee::Referee(){

}

Player *Referee::refGame(Player * player1, Player * player2){
    Move *p1 = player1->makeMove();
    Move *p2 = player2->makeMove();
    p1->compare(p2);
    if(p1->getFlag()==1){
        cout<<player1->getName();
    }
    else if(p1->getFlag()==2){
        cout<<"Tie";
    }
    else cout<<player2->getName();

}