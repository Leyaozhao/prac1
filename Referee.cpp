#include"Referee.h"

Referee::Referee(){

}

Player * Referee::refGame(Player * player1, Player * player2){
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();
    if(p1=='R')return nullptr;
    else if(p1=='S')return player2;
    else if(p1=='P')return player1;
    
}