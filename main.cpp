#include<iostream>
#include"Human.h"
#include"Computer.h"
#include"Referee.h"

int main(){
    Human *h=new Human;
    Computer *c=new Computer;



    Referee r;
    std::cout << r.refGame(h,c)->getName() << std::endl;
}