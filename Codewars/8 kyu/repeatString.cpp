/*
Write a function that accepts an integer n and a string s as parameters,
and returns a string of s repeated exactly n time
Examples (input -> output)
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"
*/
#include <string>
using namespace std;
#include<bits/stdc++.h>
using std::string;

// My Solution
string repeat_str(int repeat, string str) {
    if(!repeat)
        return "";
    string temp = str;
    for(int i = 0;i < repeat-1;i++){
        for(int j : temp){
            str += j;
        }
    }
    return str;
}

// Best Practice
string repeat_str1(size_t repeat, const std::string& str)
{
    string ret = "";
    while(repeat--)
        ret += str;
    return ret;
}


string repeat_str2(size_t r, const string& str) {
    string res;
    for(int i = 0; i < r; ++i) {
        res.append(str);
    }
    
    return res;
}