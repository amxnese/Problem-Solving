/*
Complete the solution so that it reverses the string passed into it.
*/

#include <string>
#include <algorithm>
using namespace std ; 

//My Solution
string reverseString (string str)
{
    string reversed = "";
    for(int i = str.size() - 1;i >= 0; i--){
        reversed += str[i]; 
    }
    return reversed ;
}

// Best Practice
string reverseString1(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

//Best Practice
string reverseString2(std::string str) {
    std::reverse(str.begin(), str.end());
    return str;
}

//Best Practice
string reverseString3(string str )
{
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
    return str;
}

// Best Practice
string reverseString4(string str)
{
    string rev;
    for (int i = str.length() - 1; i >= 0; i--){
        rev.push_back(str[i]);
    }
    return rev;
}
