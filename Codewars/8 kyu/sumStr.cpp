/*
Create a function that takes 2 integers in form of a string as an input, 
and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)

"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"
*/
#include <string>
using namespace std;

// My Solution
string sum_str(const string& a, const string& b) {
    string str1 = a == "" ? "0" : a;
    string str2 = b == "" ? "0" : b;
    return to_string(stoi(str1) + stoi(str2));
}

// Best Practice
string sum_str(const string& a, const string& b) {
    return to_string(stoi(a == "" ? "0" : a) + stoi(b == "" ? "0" : b));
}