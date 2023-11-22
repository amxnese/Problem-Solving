/*
Write a function that checks if a given string 
(case insensitive) is a palindrome.
A palindrome is a word, number, phrase, or other sequence of symbols that 
reads the same backwards as forwards, such as madam or racecar.
*/
#include <string>
using namespace std;

// My Solution
bool isPalindrom (const string& str){
    string t = str;
    for(int i = 0; i < (t.length() / 2); i++){
        if(tolower(t[i]) != tolower(t[t.size()-(i+1)]))
            return false;
    }
    return true;
}

// Best Practice
bool isPalindrom1(const string& str) {
    string lstr = str;
    for (char& c : lstr) c = toupper(c);
    return lstr == string(lstr.rbegin(), lstr.rend());
}