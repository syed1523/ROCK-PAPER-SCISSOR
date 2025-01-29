#include <stdio.h>
#include "game.h"
#include "cchoice.h"
int main(){
    char you,computer;
    scanf(" %c",&you);
    computer = cchoice();
    int result = game(you,computer);
    printf("You chose: %d  ,  Computer Chose:%d",you,computer);
    if(result == -1){
        printf("Draw");

    }
    else if(result== 0){
        printf("You lose");
    }
    else{
        printf("You Win !");
    }
    return 0;
}