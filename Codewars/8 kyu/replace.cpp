/*
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"
*/
#include <string>
#include <regex>
using namespace std;

// My Solution
string replace(const string &s){
    string ret = "";
    for(auto &i : s){
        char n = tolower(i);
        if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')ret += "!";
        else ret += i;
    }
    return ret; 
}

// Best Practice
string replace1(const string &s){
    return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}

// Best Practice
using namespace std;

string replace2(string s) {
    string vowels = "aeiouAEIOU";
    for (auto& c : s) if (vowels.find(c) != string::npos) c = '!';
    return move(s);
}