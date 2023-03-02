#include"Referee.h"

Referee::Referee(){

}

Player * Referee::refGame(Player * player1, Player * player2){
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();
    if(p1 == p2){
        std::cout<<"draw"<<std::endl;
        return nullptr;
    }
    if(p1=='R'&& p2=='S')return player1;
    if(p1=='S'&& p2=='R')return player2;
    return nullptr;
}