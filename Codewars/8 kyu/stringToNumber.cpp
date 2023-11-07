/*
We need a function that can transform a string into a number. What ways 
of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly
valid representation of an integral number.

Examples
"1234" --> 1234
"605"  --> 605
"1405" --> 1405
"-7" --> -7
*/

#include <string>
#include <cmath>
using namespace std;

// My Solution
int string_to_number(string s){
    int value = 0;
    //Making Sure Not To Count The '-' With The Size
    int size = s[0] != '-' ? s.length()-1 : s.length()-2;
    for(int i : s){
        //Avoiding Adding The Ascii Number of '-' To The Value
        if(i == '-')continue;
        //converting char To Number Then Multiplying it To Its Power
        //5248 = 5 * 10^3 + 2 * 10^2 + 4 * 10^1 + 8 * 10^1
        //5248 = 5000 + 200 + 40 + 8
        value += (int(i) - int('0')) * pow(10,size);
        size--;
    }if(s[0] == '-')value *= -1; 
    return value;
}

// Best Practice
int string_to_number(const std::string& s) {
    return stoi(s);
}