/*
Your function takes two arguments:

current father's age (years)
current age of his son (years)
Сalculate how many years ago the father was twice as old as his son 
(or in how many years he will be twice as old). The answer is always 
greater or equal to 0, no matter if it was in the past or it is in the future.
*/

// My Solution
int twice_as_old(int dad, int son) {
    int years = 0;
    if(dad == son * 2)
        return years;
    else if(dad > son * 2){
        while(dad > son * 2){
            years++;
            dad--;
        }
        return years;
    }
    else{
        while(dad < son * 2){
            years++;
            dad++;
        }
        return years;
    }
}

// Best Practice
#include <stdlib.h>
int twice_as_old1(int dad, int son) {
    return abs(dad-son*2);
}