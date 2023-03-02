#include"Human.h"

char Human::makeMove(){
    std::cout<<"Enter move: ";
    std::cin >> move;
    return move;
}
std::string Human::getName(){
    return name;
}
Human::Human(std::string x){
    name=x;
}

Human::Human(){
    name="Human";
    move='S';
}