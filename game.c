#include "game.h"
int game(char you,char computer){
    if(you==computer){
        return -1;//Draw
    }
    if((you == 's' && computer == 'p') || (you == 'p' && computer == 'z') (you == 'z' && computer == 's') ){
        return 0;//loss
    }
    return 1;//win
}