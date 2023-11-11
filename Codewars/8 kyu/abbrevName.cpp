/*
Write a function to convert a name into initials. This kata strictly takes two
words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F
*/
#include <string>
using namespace std;

// My Solution
string abbrevName(string name){
    string ret = name.substr(0,1) + '.';
    ret[0] = toupper(ret[0]);
    for(int i = 1; i < name.size(); i++){
        if(name[i] == ' ')
        ret += toupper(name[i+1]);
    } return ret;
}

// Best Practice 
string abbrevName1(string name){
    string ret;
    ret.push_back(toupper(name[0]));
    ret.push_back('.');
    ret.push_back(toupper(name[name.find(' ') + 1] ));
    return ret;
}
