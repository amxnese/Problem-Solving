/*
Define String.prototype.toAlternatingCase (or a similar function/method 
such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your 
selected language; see the initial solution for details) such that each 
lowercase letter becomes uppercase and each uppercase letter becomes lowercase.
For example:
"hello world".toAlternatingCase() === "HELLO WORLD"
"HELLO WORLD".toAlternatingCase() === "hello world"
"hello WORLD".toAlternatingCase() === "HELLO world"
"HeLLo WoRLD".toAlternatingCase() === "hEllO wOrld"
"12345".toAlternatingCase()       === "12345"                   // Non-alphabetical characters are unaffected
"1a2b3c4d5e".toAlternatingCase()  === "1A2B3C4D5E"
*/
#include <iostream>
using namespace std;

// My Solution
string to_alternating_case(string str)
{
    for(int i = 0;i < str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += ' ';
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= ' ';
        }
    }    return str;
}

// Best Practice
#include <iostream>

string to_alternating_case1(string str){
    for(auto& ch : str){
        ch = islower(ch) ? toupper(ch) : tolower(ch);
    }
    return str;
}