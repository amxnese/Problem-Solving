/*
Write function RemoveExclamationMarks which removes all exclamation
marks from a given string.
*/
#include <string>
#include <regex>

// My Solution
std::string removeExclamationMarks(std::string str){
    std::string result;
    for(int i : str){
        if(i != '!')
            result += i;
    } return result;
}

// Best Practice
std::string removeExclamationMarks1(std::string str){
    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
    return str;
}

// Best Practice
std::string removeExclamationMarks2(std::string str){
    return std::regex_replace(str, std::regex ("!"), "");
}