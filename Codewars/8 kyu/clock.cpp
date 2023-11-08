/*
Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight 
in milliseconds.

Example:
h = 0
m = 1
s = 1

result = 61000
*/

// My Solution and Best Practice
int past(int h, int m, int s) {
    return (s + m*60 + h*3600) * 1000;
}

