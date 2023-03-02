#include"Computer.h"

char Computer::makeMove(){
    move='R';
    return 'R';
}
std::string Computer::getName(){
    return name;
}

Computer::Computer(){
    name="Computer";
    move='R';
}