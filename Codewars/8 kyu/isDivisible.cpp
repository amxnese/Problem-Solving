/*
Create a function that checks if a number n is divisible
by two numbers x AND y. All inputs are positive,
non-zero numbers.
*/

// My Solution and Best Practice
bool isDivisible(int n, int x, int y) {
    return !(n % x || n % y);
}