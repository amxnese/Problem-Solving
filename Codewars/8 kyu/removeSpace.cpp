/*
Write a function that removes the spaces from the string, then return 
the resultant string.
*/

#include <string>

#include <string>
using namespace std;

// My Solution
string no_space(const string& x)
{
    string str = "";
    for(int i : x){
        if(i == ' ')
            continue;
        str += i;
    }
    return str;
}

// Best Practice
string no_space(string x)
{
    x.erase(remove(x.begin(), x.end(), ' '), x.end());
    return x;
}