/*
Make a function that will return a greeting statement that uses an input; 
your program should return, "Hello, <name> how are you doing today?".

[Make sure you type the exact thing I wrote or the program may not execute 
properly]
*/

// My Solution
#include <string>
using namespace std;
string greet(const string& n){
    return "Hello, " + n + " how are you doing today?";
}