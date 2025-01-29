#include<stdio.h>
#include<time.h>

#include "cchoice.h"
char getcompchoice(){
    srand=time(NULL);
    int n = rand() % 100;
    if(n<33){
        computer = 's';
    }
    else if(n<66){
        computer = 'p';

    }
    else {
        computer = 'z';

    }
}
