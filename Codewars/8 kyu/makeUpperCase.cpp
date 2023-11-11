/*
Write a function which converts the input string to uppercase.
*/
#include <string>
using namespace std;

// My Solution
string makeUpperCase(const string& input_str){
    string ret = "";
    for(auto i : input_str){
        ret += toupper(i);
    } return ret;
}

// Best Practice
#include <algorithm>
string makeUpperCase (const string& input_str){
    string str = input_str;
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    return str;
}