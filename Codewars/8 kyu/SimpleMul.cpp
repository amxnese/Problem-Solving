/*
This kata is about multiplying a given number by eight
if it is an even number and by nine otherwise.
*/

//My Solution and Best Practice
int simpleMultiplication(int a){
    return a % 2 ? a*9 : a*8;
}