/*
Task
Create a method to see whether the string is ALL CAPS.

Examples (input -> output)
"c" -> False
"C" -> True
"hello I AM DONALD" -> False
"HELLO I AM DONALD" -> True
"ACSKLDFJSgSKLDFJSKLDFJ" -> False
"ACSKLDFJSGSKLDFJSKLDFJ" -> True
*/
#include <string>
#include <algorithm>
using namespace std;

// My Solution
bool is_uppercase(const std::string &s) {
    for(int i : s){
        if(islower(i))
            return false;
    }return true;
}

// Best Practice
bool is_uppercase1(const string &s) {
    return none_of(s.begin(), s.end(), islower);
}
